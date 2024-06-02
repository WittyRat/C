#include <stdio.h>
main()
{
    float P, K, H, T, M;
    printf ("Teekonna pikkus:\n");
	scanf ("%f", &P);
	printf ("Tarbitud kutuse kogus:\n");
	scanf ("%f", &K);
	printf ("Kutuse liitri hind:\n");
	scanf ("%f", &H);
//    scanf ("Teekonna pikkus: %f%f%f", &P, &K, &H);
//    printf("%.2f%.2f%.2f", P, K, H); 
T = K / (P / 100);
M = K * H;
	printf ("Olete soitnud %.2f kilomeetrit ning kulutanud %.2f liitrit kutust. Teie auto kutusekulu oli %.2f liitrit 100 kilomeetri kohta. Soidu maksumus oli %.2f eurot" , P, K, T, M);
}
