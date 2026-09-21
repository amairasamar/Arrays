#include<stdio.h>
void main()
{
char ch,a,z;
printf("enter a  small letter  :");
scanf("%c",&ch);

if(ch>=a&&ch<=z)
printf("capital letter is  %c",ch+32);

else
printf("invalid character");


}