#include<stdio.h>
#include<string.h>
int main()
{
char str1[52],str2[52];    

printf("\nenter a string");
gets(str1);
printf("\nthe given string is :%s",str1);
strcpy(str2,str1);
printf("\nthe original string is: %s",str1);
printf("\nthe copied string is: %s",str2);

return 0;
}
