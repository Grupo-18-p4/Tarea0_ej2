#ifndef _C_
#define _C_

#include <iostream>
using namespace std;


class A;
class B;

class C
{   
 
   private:
      A *myb;
      C *myc;
      int c; 
   public:
      void mensajeC();
      C(int c);
};

#include "A.h"
#include "B.h"

#endif
