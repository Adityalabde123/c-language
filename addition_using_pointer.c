//addition of two  number using pointer
#include<stdio.h>
int main()
{
  int n1,n2,c,*a1,*a2;
  printf("enter  numbers");
  scanf("%d%d",&n1,&n2);
  a1=&n1;    //powinter a1 store address of variable na1
  a2=&n2;
  
  c=*a1+*a2;
  printf("addition of numeber=%d",c);
}