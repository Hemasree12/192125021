#include<stdio.h>
int main()
{
	int A[10],i,n;
	printf("enter the value of n:/n");
	scanf("%d",&n);
	printf("enter the value of array elemnts  \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	
	for(i=0;i<n;i++)
	{
	if(A[i]%2==0)
	{
		printf(" %dis even\n",A[i]);
	}
	else
	{
	printf("%d is odd\n",A[i]);
	}
}
return 0;
}

