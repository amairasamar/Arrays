#include<stdio.h>
void main()  // program is having some error
{
int mat[3][4],r,c;
printf("\nenter the elements of matrix :");
for(r=0;r<3;r++)
{
    for(c=0;c<3;c++)
    {
        scanf("%d ",&mat[r][c]);
    }
}printf("\nthe matrix is :");
for(r=0;r<3;r++)
{
    for(c=0;c<3;c++)
    {
        printf("%d ",mat[r][c]);
    }
    printf("\n");
}

}