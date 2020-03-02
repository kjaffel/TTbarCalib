# TTBarCalib Instructions
## Joshuha Thomas-Wilsker (IHEP CAS) & Chris Palmer (Princeton)

The following instructions will explain practically how to perform the KIN method analysis. The instructions should provide you with all the information needed to go from collecting a list of samples required for this analysis and running the BTagAnalyzer to extracting the KIN method scale factors and uncertainties and creating the .csv files that are used in the BTV b-tagging scale factors combination. Firstly we need to create a CMSSW working directory and env. Check BTagAnalyzer page for which CMSSW to use for new campaigns and follow the setup instructions in the relevant github README:
```
https://twiki.cern.ch/twiki/bin/viewauth/CMS/BTagAnalyzer
```
We first describe how to run the BTagAnalyzer creating ntuples for a TTbar analysis. It's not in the scope of this README to give detailed information on the BTagAnalyzer but one can find the relevant information following the twiki above or reading through the relevant code in that Git repository. These are what are then used as input to the TTbarCalib code used to create the flat ntuples. We then describe the two separate procedures that perform Kinematic fit method and the 2TagCount method. However, firstly you will need to know where to find the centrally produced datasets for the campaign you are about to embark upon.
## Using DAS
CMS DAS service will help you to find the MC and data files for your scale factor campaign. Example command for Fall17 Production:
```
das_client.py --query="dataset dataset=/*/RunIIFall17MiniAOD-94X_mc2017_realistic_v*/MINIAODSIM status=* " --limit=300
```
## MC Sample Cross-sections:
Many of the samples have changed in various ways. For example, for ttbar samples we now have to use the samples where the ttbar events are divided up according to the decay of the W bosons. This means when we include the samples in the samples.json we need to calculate the cross-section for the process. The was done for the ttbar samples by taking the ttbar production XS from here: https://twiki.cern.ch/twiki/bin/view/LHCPhysics/TtbarNNLO#Top_quark_pair_cross_sections_at
This was then multiplied by the branching fractions of the W boson taken from the PDG: http://pdg.lbl.gov/2017/tables/rpp2017-sum-gauge-higgs-bosons.pdf

For example:
XS ttbar semileptonic = XS * 2( (BR(el+ve)+BR(µ+vµ)+BR(tau+vtau)) * BR(hadronic))
XS ttbar AH = XS * (BR(hadronic) * BR(hadronic))

364.35 = 831.76 * 2(  (10.80% + 10.80% + 10.80%) * 67.60% )

For other samples, the cross-sections on the all new XSDB were used. May want to check TTbar XS. In DB the XS is much lower. This is due to it being automatically computed using the Event generator to NLO. The XS currently is from the latest and greatest NNLO calculation so is more 'correct'. New XS's for DY in XSDB are improved on previous iteration. Previously, just took the value from the event generator (which for madgraph MLM samples is NLO at best). New calculations are at least NLO (if not NNLO) so more accurate (tend to be larger).
### Measuring X-Sections of Samples on McM / DAS client
See here for more detail:
```
https://twiki.cern.ch/twiki/bin/viewauth/CMS/HowToGenXSecAnalyzer#Automated_scripts_to_compute_the
```
Find the MINIAOD dataset name on DAS client if you are using the command that requires the dataset.

Find your sample on McM. Find the MINIAOD prepID of the chain if you are using the command that requires the prepID.
e.g.
```
https://cms-pdmv.cern.ch/mcm/requests?prepid=B2G-RunIIFall17MiniAOD-00045&page=0&shown=127
```
Two possible commands.

For dataset input:
```
./calculateXSectionAndFilterEfficiency.sh -f datasets.txt -c Moriond17 -d MINIAODSIM -n 1000000
```
For McM prepID input:
```
./calculateXSectionAndFilterEfficiency.sh -f datasets_mcm.txt  -m -n 1000000
```
Once the file has finished running you will see the following output:

