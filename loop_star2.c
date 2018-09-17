#include<stdio.h>

int main(){
	int i,j,row;
	printf("Enter the number of row : ");
	scanf("%d",&row);
	for(i=0;i<row;i++){
		for(j=0;j<row;j++){
			if(j<i)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
	return 0;
}
