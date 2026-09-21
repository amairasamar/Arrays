#include<stdio.h>
void main()
{
   long int num,res;// long int is used because the range of int is smaller then long int 
    printf("ENTER A NUMBER");
    scanf("%ld",&num);
    res=num*num*num;
    printf("\n THE CUBE OF NUMBER IS : %ld",res);
}