#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,ch,sum,sub;
    printf("Enter choice 1 for sum and choice 2 for subtract:");
    scanf("%d",&ch);
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if(ch==1)
    {
        sum=a+b;
        printf("The sum:%d",&sum);

    }
    if(ch==2)
    {
        sub=a-b;
        printf("The subtraction:%d",&sub);

    }
    return 0;
}