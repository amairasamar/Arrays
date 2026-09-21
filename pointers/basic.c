#include<stdio.h>
void main()
{
    int a=10;
    int *p;
    p=&a;
    printf("a=%d\n",a);
    printf("address of p = %d\n",p);
    printf("the value at pointer p = %d\n",*p);
}