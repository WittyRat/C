#include <stdio.h>
#include <math.h>
main()
{
    float S, A, P, K, T;
    printf ("Sisestage laenusumma eurodes:\n");
	scanf ("%f", &S);
	printf ("Sisestage laenuperiood aastades:\n");
	scanf ("%f", &A);
	printf ("Sisestage intressim‰‰r protsentides:\n");
	scanf ("%f", &P);
K = (S * (P/100/12)) / (1 - pow((1 + (P/100/12)),(-A*12)) );
T = K * A * 12;
	printf ("Laenusumma %.2f eurot ja intressimaara %.2f%% puhul on teie igakuine tagasimakse %.2f eurot %.2f aasta jooksul. Tagasimaksed pangale kokku on %.2f eurot." , S, P, K, A, T);
}
