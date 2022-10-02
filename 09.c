#include<stdio.h>
int main()
{
    int a,b,c;
    //find greatest number among three given number
    printf("Enter any three numbers to check which is greater :");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c)
        printf("All the numbers you have entered are same.\n\n");
    else if(a>=b && a>=c)
        printf("%d is the greatest number. \n\n",a);
    else if(b>=c)
        printf("%d is the greatest number. \n\n",b);
    else
        printf("%d is greatest number. \n\n",c);
    return 0;
}
