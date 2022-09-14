#include<stdio.h>
int main()
{
    int n;
    // program to check numbers are even or odd
    printf("Enter a number :");
    scanf("%d",&n);
    if(n%2==0)
        printf("%d is a Even number.",n);
    else
        printf("%d is odd number.",n);
    return 0;
}
