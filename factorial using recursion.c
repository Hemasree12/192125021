#include<stdio.h>


int fact(int n)
{

	if(n==1)
	{
		return 1;
	}
	else
	{
		return(n*fact(n-1));
	}
}




int main()
{
	int n,f;
	printf("enter the value for n:");
	scanf("%d",&n);
	
	printf("Tjhe factorial of %d is %d ",n, fact(n));
	
}



