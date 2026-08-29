#include<stdio.h>
#include<conio.h>
int main(){
    int r;
    float ar;
    printf("Enter radius of circle: ");
    scanf("%d", &r);
    ar = 3.14 * r * r;
    printf("Area of circle is %f", ar);
    return 0;
}