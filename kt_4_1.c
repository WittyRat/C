#include <stdio.h>
main()
{
    int P, L, M, max, sum, reminder;

	printf("\nSisesta arv: ");
	scanf ("%d", &P);
    M=P;
    if (P==0){
    	max=0;
	}
	while(P > 0){
		int jaak = P % 10;
    	if (jaak>max){
    		max=jaak;
		}
		sum=jaak+sum;
		P=P/10;	
	}
	int min=M%10; 
	while (M > 0)
	{
		reminder = M % 10;
		if (min> reminder)
	 	{
	       min = reminder;
	 	}
		M = M / 10;
    }
	
	printf("Suurim arv on: %d\n", max);
	printf("Vaikseim arv on: %d\n", min);
	printf("Arvude summa on: %d\n", sum);
}
