#include<stdio.h>
int main(){
int r,c,i,j,k,a[100][100],b[100]
[100],mul[100][100];
printf("enter rows:");
scanf("%d",&r);
printf("enter columns:");
scanf("%d",&c);
printf("enter the elements in 1st matrix");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	scanf("%d",&a[i][j]);
}
printf("enter the elements in 2nd matrix");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	scanf("%d",&b[i][j]);
}
printf("multiply of matrix");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
	mul[i][j]=0;
	for(k=0;k<c;k++)
	{
	mul[i][j]+=a[i][k]*b[k][j];
}
}
}
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
	printf("%d\t",mul[i][j]);
}
printf("\n");
}
return 0;
}





