#include<stdio.h>
#include<string.h>
int main()
{
char str1[52],str2[52];    

printf("\nenter first string");
gets(str1);
printf("enter second string");
gets(str2);

strcat(str1,str2);
printf("\nthe final string is: %s",str1);


return 0;
}
