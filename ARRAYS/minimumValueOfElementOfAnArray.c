#include<stdio.h>
void main(){
    int arr[10];
    int min=10000;

    printf("please enter the elements of this array : ");
    
    for( int i=0 ; i<=9 ; i++)
    {
        scanf("%d",&arr[i]);

    }

    for(int i=0;i<=9;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }

    printf("%d is minimum value of element of this array",min);



}