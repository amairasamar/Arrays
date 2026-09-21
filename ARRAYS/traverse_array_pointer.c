#include<stdio.h>
int main()
{
    int i,arr[5]={2,4,6,8,10};
    int *ptr=&arr[0];
    for(i=0;i<5;i++)
    {
        printf("%d ",ptr[i]);

    }
return 0;
}