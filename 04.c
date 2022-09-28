#include<stdio.h>
int main()
{
    int n;
    //check even or odd without % Operator
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n&1==0)
        printf("%d is a Even number. \n\n",n);
    else
        printf("%d is a Odd number. \n\n",n);
    return 0;
}
