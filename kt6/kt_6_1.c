#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int massiiv[4][4];
int massiiv_kaks[4][4];
int massiiv_kolm[4][4];
int sum_uks, sum_kaks, sum_kolm;
int rows, columns;
int random;

srand((unsigned)time(NULL));

for(rows=0;rows<4;rows++)
    {
        for(columns=0;columns<4;columns++)
            {
                random=rand()%100;
				sum_uks+=random;
                massiiv[rows][columns] = random;
                printf("%i ",massiiv[rows][columns]);
            }

        printf("\n");
    }
//printf("%d", sum_uks);
printf("\n");
//massiiv_kaks
for(rows=0;rows<4;rows++)
    {
        for(columns=0;columns<4;columns++)
            {
                random=rand()%100;
				sum_kaks+=random;
                massiiv_kaks[rows][columns] = random;
                printf("%i ",massiiv_kaks[rows][columns]);
            }

        printf("\n");
    }
printf("\n");   
for(rows=0;rows<4;rows++)
    {
        for(columns=0;columns<4;columns++)
            {
                random=rand()%100;
				sum_kolm+=random;
                massiiv_kolm[rows][columns] = random;
                printf("%i ",massiiv_kolm[rows][columns]);
            }

        printf("\n");
    }
if (sum_uks > sum_kaks && sum_uks > sum_kolm)
{
	printf("esimese massiivi summa: %d\n", sum_uks);
	massiivi_sisu(massiiv);
}
else if (sum_kaks > sum_uks && sum_kaks > sum_kolm)
{
	printf("teise massiivi summa: %d\n", sum_kaks);
	massiivi_sisu(massiiv_kaks);
}
else if (sum_kolm > sum_uks && sum_kolm > sum_kaks)
{
	printf("kolmanda massiivi summa: %d\n", sum_kolm);
	massiivi_sisu(massiiv_kolm);	
}
printf("-----------------\n");
suurem_massiiv(massiiv, massiiv_kaks);


return 0;
} // main

massiivi_sisu(int arr[4][4])
{
    int i, j;
    for (i = 0; i < 4; i++){
      for (j = 0; j < 4; j++){
        printf("%d ", arr[i][j]);
    }
    printf("\n");
}
}

suurem_massiiv(int arr[4][4], int arrr[4][4])
{
	int sum_1, sum_2;
	int i, j;
    for (i = 0; i < 4; i++){
      for (j = 0; j < 4; j++){
        sum_1+=arr[i][j];
        sum_2+=arrr[i][j];
    }
    if (sum_1>sum_2)
    {
    	for (i = 0; i < 4; i++){
      		for (j = 0; j < 4; j++){
        	printf("%d ", arr[i][j]);
    }
    printf("\n");
}
	}
	else
	{
		for (i = 0; i < 4; i++){
      		for (j = 0; j < 4; j++){
        	printf("%d ", arrr[i][j]);
    }
    printf("\n");
}
	}
}
	
	
}
