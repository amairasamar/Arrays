#include<stdio.h>
#include<string.h>
int main()
{
char str[52];    

printf("\nenter a lowercase string");
gets(str);
printf("\nthe given string is :%s",str);
strupr(str);
printf("\nthe uppercase string is: %s",str);
return 0;
}


