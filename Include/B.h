#ifndef _B_
#define _B_


#include "C.h"

#include <iostream>
using namespace std;

class A;

class B
{   

    private:
        A *myb;
        C *myc;
        int b;  
    public:
        void mensajeB();
        B(int B);
};

#include "A.h"

#endif
