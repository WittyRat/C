#include <stdio.h>
main()
{
	int raha,a,b,c,d,e;
	printf ("Sisestage summa, mida ostja saab tagasi:\n") ;
	scanf ("%d", &raha) ;
	b=0;
	
	if(raha>98){
		printf("Kassas pole piisavalt raha.");
		return 0;
	}
	
	if(raha/20>=1){
		a=raha/20;
		if (a>3){
			a=3;
		} else{
		raha=raha-a*20;			
		}
	}
	if(raha/10>=1){
		b=raha/10;
		if(b>2){
			b=2;
		} else{
			raha=raha-b*10;
		}
		
	}
		if(raha/5>=1){
		c=raha/5;
			if(c>3){
			c=3;
		} else{
			raha=raha-c*5;
		}
	}
		if(raha/2>=1){
		d=raha/2;
				if(d>1){
			d=1;
		} else{
			raha=raha-d*2;
		}
	}
		if(raha/1>=1){
		e=raha/1;
				if(e>1){
			e=1;
		} else{
			raha=raha-e*1;
		}
	}
	if(raha>0){
		printf("Pole voimalik anda tapne raha tagasi.");
	} else {
	
	printf("Tagasi tuleb anda:\n");		
	printf("20-euroseid: %d tk\n",a);
	printf("10-euroseid: %d tk\n",b);
	printf("5-euroseid: %d tk\n",c);
	printf("2-euroseid: %d tk\n",d);
	printf("1-euroseid: %d tk\n",e);
	}
	
	
	
	
	
	
	
	
}
