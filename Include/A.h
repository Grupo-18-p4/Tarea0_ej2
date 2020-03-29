#ifndef _A_
#define _A_

#include "B.h"
#include "C.h"

#include <iostream>
using namespace std;


class A
{

    private:
        B *myb;
        C *myc;
        int a;
    public:
        void mensajeA();
        A(int a);
 
};

#endif
