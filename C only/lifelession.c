#include<stdio.h>
void main()
{
double salary,day,hour,min,sec,fsec,fees,month;
printf("\nPlease enter your fathers monthly salary(30 days) :");
scanf("%lf",&salary);

day=salary/30;
printf("\nPer day earning :%.3lfrupees",day);

hour=day/24;
printf("\nPer hour earning :%.3lfrupees",hour);

min=hour/60;
printf("\nPer minute earning :%.3lfrupees",min);

sec=min/60;
printf("\nPer second earning :%.3lfrupees",sec);

printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");

printf("\nEnter your per year fees :");
scanf("%lf",&fees);

month=fees/12;
printf("\nFees per month: %.3lfrupees",month);

day=month/30;
printf("\nFees per day : %.3lfrupees",day);
hour=day/24;
printf("\nFees per hour : %.3lfrupees",hour);
min=hour/60;
printf("\nFees per min : %.3lfrupees",min);
fsec=min/60;
printf("\nFees per sec : %.3lfrupees",fsec);

if (sec>fsec)
{
    printf("\nYour father earns more per second then your fees per second");
}
else if (sec<fsec)
{
    printf("\nYour father earns less then your fees per sec");
}
else
printf("\nBoth earning per sec and fees per second is same");

}