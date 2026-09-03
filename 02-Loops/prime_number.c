#include<stdio.h>
#include<conio.h>
int main() {
    int num , is_prime=1;
    printf("Enter the number:");
    scanf("%d",&num);

    if(num<=1)
    {
        printf("%d is NOT PRIME", num);
        is_prime=0;
    }

    for(int i=2; i<=num/2; i++)
    {
        if(num%i == 0)
        {
            is_prime=0;
            break;
        }
    }

    if(is_prime)
       {
        printf("The number %d is PRIME", num);
       }
    else{
        printf("The number %d is NOT PRIME", num);
       }
    
    return 0;
}