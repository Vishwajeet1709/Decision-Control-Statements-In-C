#include<stdio.h>
int main()
{
    int a,b;
    //print which number is grater, if both are same print both are same number

    printf("Enter any two numbers : ");
    scanf("%d%d",&a,&b);
    if(a==b)
        printf("Both are same numbers.");
    else if(a>b)
        printf("%d is grater number.",a);
    else
        printf("%d is grater number.",b);
    return 0;
}

