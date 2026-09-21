#include<stdio.h>
#include<stdlib.h>
void main()

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


    switch(choice)
     {
        case 1:
        printf("programming language");
        printf("\n\t1.Low level language");
        printf("\n\t\t*.Assembly language");
        printf("\n\t\t*.machine language");
        printf("\n\t2. High level language");
        printf("\n\t\t*4th Generation language");
     break;

        case 2:
        printf("Translator and its types");
        printf("\n1.Assembeler");
        printf("\n2.Compiler");
        printf("\n3.Interpreter");
        break;

        case 3:
        printf("HISTORY OF C");
        printf("\nC language was discovered by Dennis Richie in the year 1972 in the USA laboratory");
        break;
        

        case 4:
        printf("Structure of C programming includes 6 steps");
     break;


     case 5:
     exit(0);
    default:
    printf("invalid choice ");

    }
}