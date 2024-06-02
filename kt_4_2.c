#include <stdio.h>
main()
{
	int a,b,c,d,i,S,j,k,valem;
	int counter=0;
	printf ("Sisesta arv:\n") ;
	scanf ("%d", &S) ;
	int arvud[4];
	i=0;

	for( k = 1000; k < 10000; k = k + 1 ){
		b=k;
		//printf("%d", i);

	
	//arvu lisamine massiivi
		/*while(i > 0){
			int jaak = i % 10;
			arvud[counter]=jaak;
			counter=counter+1;
		
	
			i=i/10;
		}*/
		for(j=0; j<4; j=j+1){
			int jaak = b % 10;
			arvud[counter]=jaak;
			counter=counter+1;
			//printf("%d", jaak);
			b=b/10;			
		}
		
		counter=0;
		valem=arvud[3]-arvud[2]+arvud[1]-arvud[0];
		if (valem==S){
			i++;
		//printf("%d\n", valem);
		
		//massiivist lugemine
		for(j=0; j<4; j=j+1){
		printf("%d", arvud[j]);
	}
		printf("\n");
	}
		
	}
	printf("Vastuseid kokku: %d",i);
	
	
	
	
	
	
	
	
	
}
