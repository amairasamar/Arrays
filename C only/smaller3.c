#include<stdio.h>
void main()
{
int a,b,c ,min;
printf("enter three numbers :");
scanf("%d%d%d",&a,&b,&c);

min=(a<b&&a<c)?a:(b<c)?b:c;
printf("smallest number is %d",min);

}