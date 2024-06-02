#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int pilet[5][5]={{7,18,43,60,62} , {5,29,31,55,70} , {12,16,38,54,69} , {9,22,40,48,72} , {15,3,41,52,71}};
	int numbrid[40]={30, 11, 56, 50, 54, 67, 74, 39, 1, 45, 68, 20, 3, 14, 59, 4, 31, 26, 35, 21, 12, 37, 71, 13, 7, 18, 16, 58, 69, 10, 44, 53, 17, 36, 38, 47, 75, 34, 19, 48};

	nurgad(pilet,numbrid);
	diagonaalid(pilet,numbrid);
	taismang(pilet,numbrid);
}


nurgad(int pilet[5][5], int numbrid[40])
{
	    int nurk1 = 0;
    int nurk2 = 0;
    int nurk3 = 0;
    int nurk4 = 0;
	int i, j;
    for (i = 0; i < 40; i++){
    
        if (numbrid[i]==pilet[0][0]){
        	nurk1=1;
		}
		if (numbrid[i]==pilet[0][4]){
        	nurk2=1;
		}
        if (numbrid[i]==pilet[4][0]){
        	nurk3=1;
		}
        if (numbrid[i]==pilet[4][4]){
        	nurk4=1;
		}				
    }
    if (nurk1+nurk2+nurk3+nurk4==4){
    printf("Nurkademäng: võitnud\n");
}
	else{
    printf("Nurkademäng: ei võitnud\n");		
	}
}


//--------------------
diagonaalid(int pilet[5][5], int numbrid[40])
{
	int nurk1 = 0;
    int nurk2 = 0;
    int nurk3 = 0;
    int nurk4 = 0;
    int nurk5 = 0;
    int nurk6 = 0;
    int nurk7 = 0;
    int nurk8 = 0;
    int nurk9 = 0;
	int i, j;
    for (i = 0; i < 40; i++){
    
        if (numbrid[i]==pilet[0][0]){
        	nurk1=1;
		}
		if (numbrid[i]==pilet[0][4]){
        	nurk2=1;
		}
        if (numbrid[i]==pilet[4][0]){
        	nurk3=1;
		}
        if (numbrid[i]==pilet[4][4]){
        	nurk4=1;
		}
	    if (numbrid[i]==pilet[1][1]){
        	nurk5=1;
		}
		if (numbrid[i]==pilet[1][3]){
        	nurk6=1;
		}
        if (numbrid[i]==pilet[2][2]){
        	nurk7=1;
		}
        if (numbrid[i]==pilet[3][1]){
        	nurk8=1;
		}
        if (numbrid[i]==pilet[3][3]){
        	nurk9=1;
		}						
    }
    if (nurk1+nurk2+nurk3+nurk4+nurk5+nurk6+nurk7+nurk8+nurk9==9){
    printf("Diagonaalidemäng: võitnud\n");
}
	else{
    printf("Diagonaalidemäng: ei võitnud\n");		
	}
}

taismang(int pilet[5][5], int numbrid[40]){

int i,k, j, sum;
sum=0;
    for (i = 0; i < 5; i++){
      for (j = 0; j < 5; j++){
        for (k=0; k<40; k++){
			if (numbrid[k]==pilet[i][j])
			{
				sum++;
			}
				//printf("%d %d\n",numbrid[k],pilet[i][j]);
			
    }
}
}
if (sum == 25)
{
	printf("Võitsid taismangu");
}
else
{
	printf("taismang: Ei võitnud");
}

}

