//Program to check the nature of number positive or negative 
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n==0)
        printf("Please try again, it is neither NEAGITVE nor POSITIVE. \n\n");
    else if(n>0)
        printf("You have entered a POSITIVE number. \n \n");
    else
        printf("You have entered a NEGATIVE number. \n \n");
    return 0;
}
