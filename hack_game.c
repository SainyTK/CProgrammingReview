#include<stdio.h>
#include<stdlib.h>

typedef struct{
	char name[128];
	int max_hp;
}Character;

int main(){
	int num,i,done = 0;
	Character c;
	
	FILE *fp = fopen("save.bin","rb+");
	
	fread(&num,sizeof(int),1,fp);
	printf("%d\n",num);
	
	for(i = 0; i < num && !done; i++){
	
		fread(&c,sizeof(Character),1,fp);
		printf("name : %s\n",c.name);
		printf("max hp : %d\n",c.max_hp);	
		
		if(strcmp(c.name,"Lucy") == 0){
			c.max_hp = 9999;
			fseek(fp,(long)(-sizeof(Character)),SEEK_CUR);
			fwrite(&c,sizeof(Character),1,fp);
			done = 1;
		}
	}
	fclose(fp);
	return 0;
}
