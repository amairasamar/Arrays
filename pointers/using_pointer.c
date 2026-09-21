#include<stdio.h>
void main()
{
    int b=1101,*p;
    p= &b;
    printf("the size of b is : %d\n",sizeof(b));
    printf("value of b = %d\n",*p);
    printf("address of b = %d\n",p);

    char *p0;
    p0=(char*)p; //typecasting
    printf("the size of char is %d bytes\n",p);
    printf("the value of char is %d \n",*p0);
    printf("addres of char =%d\n",p0);
    printf("arithematic addition value = %d\n",*p0+1);
    printf("the address of arithematic addition value is =%d\n",p0);

}