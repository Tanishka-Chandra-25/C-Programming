#include<stdio.h>
#include<conio.h>
int main(){
    int l,b,ar;
    printf("Enter length of rectangle: ");
    scanf("%d", &l);
    printf("Enter breadth of rectangle: ");
    scanf("%d", &b);
    ar = l * b;
    printf("Area of rectangle is %d", ar);
    return 0;
}