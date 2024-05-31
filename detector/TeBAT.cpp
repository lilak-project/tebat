#include "TeBAT.h"
#include "TBMicromegas.h"

ClassImp(TeBAT);

TeBAT::TeBAT()
    :LKATTPC("tebat","Texas Birmingham Active Target")
{
}

bool TeBAT::BuildDetectorPlane()
{
    AddPlane(new TBMicromegas);
    return true;
}
