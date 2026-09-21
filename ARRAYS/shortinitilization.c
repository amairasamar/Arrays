#include<stdio.h>
void main()
{

int mat[3][2]={{1,2},{3,4},{5,6}};
int r,c;
 printf("the marix elements are : ");
 for(r=0;r<3;r++)
 {
    for(c=0;c<2;c++)
    {
        printf("%d  ",mat[r][c]);
    }
    printf("\n");
 }

}