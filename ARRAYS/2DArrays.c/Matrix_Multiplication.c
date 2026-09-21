#include<stdio.h>
void main()
{
    int arr[2][2];
    int brr[2][2];
    int i,j;
    printf("enter the first array elements : ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("\nenter the second array elements : ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }

printf("\nthe first matrix is : \n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}

printf("\nthe second matrix is : \n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf("%d ",brr[i][j]);
    }
    printf("\n");
}



}