#include<stdio.h>
void main()
{
int arr[5],i;

printf("\nenter the elements of a array :");
for(i=0;i<5;i++)
{
    scanf("%d ",&arr[i]);
}
printf("\nthe entered elements of array are :");
for ( i = 0; i <5; i++)
{
    printf("\n%d ",arr[i]);
}

printf("\nthe reverse order of array is :");
for(i=4;i>=0;i--)
{
    printf("\n%d ",arr[i]);
}
}