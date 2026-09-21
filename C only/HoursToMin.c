

/*WAP TO CONVER HOURS INTO MINUTES AND MINUTES INTO SECONDS .  */

#include<stdio.h>
int main()
{
int hr,min,sec;
printf("ENTER THE TIME IN HOURS :\n");
scanf("%d",&hr);
min=hr*60;
printf("\nTHE TIME IN MINUTES IS : %d",min);
sec=min*60;
printf("\nTHE TIME IN SECONDS IS : %d\n",sec);

}