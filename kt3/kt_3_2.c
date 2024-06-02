#include <stdio.h>
main()
{
    float P, S, Y, D, K, YK, DK;
    	printf ("Sisestage paevade arv:\n");
	scanf ("%f", &P);
	    printf ("Sisestage soitude arv:\n");
	scanf ("%f", &S);
	    printf ("Sisestage uhekordse pileti hind:\n");
	scanf ("%f", &Y);
	    printf ("Sisestage paeva pileti hind:\n");
	scanf ("%f", &D);
	    printf ("Sisestage kuukaardi hind:\n");
	scanf ("%f", &K);
	
	YK=S*Y;
	DK=P*D;
	
	//K, YK, DK
	
	printf("Turist viibib linnas %.2f päeva ja teeb %.2f bussisõitu.\n Piletite hinnad:\n Ühekordne pilet: %.2f\n Päevapilet: %.2f\n Kuukaart: %.2f.\n Ühekordsete piletite hind kokku: %.2f\n Päevapiletite hind kokku: %.2f\n" , P, S, Y, D, K, YK, DK);
	printf("========================================\n");
		if (K<YK && K<DK)
		{	
		printf("Soodsaim variant on kuukaart.\n");
		}
		else if(YK<K && YK<DK)
		{
		printf("Soodsaim variant on %d uhekordset piletit.\n", (int)S);	
		}
		else
		{
		printf("Soodsaim variant on %d paevapiletit.\n", (int)P);	
		}
}
