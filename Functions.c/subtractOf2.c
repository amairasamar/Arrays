#include<stdio.h>
int dif(int a,int b){
    return a-b;
}
void main(){
    int a,b,difference;
    printf("enter first number :");
    scanf("%d",&a);   
     printf("enter second number :");
    scanf("%d",&b);
    difference=dif(a,b);
    printf("%d",difference);

}