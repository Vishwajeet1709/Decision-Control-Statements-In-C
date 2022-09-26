#include<stdio.h>
int main()
{
    int n;
    //take months number as input and display days in that month
    printf("Enter number of any month :");
    scanf("%d",&n);
    if(n==2)
        printf("This if February and it has 28 days in common years and 29 in leap year.");
    else if(n==4 || n==6 || n==9 || n==11)
        printf("This month has 30 days in it.");
    else
        printf("This month has 31 says in it");
    return 0;
}
