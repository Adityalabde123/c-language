#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int k,ch;
    printf("enter first string");
    scanf("%s",&s1);
    printf("enter second string");
    scanf("%s",&s2);
    printf("\n 1-compare \n 2-copy");
    printf("enter chioce");
    scanf("%d",&ch);
    do{
       switch(ch)
    {
        case 1:strcmp(s1,s2);
         if(k>0)
         printf("first string is greater");
         else if(k<0)
         printf("second string is greater");
         else
         printf("both are same");
         break;
        case 2:strcpy(s1,s2);
        printf("first string=%s",s1);
        printf("second string=%s",s2);
        break;
        default:printf("invalid choice");
    }
    }while(ch<3);

}