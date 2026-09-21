#include<stdio.h>
#include<stdlib.h>
int main()

{
    int choice;
    printf("YOUR CHOICE ARE FOLLOWING :");
    printf("\n--------------------------------------------");
    printf("\n1.Programming languare");
    printf("\n2.Translator and its types");
    printf("\n3.History of C language");
    printf("\n4.Structure of C programming");
    printf("\n5.exit");
    printf("\n---------------------------------------------");

    printf("ENTER YOUR CHOICE ");
    scanf("%d",&choice);

if(choice==1)
    {
         printf("programming language");

    }

else if(choice==2)
    {
    printf("translator and its types");
    
    }

    else if(choice==3)
    {
        printf("history of c language");
    }

    else if(choice==4)
    {
        printf("structure of c");
    }

    else if(choice==5)
    exit(0);

    else
    printf("invalid choice..............");
    return 0;
}