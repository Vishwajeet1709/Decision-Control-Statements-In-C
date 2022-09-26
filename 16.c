#include<stdio.h>
int main()
{
    char n;
    //check if user has entered a number, alphabets, or any special character
    printf("Enter any key : ");
    scanf("%c",&n);

    if(n>47 && n<58)
        printf("You have entered a number.");
    else if(n>64 && n<91)
        printf("You have entered a Capital letter.");
    else if(n>96 && n<123)
        printf("You have entered a small letter.");
    else
        printf("You have entered a special character.");
    return 0;
}
