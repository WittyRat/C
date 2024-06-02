#include <stdio.h>
main()
{
    float k, p;
    printf ("Sisestage päeva numbri k:\n");
	scanf ("%f", &k);
	p=k;
	if(k>0 && k<=365)
	{
		if(k>7)
		{
			k=(int)k%7;
		}
		switch ((int)k) { 
  case 1 :
  	printf("Aasta %d. paev on esmaspaev", (int)p);
    break;
  case 2 :
  	printf("Aasta %d. paev on teisipaev", (int)p);
    break;
  case 3 :
  	printf("Aasta %d. paev on kolmapaev", (int)p);
  	break;
  	  case 4 :
  	printf("Aasta %d. paev on neljapaev", (int)p);
    break;
  case 5 :
  	printf("Aasta %d. paev on reede", (int)p);
    break;
  case 6 :
  	printf("Aasta %d. paev on laupaev", (int)p);
  	break;
  default:
  	printf("Aasta %d. paev on puhapaev", (int)p);
  }
	}
	else
	{
		printf("teie arv %d jai soovitud vahemikust valja. Proovi uuesti!", (int)k);
	}
}
