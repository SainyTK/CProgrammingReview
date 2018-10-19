#include<stdio.h>
#include<math.h>
#define N 2

float H(float x[],int n,char name[]);

int main(){
	float x[N] = {4.0/9,5.0/9},sum=0;
	float a1[3] = {5.0/9,1.0/5,4.0/5};
	float a2[3] = {4.0/9,3.0/4,1.0/4};
	float a3[3] = {3.0/9,2.0/3,1.0/3};
	int i;
	
	sum += a1[0] * H(&(a1[1]),2,"Small");
	sum += a2[0] * H(&(a2[1]),2,"Large");
	sum += a3[0] * H(&(a3[1]),2,"green");
	printf("H(Ex,Odor) = %f",H(x,N,"Hx")-sum);
	
	return 0;
}

//entropy
float H(float x[],int n,char name[]){
	int i;
	float sum=0,temp;
	printf("%s :: \n",name);
	for(i=0;i<n;i++){
		if(x[i]!=1&&x[i]!=0){
			temp = x[i]*log2(x[i]);
			printf("%d : %f\n",i,temp);
			sum-=temp;
		}
	}
	printf("ans = %f\n",sum);
	return sum;
}


