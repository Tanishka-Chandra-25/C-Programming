#include<stdio.h>
#include<conio.h>
int main() {
    int num, c, rem, sum=0 ;
    printf("Enter the number:");
    scanf("%d", &num);
    c=num;

    while(num!=0)
    {
        rem=num%10 ;
        sum+=rem;
        num/=10;
    }
    printf("The sum of %d is %d", c, sum);

    return 0;
}