#include<stdio.h>
#include<string.h>
int main()
{
char str[52];    

printf("\nenter a string");
gets(str);
printf("\nthe given string is :%s",str);
strrev(str);
printf("\nthe reverse of given string is: %s",str);
return 0;
}


