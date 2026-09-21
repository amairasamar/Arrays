#include<stdio.h>
void main()
{
    int n;
    printf("enter the number of stars you want to print :");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    printf("* ");
}