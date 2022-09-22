//Program to check entered number is odd or even without modules operator 
#include<stdio.h>
int main()
{
    int n;
    //check even or odd without % Operator
    printf("Enter a number : ");
    scanf("%d",&n);

    n&1?printf("%d is a odd number.",n):printf("%d is a even number.",n);
    return 0;
}
