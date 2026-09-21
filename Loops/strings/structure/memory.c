#include<stdio.h>
struct test
{
  char ch;
  int n;
  float a;
};
void main()
{
    struct test t1;
    t1.ch='a';
    t1.n=100;
    t1.a=200.5;
    printf("the value of ch=%c",t1.ch);
    printf("\nthe value of n=%d",t1.n);
    printf("\nthe value of a=%f",t1.a);


printf("\ntotal memory allocated :\n%d",sizeof(t1));


}
