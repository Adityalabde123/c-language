//accept string and copy into another string and display copied string 
#include<stdio.h>
int main()
{
	char s1[20],s2[20] ;
	int i;
	printf("enter character");
	scanf("%s",&s1);
	
	for(i=0;s1[i]!='\0';i++)
     {
     s2[i]=s1[i];
 }
     
     
	  s2[i]='\0';
	  printf("copy string=%s",s2);

	  
}