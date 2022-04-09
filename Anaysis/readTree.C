{
  TFile *f1 = new TFile("analyzed_gm2slac_run01896.root");
  TTree *t1 = (TTree*)f1->Get("anatree");

  TFile *f2 = new TFile("Run23_20160604072759.002.root");
  //TTree *t2 = (TTree*)f2->Get("t2");
  Double_t p1a, p2a, pz;
  Double_t random;
  Int_t ev;
  t1->SetBranchAddress("pin1_amplitude",&p1a);
  t1->SetBranchAddress("pin2_amplitude",&p2a);
  //t1->SetBranchAddress("pz",&pz);
  //t1->SetBranchAddress("random",&random);
  //t1->SetBranchAddress("ev",&ev);
  
  //create two histograms
  TH1D *hpx   = new TH1D("hpx","pin amp1 distribution",100,600,700);
  TH2D *hpxpy = new TH2D("hpxpy","A1 vs A2",100,600,700,100,600,700);

  //read all entries and fill the histograms
  Long64_t nentries = t1->GetEntries();
  for (Long64_t i=0;i<nentries;i++) {
    t1->GetEntry(i);
    hpx->Fill(p1a);
    hpxpy->Fill(p1a,p2a);
  }

  hpx->Draw();
  hpxpy->Draw("surf1");
  
}
