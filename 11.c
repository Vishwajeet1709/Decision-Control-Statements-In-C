#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5,i;
    //take marks of students in five subjects and declare the result as pass or fail
    printf("Enter your marks of five subjects. \n");

        printf("Marks of First subject : ");
        scanf("%d",&sub1);

        printf("Marks of Second subject : ");
        scanf("%d",&sub2);

        printf("Marks of Third subject : ");
        scanf("%d",&sub3);

        printf("Marks of Forth subject : ");
        scanf("%d",&sub4);

        printf("Marks of Fifth subject : ");
        scanf("%d",&sub5);

        if(sub1>33 && sub2>33 && sub3>33 && sub4>33 && sub5>33)
            printf("Congratulations!!! Student is pass in all subjects.");
        else
            printf("Sorry..! Student is fail either in one or more subjects.");
    return 0;
}
