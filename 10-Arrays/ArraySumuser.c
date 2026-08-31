#include<stdio.h>
int main(){
int num[20],n,i,sum=0;
	printf("\ How many number you wish to enter:");
	scanf("%d",&n);
	printf("\nEnter those numbers:");
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	printf("\n The element are:\n");
	for(i=0;i<n;i++){
		printf("%d ",num[i]);
		
	}
	printf("sum of element:\n");
	for(i=0;i<n;i++){
		sum=sum+num[i];
	}
	printf("sum of element:%d",sum);
		
}
