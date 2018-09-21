 //labMatrix.c
#include <stdio.h>
#define MAX 10
int main()
{
	FILE *fp = fopen("mat.txt","r");
	int matA[MAX][MAX]={}, matB[MAX][MAX]={}, matC[MAX][MAX]={};
 	int ra,rb,ca,cb,i,j;
 	printf("Matrix A\n");
// 	printf("Number of rows = ");
// 	printf("Number of columns = "); 
	 fscanf(fp,"%d",&ra);
	 fscanf(fp,"%d",&ca);
 	// Input elements of Matrix A(ra x ca)
 	for (i=0; i<ra; i++){ 
		 for(j=0; j<ca; j++){ 
//		 	printf("matA(%d,%d)=",i+1,j+1);
 			fscanf(fp,"%d",&matA[i][j]);
 		}
 	}
 	// Show elements of Matrix A(ra x ca)
 	for (i=0; i<ra; i++){ 
		for(j=0; j<ca; j++) 
			printf("%5d",matA[i][j]);
 		printf("\n");
 	}
 	printf("\nMatrix B\n");
// 	printf("Number of rows = "); 
// 	printf("Number of columns = "); 
	 fscanf(fp,"%d",&rb);
	 fscanf(fp,"%d",&cb);
 	for (i=0; i<rb; i++){ 
		for(j=0; j<cb; j++){
//			printf("matB(%d,%d)=",i+1,j+1);
 			fscanf(fp,"%d",&matB[i][j]);
 		}
 	}
 	// Show elements of Matrix B(rb x cb)
 	for (i=0; i<rb; i++){ 
		for(j=0; j<cb; j++) 
			printf("%5d",matB[i][j]);
		printf("\n");
 	}
 	printf("Matrix C = A + B \n");
 	// Addition: Matrix C = A + B
 	for (i=0; i<ra; i++){
 		for(j=0; j<ca; j++) 
			matC[i][j]=matA[i][j]+matB[i][j];
 	}
 	// Show elements of Matrix C(ra x ca)
 	for (i=0; i<ra; i++){ 
		for(j=0; j<ca; j++)
			printf("%5d",matC[i][j]);
 			printf("\n");
 	}
 	 	// Addition: Matrix C = A * B
 	 	printf("Matrix C = A * B \n");
 	for (i=0; i<ra; i++){
 		for(j=0; j<ca; j++) 
			matC[i][j]=matA[i][j]*matB[i][j];
 	}
 	// Show elements of Matrix C(ra x ca)
 	for (i=0; i<ra; i++){ 
		for(j=0; j<ca; j++)
			printf("%5d",matC[i][j]);
 			printf("\n");
 	}
 	
 	getch();
 	return 0;
} 
