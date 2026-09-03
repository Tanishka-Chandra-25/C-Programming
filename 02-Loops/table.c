#include<stdio.h>
#include<conio.h>
int main() {
    int a, mul;
    printf("Enter the value of a:");
    scanf("%d", &a);
    for(int i=1; i<=10; i++)
    {
        mul=a*i ;
        printf("%d * %d = %d\n", a, i , mul);
    }
    return 0;
}