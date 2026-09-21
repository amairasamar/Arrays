#include<stdio.h>
void sum();
void main()
{
    sum();
}
void sum()
{  
    int n,m,sum;
    printf("enter two number :");
    scanf("%d%d",&n,&m);
    sum=n+m;
    printf("the square is :%d",sum);
}