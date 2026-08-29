#include<stdio.h>
#include<conio.h>
int main() {
    int si,p,r,t;
    printf("Enter principal amount: ");
    scanf("%d", &p);
    printf("Enter rate of interest: ");
    scanf("%d", &r);
    printf("Enter time period: ");
    scanf("%d", &t);
    si = (p * r * t) / 100;
    printf("Simple Interest is %d", si);
    return 0;
}