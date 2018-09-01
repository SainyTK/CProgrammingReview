#include<stdio.h>
#include<stdlib.h>

char *my_strcpy(char* destination, char* source){
	int i;
	for(i=0;*(source+i)!='\0';i++){
		*(destination+i) = *(source+i);
	}
	return destination;
}

int main(){
	char x[10] = "Hello World";
	char y[10];
	printf("%s",my_strcpy(y,x));
	return 0;
}



