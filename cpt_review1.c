#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* find_char(char s[],char c){
	while(1){
		if(*s=='\0')
			return NULL;
		else if(*s==c)
			return s+1;
		else
			s++;
	}
}

int main(){
	char str[128],c;
	
	gets(str);
	scanf("%c",&c);
	
	printf("S:%s\n",str);
	printf("C:%c\n",c);
	printf("=");
	if(find_char(str,c)!=NULL)
		printf("%c\n",*find_char(str,c));
	return 0;
}



