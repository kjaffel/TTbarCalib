import optparse, os, sys, ROOT

# Class holding all TGraphs that contain electron reco. SFs.
# Each TGraph contains scale factors across the eta range for a single pt range.
class SFGraphs(object):
    def __init__(self,name):
        self.name = name
        self.graph = None

    def print_SFs(self, graphobj, graphkey, output_txt):
        npoints = graphobj.GetN()
        xpoints_central = {}
        xpoints_errors = {}
        ypoints_central = {}
        ypoints_errors = {}

        graphname = ''
        if graphkey == 'grSF1D_0': graphname = '10pt20'
        if graphkey == 'grSF1D_1': graphname = '20pt35'
        if graphkey == 'grSF1D_2': graphname = '35pt50'
        if graphkey == 'grSF1D_3': graphname = '50pt100'
        if graphkey == 'grSF1D_4': graphname = '100pt200'
        if graphkey == 'grSF1D_5': graphname = '200pt500'

        for n in xrange(0,npoints):
            tempx=ROOT.Double()
            tempy=ROOT.Double()
            graphobj.GetPoint(n,tempx,tempy)
            xpoints_central[n] = tempx
            xpoints_errors = graphobj.GetErrorX(n)
            ypoints_central[n] = tempy
            ypoints_errors = graphobj.GetErrorY(n)
            #print 'Central x-value: %f , error: %f' % (tempx, graphobj.GetErrorX(n))
            etabin_lowedge = tempx - graphobj.GetErrorX(n)
            etabin_highedge = tempx + graphobj.GetErrorX(n)
            print graphname
            print 'Eta bin low edge: %f , eta bin high edge: %f' % (etabin_lowedge, etabin_highedge)
            print 'Central y-value: %f , error: %f' % (tempy, graphobj.GetErrorY(n))

def main():
    fIn_name = '2016LegacyReReco_ElectronTight_Fall17V2.root'
    fIn = ROOT.TFile.Open(fIn_name)
    output_txt_file = open("Legacy2016_EG_mediumWP_eff_SFs.txt","w")
    graphs = {}
    #try:
    # Loop over TGraphs for different pt SetRangeUser
    for tkey in fIn.GetListOfKeys():
        key = tkey.GetName()
        obj = fIn.Get(key)
        if not obj.InheritsFrom('TGraphErrors') :
            continue
        if not key in graphs:
            graphs[key] = SFGraphs(key)
        graphs[key].print_SFs(graphobj=obj, graphkey=key, output_txt=output_txt_file)
    #except:
    #    print 'Issue caused in loading SFGraphs from % ' % (fIn_name)

if __name__ == '__main__':
    sys.exit(main())
