#include<stdio.h>
int main()
{
	int *a[100],i,n;
	printf("enter limit");
	scanf("%d",&n);
	printf("enter number");
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	printf("reverse");
	for(i=n-1;i>=0;i--)
	printf("%d\t",*(a+i));
}