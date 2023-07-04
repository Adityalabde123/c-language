#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp1;
	char ch;
	fp1=fopen("structure.c","r");
	if(fp1==NULL)
	{
		printf("file  not found");
		exit(0);
		
	}
	while(!feof(fp1))
	{
		ch=fgetc(fp1);
		printf("%c",ch);
	}
	fclose(fp1);
}