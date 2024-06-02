#include <stdio.h>
main()
{
    float B, AP, A, K;
    printf ("Mis on teie igakuine brutopalk eurodes?:\n");
	scanf ("%f", &B);
	AP=B*12;
	if(AP<=14400.0)
	{	
		A=500*12;
	}
	else if(AP<=25200)
	{
		A=6000-(6000*(AP-14400)/10800);
	}
	else 
	{
		A=0;
	}
	K=A/12;
	printf("Teie maksuvaba tulu kuus on %.2f eurot ning aastas on %.2f eurot." , K, A);
}
