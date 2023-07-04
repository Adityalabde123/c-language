//students  class grades
#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,t;
    float per;
      printf("enter marks");
      scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
      t=m1+m2+m3+m4+m5;
      per=(float)t/5;
      if(per>70)
      printf("grade:first class");
    else  if(per>60)
      printf("grade:second class");
      
 else if(per>50)
      printf("grade:destintion");
      
else if(per>40)
      printf("grade:pass");
      else 
      printf("fail");


}