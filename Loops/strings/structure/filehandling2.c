#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("myfile.txt","r");
    if(fp==NULL)
    {
        printf("file dosenot opened");
    }
    else
    {
        ch=getc(fp);
        
        printf("the character is %c",ch);
    }
    fclose(fp);
}
