//cube of number 
#include<stdio.h>
int main()
{
	int n,*p,cube;
	printf("emter number");
	scanf("%d",&n);
    p=&n;
    
    
    cube=*p**p**p;
    printf("cube=%d",cube);
}
