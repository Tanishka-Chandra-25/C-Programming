#include<stdio.h>
#include<conio.h>
int main() {
    int num, count=0;
    printf("Enter the number:");
    scanf("%d", &num);
    

    while(num!=0)
    { 
        num/= 10;
        count++;
    }

    printf("The number of digits are %d", count);

    return 0;
}