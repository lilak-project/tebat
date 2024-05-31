#ifndef TEBAT_HH
#define TEBAT_HH

#include "LKLogger.h"
#include "LKATTPC.h"

class TeBAT : public LKATTPC
{
    public:
        TeBAT();
        virtual ~TeBAT() { ; }
        virtual bool BuildDetectorPlane();

    ClassDef(TeBAT,1);
};

#endif
