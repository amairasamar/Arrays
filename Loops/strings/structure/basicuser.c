#include<stdio.h> 
struct course{
    char name[20];
    int duration;
    char branch[10];
};
void main()
    {
        struct course c1;
        printf("enter the course name :");
        gets(c1.name);
        printf("enter the branch :");
        gets(c1.branch);
        printf("enter the course duration");
scanf("%d",&c1.duration);
printf("course name:%s",c1.name);
printf("\n branch :%s",c1.branch);
printf("\nduration:%d",c1.duration);

    }
