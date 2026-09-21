#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,root1,root2;
    printf("enter the values of a and b and c :");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*(a*c);
if(d>0)
    {
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);

        printf("\nroot1=%f",root1);
        printf("\nroot2=%f",root2);
    }

else if (d==0)
{
        root1=-b/2*a;
        printf("both the roots are equal :%f",root1);
}
else
        printf("roots are imaginary");
}