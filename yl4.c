#include <stdio.h>

/* Tanel Metshein */
/* KT1 yl4 */

int main()
{
   int a=11; 
   int b=7; 
   int c=2; 
   int d=a+b-c; 
   int e=d-a+b; 
   a=a-b; 
   c=a+c;
   int f=b+e;
   b=b+b;
   e=a+a;
   f=e+a;   
   printf("Vastus: %d %d %d %d %d %d!\n", a,b,c,d,e,f) ;
}
