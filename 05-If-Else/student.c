#include<stdio.h>
int main(){
int m1,m2,m3,m4,m5,total,per;
	printf("Enter the 5 subject mark:");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	total=m1+m2+m3+m4+m5;
	printf("total=%d",total);
	per=total/5;
	printf("per=%d",per);
	if(per>75)
	{
		printf("destination");
	}
	else if(per>60 && 75)
	printf("First class");
	
	else if(per> 50 && 60)
	printf("second");
	
	else if(per > 40 && 50)
	printf("pass");
	
	else
	printf("fail");
}
