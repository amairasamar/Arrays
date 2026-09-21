

//initialization of an array 
//wap to print matrix of 3*2 
//3 rows and 2 columns

#include<stdio.h>
void main()
{

int mat[3][2];
mat[0][0]=1;
mat[0][1]=2;
mat[1][0]=5;
mat[1][1]=1;
mat[2][0]=4;
mat[2][1]=5;

printf("%d  %d ",mat[0][0],mat[0][1]);
printf("\n%d  %d ",mat[1][0],mat[1][1]);
printf("\n%d  %d ",mat[2][0],mat[2][1]);
}