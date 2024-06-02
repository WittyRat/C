#include <stdio.h>
main()
{
    float X, F;
    printf ("Sisestage x v‰‰rtus:\n");
	scanf ("%f", &X);
	if(X<=0)
	{
		F=-1;
	}
	else if(X<=10)
	{
		F=X/2;
	}
	else
	{
		F=X*X+2*X;
	}
	printf("Funktsiooni F v‰‰rtus kohal x on %.2f" , F);
}
