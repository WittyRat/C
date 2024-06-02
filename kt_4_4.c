#include <stdio.h>
#include <time.h>
#include <stdlib.h>
main()
{
	int k,i,counter,j;
	double keskmine,sum;
srand(time(NULL));
counter=10;
int arvud[4];

for( k = 0; k <= 10; k = k + 1 ){
printf("%3d. | ", k);
for( i = 0; i <= 10; i = i + 1 ){
int r = rand() % 99 + 1;
sum=sum+r;
//arvud[i]=r;
printf("%2d ", r);

}
keskmine=sum/counter;
printf(" | %.2f\n", keskmine);
sum=0;
}

	
	
	
	
	
}
