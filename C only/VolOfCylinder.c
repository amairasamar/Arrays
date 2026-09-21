//wap to print volume of cylinder
#include<stdio.h>
void main()
{
float pi=3.1415926,r,h,vol;
printf("Enter the radius of cylinder :");
scanf("%f",&r);
printf("enter the height of cylinder :");
scanf("%f",&h);
vol=pi*r*r*h;
printf("THE volume of cylinder is :%.2f",vol);
}