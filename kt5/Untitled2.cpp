
#include <conio.h>
#include <stdio.h>
main()
{
	int i, loop;
	printf("Kasutajate andmebaas\n");
	printf("Allikas: mockaroo.com\n");
	char c;
	
    char Rida[80];
    FILE *SF;
    SF = fopen("andmebaas.txt","r");
    	
i=0;
while(fscanf(SF, "%s", Rida))
{
    array[i] = str;
    i++;
	
	
	
}
	fclose(SF);
	

	
	
	
}
    	
    	
    	
   /* while (fgets(Rida, 80, SF), j<5)
		printf("\n%s", Rida);*/
	
	for (i = 0; i < 5; i++)
	{
        fgets(Rida, 80, SF);
		printf("\n%s", Rida);	

	}
	
	
	
	fclose(SF);
	

	
	
	
}
