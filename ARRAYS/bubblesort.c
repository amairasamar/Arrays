#include<stdio.h>
#define SIZE 100
int main()
{
int arr[SIZE],n,i,j,temp;

    printf("enter the number of elements(less then 100) :");
    scanf("%d",&n);

if(n>SIZE)
{
    printf("please enter the value less then 100");
}
else
{
        printf("enter the array elements :");
        for(i=0;i<n;i++)
    {
    scanf("%d ",&arr[i]);
    }
    printf("the unsorted array is : \n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
for(i=0;i<n;i++)
{

for(j=0;j<n-i-1;j++)
{
    if(arr[j]>arr[j+1])
    {
        temp=arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=temp;
    }
}

}

printf("\n the sorted array is  :\n");
for (i=0;i<n;i++)
{
    printf("%d  ",arr[i]);
}

}
return 0;
}