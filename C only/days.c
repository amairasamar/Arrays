#include<stdio.h>
void main()
{
    int tdays,years,rdays,months,weeks;
printf("enter total number of days :");
scanf("%d",&tdays);

years=tdays/365;
rdays=tdays%365;
months=rdays/30;
rdays=rdays%30;
weeks=rdays/7;
rdays=rdays%7;

printf("\ntotal days :%d",tdays);
printf("\ntotal years :%d",years);
printf("\ntotal months :%d",months);
printf("\ntotal weeks :%d",weeks);
printf("\ntotal days :%d",rdays);

}