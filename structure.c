#include<stdio.h>
struct student
{
 int eno;
	char  ename[20];
	float per; 
}s1;

int main()
{

printf("enter roll no");
scanf("%d",&s1.eno);
printf("enter student name");
scanf("%s",&s1.ename);
printf("enter percentage");
scanf("%f",&s1.per);

printf("\n roll no=%d",s1.eno);
printf("\n student name=%s",s1.ename);
printf("\n per=%f",s1.per);
}