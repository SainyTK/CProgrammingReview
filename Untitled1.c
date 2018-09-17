#include<stdio.h>
#include<string.h>
#define NUM 20
void replace_space(char *s, char c);

int main(){
	char ch[NUM];
	char c;
	
	printf("Enter: ");
	gets(ch);
	printf("Char: ");
	scanf("%c",&c);
	replace_space(&ch,c);
	printf("= %s",ch);
return 0;
}

void replace_space(char *s, char c){
//	int i;
//	for(i=0;i<NUM;i++){
//		if( s[i] == ' ')
//			s[i] = c ;
//	}

	int i;
	for(i=0;*(s+i)!='\0';i++){
		if(*(s+i) == ' ')
			*(s+i) = c;
	}

//	while(*s!='\0'){
//		if(*s == ' ')
//			*s = c;
//		s++;
//	}
}
