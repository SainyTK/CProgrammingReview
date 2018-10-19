#include<stdio.h>
#define PI 3.14159

int main(){
	int play1,play2;
	
	printf("First player, please enter your number : ");
	scanf("%d",&play1);
	printf("Let's start!\n");
	
	do{
		printf("Second player, please enter your number : ");
		scanf("%d",&play2);
		if(play2>play1*10){
			printf("Much smaller!!\n");
		}else if(play2>play1){
			printf("smaller\n");
		}else if(play2*10<play1){
			printf("Much bigger!!\n");
		}else if(play2<play1){
			printf("Bigger\n");
		}
	}while(play2!=play1);
	
	printf("Congratulation!!!");
	return 0;
}
