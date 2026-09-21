#include<stdio.h>
void main()
    {
        char ch='a',*p1;
        int a=10,*p2;
        float b=20.50 ,*p3;
        double d=50.350,*p4;

        p1=&ch;
        p2=&a;

        p3=&b;
        p4=&d;
printf("the size of character is :%d",sizeof(ch));
printf("\nthe size of pointer is %d",sizeof(p1));


printf("\nthe size of variable is :%d",sizeof(a));
printf("\nthe size of pointer is %d",sizeof(p2));


printf("\nthe size of variable is :%d",sizeof(b));
printf("\nthe size of pointer is %d",sizeof(p3));




printf("\nthe size of variable is :%d",sizeof(d));
printf("\nthe size of pointer is %d",sizeof(p4));



    }
