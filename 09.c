#include<stdio.h>
int main()
{
    int a,b,c;
    //find greatest number among three given number
    printf("Enter any three numbers to check which is greater :");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c)
        printf("All the numbers you have entered are same.");
    else if(a>=b && a>=c)
        printf("%d is the greatest number.",a);
    else if(b>=c)
        printf("%d is the greatest number.",b);
    else
        printf("%d is greatest number.",c);
    return 0;
}
