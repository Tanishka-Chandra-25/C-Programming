#include<stdio.h>
#include<conio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num == 0){
        printf("%d is zero", num);
    }
    else if(num > 0){
        printf("%d is positive", num);
    }
    else{
        printf("%d is negative", num);
    }

    return 0;
}