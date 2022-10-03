#include<stdio.h>
int main()
{
    int a,b,c;
    //check whether the roots are real imaginary same distinct...
    printf("Enter the coefficients of a quadratic equation, a,b,c : ");
    scanf("%d%d%d",&a,&b,&c);
    if((b*b)-(4*a*c)==0)
       printf("This quadratic equation has two equal roots");
    else if((b*b)-(4*a*c)<0)
       printf("This quadratic equation has two distinct imagery roots");
    else 
       printf("This quadratic equation has two different real roots.");
}

