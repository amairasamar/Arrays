#include<stdio.h>
int main(){
    float p,r,t,si; 
    printf("enter p");//p=principal value.
     scanf("%f",&p);
     printf("enter r");//r= rate.
    scanf("%f",&r);
    printf("enter t");//t=time.
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("THE SIMPLE INTEREST IS :%f",si);
    return 0;
}