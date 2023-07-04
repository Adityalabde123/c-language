//accept the number and check divisible by 5 and 7 or not...
#include<stdio.h>
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    if(n%7==0&&n%5==0)
    printf("numeber is divisible by 7 and 5");
else
printf("not divisible");
} 