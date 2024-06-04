void run_eve()
{

    auto run = new LKRun();
    cout<<"TEST"<<endl;
    run -> AddDetector(new TeBAT());
    run -> AddPar("config_eve.mac");
    run -> Add(new LKPulseShapeAnalysisTask);
    run -> Add(new LKEveTask);
    run -> Init();

    run -> ExecuteNextEvent();
    //run -> ExecuteEvent(1);
}
