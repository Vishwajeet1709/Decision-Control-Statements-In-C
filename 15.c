
#include<stdio.h>
int main()
{
    int n;
    //check number is positive negative or zero
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n>0)
        printf("%d is a positive number.",n);
    else if(n<0)
        printf("%d is a negative number.",n);
    else
        printf("You have entered a zero.");
    return 0;
}
