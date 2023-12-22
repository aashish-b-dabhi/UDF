#include<stdio.h>

void cube()
{
	int a,b;
	
	printf("Enter Value A = ");
	scanf("%d",&a);
	
	printf("Enter Value B = ");
	scanf("%d",&b);
	
	b=a*a*a;
	
	printf("Ans = %d",b);
}

void main()
{
	cube();
}