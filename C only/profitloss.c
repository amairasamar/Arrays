//profit=sp-cp    loss=cp-sp   %profit=(profit/cp)*100
   //%loss=(loss/cp)*100


   #include<stdio.h>
   void main()
   {
    float cp,sp,profit,loss,perprofit,perloss;
    printf("enter the selling prince and cost price :");
    scanf("%f%f",&sp,&cp);

if(sp>cp)
{
    profit=sp-cp;
    printf("\nyour profit is %f",profit);
    perprofit=(profit/cp)*100;
    printf("\nthe profit percentage =%f",perprofit);
}

else if(cp>sp)
{
    loss=cp-sp;
    printf("\nyour loss is :%f",loss);
    perloss=(loss/cp)*100;
    printf("\nthe loss percentage =%f",loss);

}
else
printf("\nno profit no loss!!!!!!!!!!!!");







   }