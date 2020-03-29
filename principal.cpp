#include "../include/A.h"
#include "../include/B.h"
#include "../include/C.h"

A *a;
B *b;
C *c;
int main()
{
a = new A(1);
b = new B(3);
c = new C(5);    
a->mensajeA();
b->mensajeB();
c->mensajeC();

}
