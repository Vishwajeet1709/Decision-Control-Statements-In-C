#include<stdio.h>
int main()
{
    char n;
    // Check whether the entered alphabet is in uppercase or lowercase
    printf("Enter a alphabet : ");
    scanf("%c",&n);
    if(n>=65 && n<=90)
        printf("You have entered a CAPITAL letter \"%c\".",n);
    else if(n>=97 && n<=122)
        printf("You have entered a SMALL letter \"%c\".",n);
    else
        printf("Wrong entry...!");
    return 0;
}
