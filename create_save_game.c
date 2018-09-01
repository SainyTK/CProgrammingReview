#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	char name[128];
	int max_hp;
}Character;


int main(){
	FILE *fp;
	int num = 4;
	Character c;
	
	if((fp = fopen("save.bin","wb"))==NULL){
		printf("Error opening file!");
		exit(1);
	}
	
	//fwrite(address_data,size_data,numbers_data,pointer_to_file);
	fwrite(&num,sizeof(int),1,fp);
	
	c.max_hp = 50;
	strcpy(c.name,"Tom");
	fwrite(&c,sizeof(Character),1,fp);
	
	c.max_hp = 60;
	strcpy(c.name,"DD");
	fwrite(&c,sizeof(Character),1,fp);
	
	c.max_hp = 50;
	strcpy(c.name,"Lucy");
	fwrite(&c,sizeof(Character),1,fp);
	
	c.max_hp = 50;
	strcpy(c.name,"Cat");
	fwrite(&c,sizeof(Character),1,fp);
	
	fclose(fp);
	return 0;
}
