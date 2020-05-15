#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	int arr[50];
	int n,i, sum=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("enter the %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("sum of entered array elements = %d",sum );
	return 0;
}
