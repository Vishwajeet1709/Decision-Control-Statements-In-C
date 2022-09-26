
#include<stdio.h>
int main()
{
    int n;
    //check whether the number is three digit or not
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n/10==0)
        printf("%d is not a three digit number",n);
    else if(n/100==0)
        printf("%d is not a three digit number",n);
    else
        printf("%d is a three digit number",n);
    return 0;
}
