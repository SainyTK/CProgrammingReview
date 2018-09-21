#include<stdio.h>
#include<stdlib.h>

int main(){
	int score[3][5];
	int i,j;
	float sum = 0.0;
	
	
	
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			srand(rand()+i);
			score[i][j] = rand()%10;
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0,sum=0.0;j<5;j++){
			sum += score[i][j];
		}
		printf("Score %d = %.0f, average = %.2f\n",i,sum,sum/5);
	}
	return 0;
}
