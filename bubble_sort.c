#include<stdio.h>

int main(){
	int values[] = {10,5,2,7,9,12};
	int i,j,temp;
	
	for(i=0;i<6;i++){
		printf("%d ",values[i]);
	}
	
	for(i=5;i>=0;i--){
		for(j=0;j<i;j++){
			if(values[j]>values[j+1]){
				temp = values[j];
				values[j] = values[j+1];
				values[j+1] = temp;
			}
		}
	}
	
	printf("\n");
	
	for(i=0;i<6;i++){
		printf("%d ",values[i]);
	}
	
	return 0;
}
