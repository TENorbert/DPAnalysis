#ifndef AnaInput_H
#define AnaInput_H

#include "TObject.h"
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <math.h>
#include <TMath.h>
#include <TH1.h>
#include <TH2.h>
#include <THStack.h>
#include <TFile.h>
#include <TChain.h>
#include <TTree.h>
#include <TBranch.h>
#include <TLeaf.h>
#include <TString.h>
#include <TSystem.h>
#include <TLorentzVector.h>
//#include "WFormat.h"

using namespace std;

class AnaInput : public TObject {

private:


public:

   AnaInput();     
   ~AnaInput();     

   vector<TTree*> GetForest( string DataSet, TString treeName );

   TTree* GetTree( string fName, TString treeName, TFile* file = NULL );

   double NormalizeComponents( string theChhannel, string cfgFile = "DataCard.txt" );
   
   void GetParameters( string paraName, int* thePara, string cfgFile ="DataCard.txt" );
   void GetParameters( string paraName, double* thePara, string cfgFile ="DataCard.txt" );
   void GetParameters( string paraName, string* thePara, string cfgFile ="DataCard.txt" );
   void GetParameters( string paraName, vector<double>* thePara, string cfgFile ="DataCard.txt" );
   void GetParameters( string paraName, vector<string>* thePara, string cfgFile ="DataCard.txt" );
   void GetParameters( string paraName, vector<int>* thePara, string cfgFile ="DataCard.txt" );

   //ClassDef(AnaInput, 1);

};

//#if !defined(__CINT__)
//    ClassImp(AnaInput);
#endif

