#include<stdio.h>
void main()
{
    int a = 10;
    int *ptr;
    ptr=&a;
    printf("the value of a :%d",a);
    printf("\n the addres of a  %u",ptr);
    printf("\n the value of ptr %u", &ptr);
}