#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,temp;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    printf("Before swap %d and %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swap %d and %d",a,b);

    return 0;

}