#include<stdio.h>
int main(){
    int r;
    printf("ENTER ROW ELEMENTS");
    scanf("%d",&r);

    int c;
    printf("ENTER COLUMN ELEMENS");
    scanf("%d",&c);

    int arr[r][c];
    int i,j;
    printf("ENTER ARRAY ELEMENTS");
    for( i=0 ; i<r ; i++)
    {
        for( j=0 ; j<c ; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

     for( i=0 ; i<r ; i++)
    {
        for(   j=0 ; j<c ; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

return 0;


}