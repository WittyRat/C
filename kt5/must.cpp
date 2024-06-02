#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
{
    int i, loop, c, j;
	printf("Kasutajate andmebaas\n");
	printf("Allikas: mockaroo.com\n");
	
	fpos_t position;
    char Rida[80];
    char *kirjed[16];
    FILE *SF;
    SF = fopen("andmebaas.txt","r");
		
	


			for (i = 0; i < 16; i++)
	{
        fgets(Rida, 80, SF);
       // kirjed[i]=Rida;
		printf("\n%s", Rida);	
	}

		 /*   for ( j = 0; j < 16; j++ )
			{
		    printf("%s\n", kirjed[j] ); 
			}*/
           
		

    
    



}





