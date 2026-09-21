#include<stdio.h>
void main()
{
    FILE *fp;
    char str[100];
    int i;
    fp=fopen("myfile.txt","w");
    if(fp==NULL)
    {
        printf("file dosenot created");
        return 0;
    }
    else
    { 
        printf("enter the text :");
        gets(str);
        for(i=0;str[i]!='\0';i++)
        {
            fputc(str[i],fp);
        }
        printf("text successfully saved");
    }
    fclose(fp);
}
