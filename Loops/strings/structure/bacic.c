#include<stdio.h>
#include<string.h>
struct student
{
   char name[20];
   char course[10];
   int roll;
   float marks;
};
    void main()
{
//struct student s1;
struct student s1 ={"rahul","b.tech",1001,340.00};
//s1.roll=1001;
//s1.marks=340.00;
//strcpy(s1.name,"rahul");
//strcpy(s1.course,"b.tech");
printf("name=%s",s1.name);
printf("\ncourse=%s",s1.course);
printf("\nrollnumber=%d",s1.roll);
printf("\nmarks=%f",s1.marks);
}