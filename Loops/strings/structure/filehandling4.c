#include<stdio.h>
void main()
{
    FILE *fp;
    char str[100];
    
    fp=fopen("myfile.txt","w");

    { 
        printf("enter the string :");
        
        get(str);
        fputs(str,fp);
        printf("string successfully saved");
    fclose(fp);
    fp=fopen("myfile2.txt","r");
    fgets(str,fp);
    {
    while(fgets(str,sizeof(str)fp)!=NULL)
     
    }
}