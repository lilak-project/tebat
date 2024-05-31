#ifndef TBMICROMEGAS_HH
#define TBMICROMEGAS_HH

#include "LKMicromegas.h"

class TBMicromegas : public LKMicromegas
{
    public:
        TBMicromegas();
        TBMicromegas(const char *name, const char *title);
        virtual ~TBMicromegas() {};

    ClassDef(TBMicromegas, 1)
};

#endif
