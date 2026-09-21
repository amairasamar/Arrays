 //global variable
 #include<stdio.h>
 void square();//function declaration
 void cube();//function declaration
int n=10,res;
void main()
{
square();
cube();
}

void square()
{
res=n*n;
printf("\nthe square :%d",res);

}
void cube()
{
    res=n*n*n;
    printf("\nthe cube is :%d",res);
}