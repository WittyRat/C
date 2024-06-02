#include <stdio.h>

/* Tanel Metshein */
/* KT1 yl5 */

int main()
{
   int a=3; 
   int b=1; 
   int c=5; 
   int d=4; 
   int e=2;
   int abimuut;
   abimuut=a;
   a=b;
   b=e;
   e=c;
   c=abimuut;
    printf("Vastus: %d %d %d %d %d!\n", a,b,c,d,e) ;
}
