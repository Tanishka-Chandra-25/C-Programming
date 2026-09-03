#include<stdio.h>
#include<conio.h>
int main () {
    int num, r, rev=0;
    printf("Enter the number: ");
    scanf("%d", &num );
    printf("Before reversing: %d\n ", num);
    for( int i=0; i<=num; i++)
    {
        r= num%10 ;
        rev= rev*10+r ;
        num= num/10 ;
    }
    printf("After reversing: %d", rev);
    return 0;
}