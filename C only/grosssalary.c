#include<stdio.h>
void main()
{
float gs,ta,da,hra,bs;
printf("enter the basic salary :");
scanf("%f",&bs);

ta=(bs*20)/100;
da=(bs*30)/100;
hra=(bs*80)/100;
gs=bs+ta+da+hra;
printf("the gross salary is :%f",gs);




}