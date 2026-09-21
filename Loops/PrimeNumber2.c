#include<stdio.h>
void main()
{
int n,i,factor=0;

printf("Enter a number");
scanf("%d",&n);

for(i=2;i<n;i++)
{
    if(n%i==0)
    {
        factor=1;
        break;
    }

}
if (factor==0)
printf("number is a prime number");
else 
printf("number is not prime number");

}
