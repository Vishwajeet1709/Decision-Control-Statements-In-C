#include<stdio.h>
int main()
{
    int n;
    //check whether the number is divisible by 2 and 3 or not
    printf("Enter a number :");
    scanf("%d",&n);
    if(n%6)
        printf("%d is not divisible by 2 & 3.",n);
    else
        printf("Yes %d is divisible by 2 & 3.",n);
    return 0;
}
