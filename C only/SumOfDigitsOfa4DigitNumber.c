#include<stdio.h>
void main()
{
int n,a,b,c,d,sum;
printf("Enter the 4 digit number  :");
scanf("%d",&n);
a=n%10;
n=n/10;
b=n%10;
n=n/10;
c=n%10;
n=n/10;
d=n%10;
sum=a+b+c+d;
printf("The sum of digits of a 4 digit number is :%d",sum);
}