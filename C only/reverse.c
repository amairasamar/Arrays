//reverse of a four digit number.

#include<stdio.h>
void main()
{
int n,a,b,c,d,rev;
printf("Enter the 4 digit number to be reversed :");
scanf("%d",&n);
a=n%10;
n=n/10;
b=n%10;
n=n/10;
c=n%10;
n=n/10;
d=n%10;
rev=a*1000+b*100+c*10+d;
printf("The number reversed is :%d",rev);


}