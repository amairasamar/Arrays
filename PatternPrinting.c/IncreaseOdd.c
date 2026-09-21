#include<stdio.h>
int main()
{
    int a,i,j,n;
printf("Enter a number :");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    a=1;
    for(j=1;j<=i;j++)
    {
        printf("%d ",a);
        a=a+1;
    }
    printf("\n");
}

return 0;
}