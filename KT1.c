#include <stdio.h>

/* Tanel Metshein */
/* KT1 yl3 */

int main()
{
   int a=7; 
   int b=3; 
   int c=5; 
   int f=a; 
   a=b; 
   int e=c; 
   b=e;
   int d=a;
   c=f;   
   printf("Vastus: %d %d %d %d %d %d!\n", a,b,c,d,e,f) ;
}
