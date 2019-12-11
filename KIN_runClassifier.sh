#!/bin/bash

INPUTFILE="test/combined_TTJets_DL.root"

a=(0 1 2)
for i in ${a[@]}; do
    root -b -q "${CMSSW_BASE}/src/TTbarCalib/KIN_trainClassifier.C+(\"BDT\",\"${INPUTFILE}\",${i})";
    mv TMVA.root TMVA_${i}.root;
done
