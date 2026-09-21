#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("myfile.txt","w");
    if(fp==NULL)
    {
        printf("file dosenot created");
    }
    else
    {
        putc('A',fp);
        printf("character successfully saved");
    }
    fclose(fp);
}
