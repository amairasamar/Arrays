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

struct student s1 ={"rahul","b.tech",1001,340.00};
 struct student s2={"mukul","BCA",1002,450.00};
printf("name=%s",s1.name);
printf("\ncourse=%s",s1.course);
printf("\nrollnumber=%d",s1.roll);
printf("\nmarks=%f",s1.marks);

printf("\nname=%s",s2.name);
printf("\ncourse=%s",s2.course);
printf("\nrollnumber=%d",s2.roll);
printf("\nmarks=%f",s2.marks);
}