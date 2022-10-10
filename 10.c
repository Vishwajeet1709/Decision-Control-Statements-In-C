#include<stdio.h>
int main()
{
    float CP, SP, P;
    // calculate profit and loss
    printf("Enter cost price of your product : ");
    scanf("%f",&CP);
    printf("Enter selling price of your product : ");
    scanf("%f",&SP);
    if(SP>=CP)
    {
        P=SP-CP;
        printf("You have made profit of %f %%\n\n",P/CP*100);
    }
    else
    {
        P=CP-SP;
        printf("You made loss of %f %%.\n\n",P/CP*100);
    }
    return 0;
}
