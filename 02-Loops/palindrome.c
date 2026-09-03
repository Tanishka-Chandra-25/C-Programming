#include<stdio.h>
#include<conio.h>
int main () {
    int num, r, p, rev=0 ;
    printf("Enter the number: ");
    scanf("%d", &num );
    p=num ;
    
    for( int i=0; i<=num; i++)
    {
        r= num%10 ;
        rev= rev*10+r ;
        num= num/10 ;
    }
   if(p==rev) {
    printf("The number %d is palindrome ",p);
   }
   else {
    printf("The number %d is not palindrome ",p);
   }
    return 0;
}