#include <stdio.h>
#include <conio.h>
main()
{
    int i, loop, c;
	printf("Kasutajate andmebaas\n");
	printf("Allikas: mockaroo.com\n");
	
	fpos_t position;
    char Rida[80];
    FILE *SF;
    SF = fopen("andmebaas.txt","r");
	
	
	
	c = 0;                  
    while(c != 'v')          
    {
        if (c == 'j')
        {
        printf("Järgmine leht:\n");		
    	// Kontspektist puudub, kuidas teksti failist vahemiku kuvada.
    	for (i = 0; i < 5; i++)
	{
        fgets(Rida, 80, SF);
		printf("\n%s", Rida);	

	}
		}
		else if(c == 'e')
		{
		printf("Eelmine leht:\n");
		for (i = 5; i > 0; i--)
	{
        fgets(Rida, 80, SF);
		printf("\n%s", Rida);	

	}	
		}
		else
		{
		printf("Avaleht\n");

			for (i = 0; i < 5; i++)
	{
        fgets(Rida, 80, SF);
		printf("\n%s", Rida);	

	}
    	}
		while(!kbhit());      // until a key press detected
        c = getch();            // fetch that key press
    }
    return 0;
    
    



}





