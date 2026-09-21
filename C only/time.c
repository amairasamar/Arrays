#include<stdio.h>
void main()
{
 long int sec,hr,min,tsec;
 printf("enter the total seconds :");
 scanf("%ld",&tsec);

 hr=tsec/3600;
 min=(tsec%3600)/60;
 sec=tsec%60;

 printf("\ntotal seconds :%ld",tsec);
 printf("\ntotal hours :%ld",hr);
 printf("\ntotal minutes :%ld",min);
 printf("\nremaining seconds are :%ld",sec);
}