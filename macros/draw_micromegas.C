void draw_micromegas()
{
    auto mm = new TBMicromegas();
    mm -> AddPar("config_tebat.mac");
    mm -> GetParameterContainer() -> Print();
    mm -> Init();
    //mm -> Draw("caac:colztext");
    //mm -> Draw("cobo:colztext");
    //mm -> Draw("asad:colztext");
    //mm -> Draw("aget:colztext");
    //mm -> Draw("chan:colztext");
    mm -> Draw("layer:colz");
    //mm -> Draw("row:colz");
}
