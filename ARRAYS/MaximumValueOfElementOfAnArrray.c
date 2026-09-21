#include<stdio.h>
void main(){
    int arr[8]={13,3,4,5,67,85,90,9};
     int max= -1;

     for(int i=0;i<=7;i++)
     {
         if(max<arr[i])
         {
            max=arr[i];
         }   
        
     }
         printf("%d",max);




    }