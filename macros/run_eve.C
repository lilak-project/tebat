void run_eve()
{
    auto run = new LKRun();
    run -> AddDetector(new AToMX());
    run -> AddPar("config_eve.mac");
    run -> Add(new LKPulseShapeAnalysisTask);
    run -> Add(new LKEveTask);
    run -> Init();

    run -> ExecuteNextEvent();
    //run -> ExecuteEvent(1);
}
