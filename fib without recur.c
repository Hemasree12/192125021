#include<stdio.h>
int main()
{
	int n,i,t1=0,t2=1,nt;
	printf("enter the number of tems:");
	scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			nt=t1+t2;
			t1=t2;
			t2=nt;
		}
		printf("fib series is %d",nt);
	
}
