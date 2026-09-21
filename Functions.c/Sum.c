#include<stdio.h>
int add(int a, int b,int c){
    return a+b+c;
}
void main()
{
    int a,b,c,sum;
    printf("enter first number :");
    scanf("%d",&a);
    printf("enter second number :");
    scanf("%d",&b);
    printf("enter third number :");
    scanf("%d",&c);
    sum =add(a,b,c);
    printf("%d",sum);

}