#include<stdio.h>
void main()
{
int arr[4];

for(int i=0;i<=3;i++)
{
    scanf("%d ",&arr[i]);
}
  //forward printing of arrary

  for(int i=0; i<=3;i++)
  {
    printf("%d ",arr[i]);
  }
printf("\n");
   //reverse printing of an array
  
   for(int i=3;i>=0;i--)
{
    printf("%d ",arr[i]);
}
}







