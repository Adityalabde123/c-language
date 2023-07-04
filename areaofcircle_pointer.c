#include<stdio.h>
int main()
{
	float r,*p,a;
	printf("enter radius");
	scanf("%f",&r);
	p=&r;
	a=3.14**p**p;
	printf("area of circle=%f",a);
}