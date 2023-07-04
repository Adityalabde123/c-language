#include<stdio.h>
int main()
{
	int a[100],i,n,s=0;
	float avg;
	printf("enter limit");
	scanf("%d",&n);
     printf("enter number");
	for(i=0;i<n;i++)
	
	
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
	
     s=s+a[i];
     avg=(float) s/n;
    }
     printf("addition=%d",s);
     printf("avrage=%f",avg);
}