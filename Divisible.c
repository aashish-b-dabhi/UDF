#include<stdio.h>

void division()
{
	int n;
	
	printf("Enter Value N = ");
	scanf("%d",&n);
	
	if(n%3==0 && n%5==0)
	{
		printf("3 & 5 Is Divisible");
	}
	else
	{
		printf("3 & 5 Is Not Divisible");
	}
}

void main()
{
	division();
}