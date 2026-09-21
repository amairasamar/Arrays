//WAP TO DECLARE AND DISPLAY DIFFERENT TYPES OF DATA TYPES

#include<stdio.h>
void main()
{
int a=10;
int *ptr;
float b=100.6758;
char c='f';
double d=1342.65443;
long double e=12346.7655;
char name [30]="amaira samar";

printf("%d",sizeof(a));
printf("\n%d",sizeof(ptr));  //pointer


printf("\nthe integer number is %d",a);
printf("\nthe size of int is :%d bytes",sizeof(int));
printf("\nthe address is :%u",&a);

printf("\n\nthe float number is :%f",b);
printf("\nthe size of float is :%d bytes",sizeof(float));
printf("\nthe address is :%u",&b);

printf("\n\nthe character is :%c ",c);
printf("\nthe size of character is :%d bytes",sizeof(char));
printf("\nthe address is :%u",&c);

printf("\n\nthe double number is :%lf",d);
printf("\nthe size of double is :%d bytes",sizeof(double));
printf("\nthe address is :%u",&d);

printf("\n\nthe long double number is :%Lf",e);
printf("\nthe size of long double is :%d bytes",sizeof(long double));
printf("\nthe address is :%u",&e);

printf("\n\nthe character is :%s",name);
printf("\nthe size of character is :%d bytes",sizeof(char));
printf("\nthe address is :%u",&name);

}