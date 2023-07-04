
#include<stdio.h>
#include<string.h>

int main()
{
	char s1[100],s2[100];
	int k;
	printf("enter first string");
	gets(s1);
	printf("enter second string");
	gets(s2);
	k=strcmp(s1,s2);
	if(k>0)
	{
		strcat(s1,s2);
		printf("concat string=%s",s1);
	}
	else if(k<0)
	{
		strcat(s2,s1);
		printf("cocat string=%s",s2);
		
	}
    else
	printf("length of string=%d",strlen(s1));
}