Before matching = cross-section the output before any matching or filter.
After matching = cross-section after matching but before filter.
Filter efficiency = efficiency of any filter.
After filter = final cross-section.
### Filter Efficiencies
You can use the script from the twiki:
```
https://twiki.cern.ch/twiki/bin/view/CMSPublic/SWGuideSubgroupMC#Measure_filter_efficiencies_and
```
or just find your sample on McM e.g.
```
https://cms-pdmv.cern.ch/mcm/public/restapi/requests/get_test/B2G-RunIIFall17DRPremix-00045
```
To find the associated wmLHEGS in the chain (you basically need the LHE fragments):
```
https://cms-pdmv.cern.ch/mcm/public/restapi/requests/get_test/B2G-RunIIFall17wmLHEGS-00071
```
Click on the circle with the tick on it to get the test command. Copy and paste into a shell script and this should run. In the output look for the string "GenXsecAnalyzer".
## Creation of Ntuples Using the BTagAnalyzer
###Installation
See base installation here https://twiki.cern.ch/twiki/bin/viewauth/CMS/BTagAnalyzer
# ##Producing the trees locally
Change into 'RecoBTag/PerformanceMeasurements/test/'. Then one can run:
```
cmsRun runBTagAnalyzer_cfg.py defaults=<defaults_set_name> runOnData=<True/False> miniAOD=<True/False> useTTbarFilter=<True/False> maxEvents=<# of events (-1 for all)> groups=<Variable set to save>
```
e.g.
```
cmsRun runBTagAnalyzer_cfg.py defaults=2016_SF runOnData=False miniAOD=True useTTbarFilter=True maxEvents=100 groups='TTbar,JetInfo,PV,EventInfo,Josh'
```
- Will run locally the analyzer for testing purposes.
- Note the way to initialise all the relevant defaults using defaults=XXXX
- The defaults can be found in the folder: '/src/RecoBTag/PerformanceMeasurements/python/defaults/'.
- No variables are saved by default. If you want to save variables to the output tree you can include them via the option groups='testfat' (the variable groups are defined in PerformanceMeasurments/python/varGroups.py)
- Need to update '/CMSSW_X_Y_Z/src/RecoBTag/PerformanceMeasurements/python/TTbarSelectionProducer_cfi.py’ and related cc and h files are where you set triggers, base selections etc.
- The default sample the code will run on can be found in the defaults script. Depending on your analysis you may want to change this to a larger sample to perform tests.
- Need to push TTbarSelectionProducer.cc edit to include PSWeights to git.

### Running BTagAnalyzer on the grid
Ensure you have a working CMSSW environment, you voms proxy set up and crab setup:
```
cd CMSSW_XXXXX/src/
cmsenv
voms-proxy-init --voms cms
source /cvmfs/cms.cern.ch/crab3/crab.sh
```
- Change into the directory from which you will submit the jobs e.g. ‘CMSSW_8_0_26_patch1/src/RecoBTag/PerformanceMeasurements/test/ttbar/‘
- Running the following commands will submit the samples described in the data/samples_XXX.json to run on the grid:
```
 python submitToGrid.py -j data/samples_Run2018.json-c ${CMSSW_BASE}/src/RecoBTag/PerformanceMeasurements/test/runBTagAnalyzer_cfg.py -l data/Cert_314472-325175_13TeV_PromptReco_Collisions18_JSON.txt -s
 python submitToGrid.py -j data/syst_samples_Run2016_80X_25ns.json -c $ {CMSSW_BASE}/src/RecoBTag/PerformanceMeasurements/test/runBTagAnalyzer_cfg.py -s ```
