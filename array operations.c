#include <stdio.h>
int main()
{
int i, j, temp, n, arr[30];
printf("Enter the number of elements in your array: \n");
scanf("%d", &n);
printf("Enter the array elements: \n");
for (i = 0; i < n; ++i)
scanf("%d", &arr[i]);
for (i = 0; i < n; ++i)
{
for (j = i + 1; j < n; ++j)
{
if (arr[i] > arr[j]) 
{
temp =  arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
}
printf("\nThe array sorted in ascending order is as given below: \n");
for (i = 0; i < n; ++i)
printf("%d\n", arr[i]);
return 0;
}

