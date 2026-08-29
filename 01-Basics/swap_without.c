#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Before swap %d and %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap %d and %d",a,b);

    return 0;

}