#include <stdio.h>
main()
{
    float C, F, K, Re;
    printf ("Sisesta temperatuur Celsiuse skaala jargi:\n");
	scanf ("%f", &C);
F = C * 1.8 + 32;
K = C + 273.15;
Re = C * 4 / 5;
	printf ("%.2f Celsiuse kraadi = %.2f Fahrenheiti kraadi = %.2f Kelvini kraadi = %.2f Reaumuri kraadi." , C, F, K, Re);
}
