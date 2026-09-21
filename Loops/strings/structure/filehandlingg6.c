#include<stdio.h>
void main()
{                           //modify it
    FILE *fp;
    char name[10];
    int roll;
    float marks;
    printf("enter the name");
    gets(name);
    printf("enter the roll number ");
    scanf("%d",&roll);
    printf("enter the marks");
    scanf("%f",&marks);
    fp=fopen("myfile4.txt","w");
printf(fp"%s%d%f",name,roll,marks);
printf("record saved");
fp=fopen("myfile4.txt","r");
scanf(fp,"%s%d%f",name,&roll,&marks);
printf("name :%s",)
}