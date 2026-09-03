#include<stdio.h>
#include<conio.h>
int main () {
    int num, r, p, rem=0 ;
    printf("Enter the three digit number:");
    scanf("%d", &num );
    p=num;
    
    for( int i=0; i<=num; i++)
    {
        r= num%10 ;
        rem=rem+r*r*r ;
        num= num/10 ;
    }
   if(p==rem) {
    printf("The number %d is armstrong ",p);
   }
   else {
    printf("The number %d is not armstrong ",p);
   }
    return 0;
}