```
- Partial submission can be made using the option:  -o csv_list
- In the samples list json, you should consider to leave the names of the MC and data samples as they were originally, with the prefix MC13TeV_ and Data13TeV_, to assure consistency toward all the steps of the measurement.
- To process more quickly the MC jobs can edit number of units per job.
- Need to update the good runs list in submitToGrid.py.
- Adjust —lfn as needed. 
- Githash variable creates the folder where you save the crab output. You can change it into a more friendly name.

### Copying trees
```
 source EosCpDir.sh //For MC samples source
EosCpDirMuEG.sh //For data samples 
```
UPDATE: For this you can use python script '/src/RecoBTag/PerformanceMeasurements/test/ttbar/scripts/xrdcp_script.py'
        This ensures the TTBar samples are split into training and testing at this stage so the pickle files for the
        luminosity scaling are calculated for the number of events in the split samples.

- This script substitute Pedros' checkProductionIntegrity.py script. It is easier (to me) and one can run as soon as ntuple production starts to end, to move from crab output directories to a more simple directory structure which can be which is easily parsed by the local analysis. Once production is finished you can delete original crab directories in EOS.
- Make sure that the number of files in the new simplified path is equal to the one produced with crab. Then you have the option to delete the crab folder note that, e.g. for data, the same datasetname may have from series: MuonEG may have datasample B,C.
- In this case create dedicated script to do the copy (see EosCpDirMuEG.sh). It is always a good practice to check that the files have been properly copied (especially for data).
- Use the script CheckNt.sh. If some files are missing, or new files are arriving from crab, you can use the script MissingFiles_EosCpDir.sh.
- Ensure that the size of the directories are the same for old and copied directory.

## Pileup estimation
```
cd pileup_weights
./runPU.sh
```

Script should create a new pileup weights files using the runPileupEstimation.py script here. Will add the weights histogram for each of the simulated samples.

- Pileup weights correct for the differences between the modelled pileup scenario in simulation and what is measured in data.

- Number of primary vertices is the observable used to determine the weights.

- To create the pileup distribution in data runPileupEstimation.py uses the pileupCalc.py tool.

- The pileup distribution in MC is hard coded. Script uses mixing package to directly access MC pileup distributions which will need updating for later runs (line 6). They can be found at:
```
CMSSW_XXXXX/SimGeneral/MixingModule/python/
```
MC: SimGeneral.MixingModule.mix_2017_25ns_WinterMC_PUScenarioV1_PoissonOOTPU_cfi

- To calculate the final weight for an event:
      - Normalise both distributions.
      - Divide data by MC.
      - Eventually one determines the y-value of the resulting distribution @ the x-value corresponding to the true number of interactions of the MC event.
      - In ntuples:
                    nPUTrue c.f. PileupSummaryInfo object ipu->getTrueNumInteractions() function.
                    nPU c.f. PileupSummaryInfo object ipu->getPU_NumInteractions() function.
      - The number of pileup in any given event must be an integer.
      - nPUTrue is not an integer and is drawn from the full PU distribution input that is a poisson mean of the distribution one gets nPU from.
      - nPU is the actual number of interactions in the event.

- Script to produce a ROOT file under data with the pileup distributions and the weights for a conservative +/-10% variation of the central minBias xsec value assumed.

- To generate files for run dependant scale factors, one needs to create seperated Cert<XXX>.json files from Cert_294927-306462_13TeV_PromptReco_Collisions17_JSON_RunBCDEF.txt file. Used DAS query to find the run numbers for the individual runs e.g.
```
das_client.py --query="run dataset=/MuonEG/Run2017C-17Nov2017-v1/MINIAOD"
```
Then just removed all other runs that werent in the list returned by the das query.

## Creation of flat ntuples using TTbarCalib package
The creation of flat ntuples using the BTagAnalyzer outputs is done using the the runTTbarAnalysis.py script in the TTBarCalib package:
```
python runTTbarAnalysis.py -i /store/group/phys_btag/Commissioning/TTbar/Moriond19_2018_StructuredDir/ -o Moriond19_19-01-24/ -j data/ttbarAnalyser_trainingsamples_Run2017_Summer18Campaign.json -n 50
```
IMPORTANT: Split your ttbar sample to ensure you don't overtrain your classifier. For this you can use python script '/src/RecoBTag/PerformanceMeasurements/test/ttbar/scripts/xrdcp_script.py'
When you split your ttbar samples up for training/testing BDT purposes, one must delete and remake the pickle files. Currently splits sample 50/50, could potentially use less for training.

### Introduction to TTbarCalib package
- Runs local analysis to produce the root files used in the efficiency measurement. MC will be weighted by cross section here.
- Option -n indicates how many threads should be used.  
- The first time the script will produce a pickle file with the weights to be used according to the number of files found, xsec specified in the json file. It is advised to run all samples on a single thread the first time you run (suggest running just one event) to create the aforementioned pickle files otherwise the code crashes (this part is not thread safe). Once the pickle files have been created, you can run on multiple threads.
- The inputs you need (from the BTagAnalyzer step) are usually stored somewhere in the common BTV eos space '/store/group/phys_btag/Commissioning/TTbar/'. If you didn't run the BtagAnalyzer, ask whoever did for the path to the ttbar datasets.
- runTTbarAnalysis.py creates a TTbarEventAnalysis object.
- Output stored in directory named after '-o' command line option.
- Input directory defined by '-i' option.
- Samples used as input can be found in .json file defined by -j option.
- StoreTools.py:
  produceNormalizationCache() function loops over a list of samples and produces a cache file to normalize MC.  
  getEOSlslist() function takes a directory on eos (starting from /store/...) and returns a list of all files with 'prepend' prepended.
  It prints out s.th. like "Produced normalization cache (data/.xsecweights.pck)" the first time you run and the pickle file takes a while.
  It seems that when you prepare the pickle file for the first time it is important to start with one MC sample only at the beginning and do not use -n (it may finish with seg fault but should still produce the pickle) or use -n 2.
  After the first MC sample is processed, you can use even higher -n (e.g. -n 8).
- Make sure that the number of root files equals the num of ntuple files. Sometimes this is needed, because the ntuples->rootfiles step fails.
- If you update the ttrees at any point, the xsec or lumi you have to remove by hand the pickle file otherwise the necessary normalisations will not be recalculated accordingly and will be wrong.:
```
rm nohup.out
rm data/.xsecweights.pck 
```
- Check corrections are up-to-date in TTbarEventAnalysis code:
  - Check trigger and lepton SFs in TTbarEventAnalysis.cc.
  - Check values in getTriggerEfficiency() are up-to-date.
  - Lepton Selection Efficiencies: Currently use 'cutBasedElectronID_Fall17_94X_V1_cff' for electron selection and isTight (=CutBasedIdTight) muon selection. For preliminary results you may have to use an the latest version of the scale factors even if they are a little old. Check here: https://twiki.cern.ch/twiki/bin/view/CMS/Egamma2017DataRecommendations#Electron_Reconstruction_Scale_Fa. Find the .root file for your lepton selection method (cut-based or MVA based) and your working point. Can use new python script to print out values of the pt and eta bins along with the errors that you should add to the appropriate function in TTbarEventAnalysis.cc. Check values in getLeptonSelectionEfficiencyScaleFactor() are match what is printed out.
  - Check lepton scale factors: The scale factors as function of lepton pt and eta. If you need to update these values there is a script already written '/afs/cern.ch/work/j/jthomasw/private/IHEP/BTV/egamma-SFs/' that will produce a .txt with the SF's in. For muons they provide a .json: https://twiki.cern.ch/twiki/bin/view/CMS/MuonWorkInProgressAndPagResults.
  ```
  python calculate_EG_SFs.py > EG_mediumWP_eff_SFs.txt
  ```
  - Check values in TTbarEventAnalysis.cc: getJetResolutionScales() are up-to-date (https://twiki.cern.ch/twiki/bin/viewauth/CMS/JetResolution)
  - Instances of the JEC corrections and uncertainties can be found in TTbarEventAnalysis.h:
    Ensure latest and greatest object corrections e.g. /src/RecoBTag/PerformanceMeasurements/test/ttbar/data/Summer15_25nsV5_DATA_Uncertainty_AK4PFchs.txt
    Can get latest and greatest from https://github.com/cms-jet/JECDatabase/tree/master/textFiles/<version for your data>MC_Uncertainty_AK4PF.txt
    JEC Uncertainty sources, explanations and the <version for your data> can be found at https://twiki.cern.ch/twiki/bin/view/CMS/JECUncertaintySources
    Are you using the correct pileup reweighting file: look for 'puWgtUrl' variable?
    Ensure triggers are set up correctly. Do this in both .h and .cc files

## Data Luminosity
To ensure you aren't missing any data and to find out the integrated luminosity to which you should be scaling MC), one can use the brilcalc tool as demonstrated beneath on the golden json for the 2017 dataset. If it's not 2016 you are looking for one can check here: /afs/cern.ch/cms/CAF/CMSCOMM/COMM_DQM/certification/CollisionsXX/13TeV/ and look for the relevant .json.
```
export PATH=$HOME/.local/bin:/afs/cern.ch/cms/lumi/brilconda-1.1.7/bin:$PATH
brilcalc lumi -i /afs/cern.ch/cms/CAF/CMSCOMM/COMM_DQM/certification/Collisions17/13TeV/Final/Cert_294927-306462_13TeV_PromptReco_Collisions17_JSON.txt -u /pb
```
Output for 2017 data:
Total recorded luminosity: 41860.080

This number is the number to use as the 'lumi' argument when using the plotter.py script.

### Running local analysis for 2TagCount
After b-tag analyzer trees are produced, the first two steps of the 2TagCount analysis are the same.  The first is to run the analysis and make histograms (and trees):
```
python runTTbarAnalysis.py -i /store/group/phys_btag/Commissioning/TTbar/Moriond19_2018_StructuredDir/ --json data/samples_Run2018.json -o /tmp/MYUSERNAME/Moriond19_Run2018 -n 70 --doTwoTag 1
```

Re-organize plots and make data, mc comparison canvases (inclusive 2TagCount plots are in):
```
python plotter.py -i /tmp/MYUSERNAME/Moriond19_Run2018 --json data/samples_Run2018.json --lumi 58000
```

Take the 2TagCount histograms and compute efficiency scale factor comparing the following: 1)  b-tagging effiency for each working point for events with two b-jets at truth level (MC eff) and 2) data minus non-double b-jet MC divided by the number of MC events with two matched particle level b-jets:
```
python TwoTagcountMethodv2.py /tmp/MYUSERNAME/Moriond19_Run2018/plots/plotter.root
```

### Train KinDiscriminator
```
 sh KIN_runClassifier.sh 
