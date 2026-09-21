#include<stdio.h>
void main()
{
    float F,C;
    printf("Enter Temperature in Feranhite : ");
    scanf("%f",&F);
    C=(F-32)*5/9;
        printf("The Temperature In Celcius Is : %f",C);
}