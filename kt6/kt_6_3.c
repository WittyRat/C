#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
    int i, loop, klahv, d, b, bin, dec	;
		
	printf("Arvususteemi teisendamise programm\n");
	printf("Vajuta 'd', et teisendada 2->10\n");
	printf("Vajuta 'b', et teisendada 10->2\n");
	printf("Vajuta 'v', et valjuda programmist\n");
	
	klahv = 0;                  
    while(klahv != 'v')          
    {
        if (klahv == 'd')
        {
        printf("Valisid 2->10: \n");
     	printf("Palun sisestage oma arv: ");scanf("%d", &d);
     	dec = kummend(d);
		printf("Sinu sisestatud arv kummnendsusteemis on %d\n", dec);	
		printf("Tee uus valik\n");	
		}
		else if(klahv == 'b')
		{
    	printf("Valisid 10->2: \n");
     	printf("Palun sisestage oma arv: ");scanf("%d", &b);
     	bin = kahend(b);
		printf("Sinu sisestatud arv kahendsusteemis on %d\n", bin);	
		printf("Tee uus valik\n");	
		}
	/*	else
		{
		printf("sellist klahvi valikus ei ole\n");
    	} */
		while(!kbhit());      // until a key press detected
        klahv = getch();            // fetch that key press
    }
    return 0;
    
    



}

int kahend(int n) {
  int bin = 0;
  int rem, i = 1;

  while (n!=0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }

  return bin;
}

int kummend(int n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}


