#include<stdio.h>
void main(){
    int arr[5];
    int sum=0;


     for(int i=0;i<=4;i++)
     {
        scanf("%d",&arr[i]);
     }

     for(int i=0;i<=4;i++)
     {
        sum=sum+arr[i];   
     }
     printf("%d",sum);

}