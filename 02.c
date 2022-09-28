//Program to check whether the entered number is divisible by 5 or not
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n%10==0 || n%10==5)
        printf("Yes, %d is divisible by 5.",n);
    else
        printf("No, %d is not divisible by 5.",n);
    return 0;
}