```
- After running the local analysis use the kin tree stored in the ttbar sample to train a kinematics discriminator of ttbar-system b-jets vs. ISR/FSR jets in ttbar events. The script compiles and runs KIN_trainClassifier.C which should be modified in case different trainings are required. 
- Rearrange new folders created by KIN_runClassifier.sh.
- Don't forget to split your ttbar sample to ensure you don't overtrain your classifier.
- The number of events used in the training has been optimised to get the best separation between signal and background while maintaining a flat background.
- One must be aware that changing this number can change the shape of the kinematic discriminant.
### Re-running flat ntuples to add mva training to TTrees
```
 python runTTbarAnalysis.py -i /store/group/phys_btag/Commissioning/TTbar/<ntuples_directory> -o <output_directory> -j data/<samples_list>.json --tmvaWgts data/KIN/ -n 4 
```
- Re-run the analysis to store the KIN discriminator value per jet and merge appropriately.
- Make sure that the number of root files equals the num of ntuples.
- Need to be careful about the number of nodes you run jobs on. If you use too many it can cause a errors and result in corrupt files.
### Control plots
```
python plotter.py -i <output directory> -j data/<samples 4 plotter>.json
```
 - Makes control plots and stores all in a ROOT file. Different options may be passed to filter plots, and show differently the plots.
- When merging rootples, be careful because if different sample names are called similarly (eg tW and atW)  you can risk doing double-merging.
- When scaling to a given luminosity (--lumi) ensure that you enter the luminosity in inverse picobarns i.e. 1000 pb-1 not 1 fb-1.
### Taggers
- The tagger json e.g. taggers_Run2017.json, can be found in the data directory.
- This file contains all the information on the taggers and working points you want to derive scale factors for.
- The current naming convention matches the code, if you want to change this you must ensure this is changed in all other relevant files.
- The working points are updated most campaigns so ensure you are synchronised with the other BTV calibration methods.
### Prepare and Perform Fit
```
python Templated_btagEffFitter.py --taggers data/<taggers_WP>.json --inDir output_ntuples_RunBCDEFpuw_addDeepCSV_2018-01-17_MVA/ --outDir fit_dir -n 500
```
- If you already have your templates, use the option '--recycleTemplates'
- Results of the fits will be stored in the pickle output file (efficiencies and the uncertainties).

- Also has option to run channel: ```--channels <121,-143,-169>```
- 121=ee,-143=emu,-169=mumu
- Make sure that all the ntuples are correctly merged: check their size to confirm that.
- Check that the names of the root file are properly saved, with the prefix MC13TeV_ and Data13TeV_.
- The fit is done in two parts:
  1.) Templated_btagEffFitter.py where the templates are prepared and the functions from TTbarSFbFitTools() are run to perform the fit.
  2.) TTbarSFbFitTools.cc where the Roofit implementation of fit actually is.
- As the method dictactes, these templates are filled with one entry per jet.
- Check in the 'lumi' value set correctly in TTbarSFbFitTools.h.
- Check labels on plots are correct in TTbarSFbFitTools.cc.
- Check the value of mistag rates defined in TTbarSFbFitTools.cc (tagger, WP, and jetpt dependent).

### Post Fit Plots
- PostFit plots are made using ' PostFitter.sh '.
- Again check "LUMI=" line is correct.
- This is just a shell script that runs 'createSFbSummaryReport.py' which creates post-fit plots of efficiency measurements and sf values printed in a tex file Note along with a summary of the fit results.
- It may be the script stops because of some latex reason. If so hold return until the script finishes. Varying latex libraries on different machines means this can happen if a method is missing in the library you're using. The output should still be fine, this is an old script that needs updating.
- Among the other results, a csv.root files is produced at some points.
- The histos made are normalised to 1/pb
- In particular "b/c/other_pass0_slice0" contains the inclusive distributions, before any cuts on b tag discriminator WPs.
- So from (b/c/other)_ pass0_slice0->Integral() you can get the relative contribution of b, c, other cases.
- And from (b/c/other)_ pass0_slice0->DrawNormalized() you can compare the templates for the b, c, other cases.
- In general we expect the b and c templates to be comparable.

### SFb reports
- The sfb_report tables will only include the systematics that are in the pickle file (which it uses for input). This means they only include the systematics that can be evaluated via variations of the event weights. If you want to include the systematics that are evaluated using alternative samples, you need to add them by hand yourself at this point. For this you will need to rerun the nominal fits in alternative fit directories using the alternative samples.
- The alternative fitted SFb value is then used as the systematic variation i.e. the systematics are externalised.
- For this you can use SommaQuadratura.cc.
- Take the <Tagger_name>.csv file that contains your results.
- Remove the quotation marks from the values inside the file like before with the kin_calib.csv.
- Now run the grep command like before to get the values of the systematic variation e.g.
```
cat <Tagger_name>.csv | grep central | awk '{printf "%.12f\n", $11}'
```
- Copy these numbers into an appropriate array in SommaQuadratura.cc like before.
- At the end of the script you will also see some commented lines of the type:
```
cout << "~~~{\\small \\it total } & ${\\small" << toterr_up << "/ " << toterr_down << "}$ \\\\ " << endl;
```
- Uncomment/write your own version of this line to get the print out you require.
- Now simply add this to the sfb_report.tex document inside the appropriate table (paying attention to the working points / pt bins etc.).

### Prepare Results for Distribution (nominal and weight systematics)
- Performed by 'prepare_csv.sh '.
- Prepares the .csv file to share the results with others.
- You really need to read carefully all the instructions at the beginning of 'prepare_csv.sh'.
- There are a lot of small things to do to ensure the script performs the way you think it should.

### Additional systematic errors
- Use script 'SommaQuadratura.cc'.
- Example usage:
```
$> root -l SommaQuadratura.cc
```
- SommaQuadratura.cc is macro can:
  a. Evaluate the relative error of the measurement.
  b. Help to understand how the relative error of the measurement evolves when adding new sys.
  c. Recalculate the values plus/minus the total errors for each pT bin, when new sys are added.
  d. Calculate the values of central measurement plus/minus the error due to a new systematic.
- This script is also useful when you have to use the systematic error of a discriminator (e.g. calculated for the csv) for another discriminator (e.g. cmva). Otherwise these values are taken directly from the measured values of the systematic.

- Also useful:
```
$> ./prepare_OtherSys.sh 
```

- Takes as input the values of c. and d. of the previous script . The values of c. have to substitute the current value in the .csv file. The values of d. have to be added to it.

### Prepare Results for Distribution (nominal and all systematics)
Procedure:
1. Add sfvals and sferrs in SommaQuadratura.cc first for the nominal and total weights systematics. More instructions can be found in comments inside the SommaQuadratura.cc script. Check the relative error. This should give you a feeling that things are consistent with what we expect. This part is done where there is the line //Relative error 
2. Add the errors for the different new systematics in the dedicated array.
3. Take the new vals printed out by in SommaQuadratura.cc (in the correct .csv format) and substitute the values of up and down in the default <TaggerName>.csv file and add all the new down and up values for the new systs.

## Additional Information Systematics
### ttbar weight systematics
Some useful reading:
1) Evaluating Theoretical Uncertainties with EDM event weights and which weights are stored in MC:
https://twiki.cern.ch/twiki/bin/view/CMS/ScaleAndPDFUncertaintiesFromEventWeights

2) Accessing the event weights from an EDM file with CMSSW:
https://twiki.cern.ch/twiki/bin/viewauth/CMS/LHEReaderCMSSW

3) Top systematics:
https://twiki.cern.ch/twiki/bin/viewauth/CMS/TopSystematics#Factorization_and_renormalizatio

4) PSWeights:
https://github.com/cms-sw/cmssw/pull/21477

Ensure you have read these and are up-to-date with the run-of-the-mill systematics and think if there is anything new you should add.

In this code, generator weights are stored in the output from the crab jobs (jobs run by the BTagAnalyzer).
The weights are stored in a ttree branch called 'ttbar_w' which is filled @ around line 1460:
```
CMSSW_X_Y_Z/src/RecoBTag/PerformanceMeasurements/plugins/BTagAnalyzer.cc
```
### PDF weights in my sample

To know which integer or string corresponds to which weight use the package here:
```
git clone https://github.com/kdlong/TheoreticalUncertainties
```

It needs to be used inside a CMSSW environment but otherwise runs pretty well out of the box:
```
python getWeightInfoFromEDMFile.py -f /store/mc/RunIIFall17MiniAOD/TTTo2L2Nu_TuneCP5_PSweights_13TeV-powheg-pythia8/MINIAODSIM/94X_mc2017_realistic_v10-v1/60000/002E7FEA-16E0-E711-922D-0242AC130002.root
```

The printout will take the form:
```
<weightgroup combine="envelope" name="scale_variation">
<weight id="1001"> muR=1 muF=1 </weight>
<weight id="1002"> muR=1 muF=2 </weight>
<weight id="1003"> muR=1 muF=0.5 </weight>
<weight id="1004"> muR=2 muF=1 </weight>

