#include<stdio.h>
#include<string.h>
int main()
{
char str[52];    

printf("\nenter a uppercase string");
gets(str);
printf("\nthe given string is :%s",str);
strlwr(str);
printf("\nthe lowercase string is: %s",str);
return 0;
}
