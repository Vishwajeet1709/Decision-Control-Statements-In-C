
#include<stdio.h>
int main()
{
    int n;
    //check the given year is leap year or not
    printf("Enter a year : ");
    scanf("%d",&n);

    if(n%4)
        printf("%d is not a leap year.",n);
    else
        printf("%d is a leap year.",n);
    return 0;
}
