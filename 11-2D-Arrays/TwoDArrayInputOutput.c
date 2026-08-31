#include<stdio.h>
int main(){
int num[10][10],rows,cols,i,j;
	printf("Enter the how many rows and cols do you wish:");
	scanf("%d%d",&rows,&cols);
	printf("Enter elemnets:");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			
			scanf("%d",&num[i][j]);
			
			
		}
	}
	printf("\n The element are:\n");
	
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d ",num[i][j]);
		}
		printf("\n");
	}
	
}
