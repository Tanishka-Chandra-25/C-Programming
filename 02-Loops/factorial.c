#include<stdio.h>
#include<conio.h>
int main() {
    int f, fact=1;
    printf("Enter the vaue of f: ");
    scanf("%d", &f);
    for(int i=1; i<=f; i++)
        {
            fact*=i ;
        }
        printf("The factorial :%d", fact);
        return 0;

}
