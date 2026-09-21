#include<stdio.h>     //FOR INPUT FROM USER 
//#include SIZE [100]
#include<string.h>
void main()
{
char str[52];    //CHAR STR[100]
int n;
printf("\nenter a string");
gets(str);
printf("\nthe given string is :%s",str);
n=strlen(str);
printf("\nthe length of given string is :%d",n);
}