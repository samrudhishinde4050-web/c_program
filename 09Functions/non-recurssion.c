// A function can call another function it is called non-recurssion function
// call by value
#include<stdio.h>
void add();  //fuction prototypes/declartion
int main(){
printf("Good afternoon");
add(); //function call
printf("\n ******End of application********");
//add();	
area();
printf("\n area of circle");
	
	
}

void add() //function defintion
{
	int n1,n2,res;
	printf("\n Enter any two numbers:");
	scanf("%d%d",&n1,&n2);
	res=n1+n2;
	printf("\n sum of 2 number:%d",res);
	return;
}

void area()
{
	float r,area,pi=3.14;
	printf("\n Enter radius:");
	scanf("%f",&r);
	area=pi*r*r;
	printf("\n Area of circle:%f",area);
	return;
}
