#include<stdio.h>
void main()
{
    int a=10,*p;
    p=&a;
    printf("the address p is :%d\n",p);
    printf("the size of p is : %d\n",sizeof(int));
    printf("the address p+1 is :%d\n",p+1); //take 4 bites more 
    printf("the value at address p is :%d\n",*p);
    printf("the nalue at address p+1 is : %d",*(p+1));
}