#include<stdio.h>
int main()
{
    int n;
    //check whether the number is divisible by 7 or 3

    printf("Enter a number :");
    scanf("%d",&n);
    if(n%7==0 && n%3==0)
        printf("%d is divisible by both 7 and 3.",n);
    else if(n%7==0)
        printf("Yes %d is divisible by 7.",n);
    else if(n%3==0)
        printf("Yes %d is divisible by 3.",n);
    else
        printf("%d is neither divisible by 7 nor 3.",n);

    return 0;
}
