#include<stdio.h>
#include<math.h>
#define N 5
int main(){
	float x[N] = {14.4, -2, 3.6, 9, 0},sum=0,xbar,sdev_x,r_x;
	float y[N] = {7, 3.1, 5, 13, 0.4},ybar,sdev_y,r_y;
	int i;
	printf("Calculate X : \n");
	for(i=0;i<N;i++){
		sum+=x[i];
	}
	xbar = sum/N;
	printf("mean x = %f\n",xbar);
	
	sum = 0;
	for(i=0;i<N;i++){
		printf("%f - %f = %f\n",x[i],xbar,x[i] - xbar);
		sum += pow(x[i]-xbar,2);
	}
	sdev_x = sqrt(sum)/N;
	printf("sdev_x = %f\n\n",sdev_x);
	
	sum = 0;
	printf("Calculate Y : \n");
	for(i=0;i<N;i++){
		sum+=y[i];
	}
	ybar = sum/N;
	printf("mean y = %f\n",ybar);
	
	sum = 0;
	for(i=0;i<N;i++){
		printf("%f - %f = %f\n",y[i],ybar,y[i] - ybar);
		sum += pow(y[i]-ybar,2);
	}
	sdev_y = sqrt(sum)/N;
	printf("sdev_y = %f\n\n",sdev_y);
	
	printf("Calculate r:\n");
	sum = 0;
	for(i=0;i<N;i++){
		sum += (x[i] - xbar)*(y[i] - ybar);
	}
	printf("r = %f\n",sum/(sdev_x*sdev_y));
	return 0;
}
