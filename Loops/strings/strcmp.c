#include<stdio.h>
#include<string.h>
int main()
{
char str1[52],str2[52];    

printf("\nenter first string");
gets(str1);
printf("enter second string");
gets(str2);
if(strcmp(str1,str2)==0)

printf("\nboth strings are same");
else
printf("both strings are not same");


return 0;
}