<weightgroup combine="hessian" name="PDF_variation">
<weight id="2001"> PDF set = 260001 </weight>
<weight id="2002"> PDF set = 260002 </weight>
```

So for example, the command above gave me:

```
<weightgroup combine="envelope" name="scale_variation">
<weight id="1001"> lhapdf=306000 renscfact=1d0 facscfact=1d0 </weight>
<weight id="1002"> lhapdf=306000 renscfact=1d0 facscfact=2d0 </weight>
<weight id="1003"> lhapdf=306000 renscfact=1d0 facscfact=0.5d0 </weight>

<weightgroup combine="hessian" name="PDF_variation1">
<weight id="2000"> lhapdf=306000 </weight>
<weight id="2001"> lhapdf=306001 </weight>
<weight id="2002"> lhapdf=306002 </weight>
<weight id="2003"> lhapdf=306003 </weight>
<weight id="2004"> lhapdf=306004 </weight>
```
e.g. Systematic sample: https://cms-pdmv.cern.ch/mcm/requests?range=TOP-RunIIFall17wmLHEGS-00042,TOP-RunIIFall17wmLHEGS-00065&page=0&shown=127

### nonttXsec Systematic
30% cross-section normalisation uncertainty on non-tt background estimation.
30% was a carefully evaluated choice with Pedro Silva during the Moriond 17 version of the method. The major background is tW and 30% is conservative but on the pratical side unless a measurement of tW is made or we have a complete set of MCs with QCD scale variations at ME and PS levels for tW (which we don't), it's probably the value to use as it was used in other TOP analyses.
30% was a conservative variation of the non-ttbar backgrounds in the 2TagCount method based on the data-driven estimations: https://indico.cern.ch/event/548571/contributions/2231888/attachments/1304815/1950801/btag_ttbar_sf_06-07-2016.pdf (slide #4)

To run the non-tt normalisation xsection uncertainty, increase/decrease the x-sec for non-tt backgrounds by 30% in 'storeTools.py'. You can find the code to do so commented out at present. Simply uncomment the code and run TTbar analyser on non-tt MC directing the output to a new directory. hadd the samples as usual and collect in directory ready for fit. Copy the nominal data and ttbar outputs from the nominal output directory to this directory and run fit machinery.

## Tips 'n' tricks
### Debugging the BTagAnalyzer
Ensure all the versions of the various packages you are using are correct. You can do this by running the b-tag analyzer interactively from the 'ttbar/test' directory:
```
python -i runBTagAnalyzer_cfg.py defaults=Moriond18 useTTbarFilter=True runFatJets=True miniAOD=True
```
You can then run various process' e.g.
```
process.btagana
```
which will print to screen the EDAnalyzer that is run by that part of the process. The following commands will show you the version of DeepFlavour you are using:
```
process.selectedUpdatedPatJetsPFlow
process.updatedPatJetsTransientCorrectedPFlow
process.updatedPatJetsTransientCorrectedPFlow.discriminatorSources
process.pfDeepFlavourJetTagsPFlow
```
If you want to check the difference between the various defaults you can check the python scripts:
```
diff test/python/defaults/Moriond18.py test/python/defaults/Summer18.py
```
## CRAB
'allowNonValidInputDataset' - Add to config and you can run on non-valid datasets e.g.:
```
config_file.write('config.Data.allowNonValidInputDataset=True\n')
```
##  FIN
