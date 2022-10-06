//Program to check whether the entered number is divisible by 5 or not
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n%5 == 0)
        printf("Yes, %d is divisible by 5.\n\n",n);
    else
        printf("No, %d is not divisible by 5.\n\n",n);
    return 0;
}
