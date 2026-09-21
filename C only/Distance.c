#include<stdio.h>
void main()
{
float km, m,ft,ich,cm,mm;
    printf("\nenter distance in kilometers :");
    scanf("%f",&km);
        m=km*1000;
    printf("\nthe distance in meter is :%f",m);
        ft=m*3.2804;
    printf("\nthe distance in feet is :%f",ft);
        ich=ft*12;
    printf("\nthe distance in inches is :%f",ich);
        cm=ich*2.54;
    printf("\nthe distance in centimeters is :%f",cm);
        mm=cm*10;
    printf("\nthe distance in millimeters is :%f",mm);

}