#include<stdio.h>
#include<conio.h>
int main() {
    int n, i=0 , sum=0;
    printf("Enter value of n:");
    scanf("%d", &n);
    for( i=0; i<=n; i++)
    {
        sum+=i;
    }
    printf("The sum of n numbers:%d", sum);
    return 0;
}