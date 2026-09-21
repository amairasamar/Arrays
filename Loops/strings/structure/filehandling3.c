
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
        printf("the file containta are :\n");
        
        while((ch=getc(fp))!=EOF)
        {
            printf("\a%c",ch);
        }
    fclose(fp);
}
}