#include<stdio.h>
int main()
{
 int a=100,i,n;
 printf("ENTER THE NUMBER OF TERMS : ");
 scanf("%d",&n);
  
 for(i=1;i<=n;i++)
 {
    printf("\n%d",a);
    a=a/2;

 }



return 0;
}