#include<stdio.h>
void main()
{
int c20,c10,c5,c2,c1,c50p,c25p,c20p,c10p,c5p,c1p;
float amount;
printf("ENTER THE NUMBER OF COINS OF Rs 20 :\n");
scanf("%d",&c20);
printf("ENTER THE NUMBER OF COINS OF Rs 10 :\n");
scanf("%d",&c10);
printf("ENTER THE NUMBER OF COINS OF Rs 5  :\n");
scanf("%d",&c5);
printf("ENTER THE NUMBER OF COINS OF Rs 2  :\n");
scanf("%d",&c2);
printf("ENTER THE NUMBER OF COINS OF Rs 1  :\n");
scanf("%d",&c1);
printf("ENTER THE NUMBER OF COINS OF Rs 0.50 :\n");
scanf("%d",&c50p);
printf("ENTER THE NUMBER OF COINS OF Rs 0.25 :\n");
scanf("%d",&c25p);
printf("ENTER THE NUMBER OF COINS OF Rs 0.20 :\n");
scanf("%d",&c20p);
printf("ENTER THE NUMBER OF COINS OF Rs 0.10 :\n");
scanf("%d",&c10p);
printf("ENTER THE NUMBER OF COINS OF Rs 0.5 :\n");
scanf("%d",&c5p);
printf("ENTER THE NUMBER OF COINS OF Rs 0.1 :\n");
scanf("%d",&c1p);

amount=(20*c20)+(10+c10)+(5*c5)+(2*c2)+(1*c1)+(0.50*c50p)+(0.25*c25p)+(0.20*c20p)+(0.10*c10p)+(0.5*c5p)+(0.1*c1p);
printf("THE TOTAL AMOUNT IS Rs : %f", amount);
}