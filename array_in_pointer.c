#include<stdio.h>
int main()
{
	int *a[100],n,i;
	printf("enter limit");
	scanf("%d",&n);
	printf("enter number");
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
		
	}
	printf("array no:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(a+i));
	}
	
	
	
	
}