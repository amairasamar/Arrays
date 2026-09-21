#include<stdio.h>
void square();
void main()
{
    square();
}
void square()
{  
    int n,square;
    printf("enter a number :");
    scanf("%d",&n);
    square=n*n;
    printf("the square is :%d",square);
}