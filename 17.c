#include<stdio.h>
int main()
{
    int a,b,c;
    //program to tell whether the triangle exists with the given sides
    printf("Enter the sides of a triangle : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
        printf("These sides can form a valid triangle.");
    else
        printf("These sides can not form any valid triangle.");
    return 0;
}
