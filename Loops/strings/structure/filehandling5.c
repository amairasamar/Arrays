#include<stdio.h>
void main()
{
    FILE *fp;
    int i;
    fp=fopen("myfile3.txt","w");
    for(i=0;i<=10;i++)
    {
        putw(i*10,fp);
    }
    fclose(fp);
    fp=fopen("myfile3.txt","r");
    while((i=getw(fp))!=EOF)
    {
        printf("\n%d",i);

    }
  fclose(fp);
}