#include<stdio.h>
#define SIZE 100
struct student{
    int roll;
    char name[20];
    int marks;
    char course[10];

}s1[SIZE];
void main ()
{
    int n,i;
    printf("enter the number of students record you want to store:" );
    scanf("%d",&n);
    printf("enter the %d records",n);
    for(i=0;i<n;i++)
    {
        printf("\n enter the roll number :");
        scanf("%d",&s1[i].roll);
        printf("\n enter the name :");
        fflush(stdin);
        fgets(s1[i].name,sizeof(s1[i].name),stdin);
        printf("\n enter the marks:");
        scanf("%d",&s1[i].marks);
        fflush(stdin);
        printf("\n enter the course :");
        getchar();
        fgets(s1[i].course,sizeof(s1[i].course),stdin);
    }
    printf("\n the compelete information of %d students :,n");
    for (i=0;i<n;i++)
    {
        printf("\n name:%s",s1[i].name);
        printf("\n course:%s",s1[i].course);
    printf("\n roll number:%d",s1[i].roll);
    printf("\n marks:%d",s1[i].marks);

    }


    }


