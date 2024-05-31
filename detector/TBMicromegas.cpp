#include "TBMicromegas.h"

ClassImp(TBMicromegas)


TBMicromegas::TBMicromegas()
    :TBMicromegas("TBMicromegas","TeBAT Micromegas")
{
}

TBMicromegas::TBMicromegas(const char *name, const char *title)
    :LKMicromegas(name, title)
{
    fDetName = "tebat";
}
