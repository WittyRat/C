#include <stdio.h>
#include <string.h>
main()
{
	FILE *File;
	File = fopen("andmebaas.txt", "a");
	
    int valik;
	char nimi[40], pnimi[50], email[60];
    char rida[80];
    printf ("Sisesta eesnimi:\n");
	scanf ("%s", &nimi);
	printf ("Sisesta perenimi:\n");
	scanf ("%s", &pnimi);
	printf ("Sisesta email:\n");
	scanf ("%s", &email);
	strcpy(rida, "\n");
	strcat(rida, nimi);
	strcat(rida, " ");
	strcat(rida, pnimi);
	strcat(rida, " ");
	strcat(rida, email);
	printf("Sinu kirje on: %s\n", rida);
	printf ("Kas soovid kirjet lisada andmebaasi? (j/e)\n");
	
	while(!kbhit());      // until a key press detected
    valik = getch(); 	
	if (valik == 'j')
	{
		printf("Salvestan");
		fprintf(File, "%s", rida);
	}
	else
	{
		printf("Ei salvesta");
	}
	fclose(File);
    return 0;
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
}
