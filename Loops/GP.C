#include<stdio.h>
void main()
{
    int a=1,n,i;
    printf("enter the number of terms :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("\n%d",a);
        a=a*2;
    }
}