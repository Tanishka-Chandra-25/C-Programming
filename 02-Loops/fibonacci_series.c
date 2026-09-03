#include<stdio.h>
#include<conio.h>
int main () {
    int n , nt , t1=0 ,t2=1 ;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for( int i=0; i<=n; i++)
    {
        nt= t1 + t2;
        printf("%d" , nt);
        t1=t2;
        t2=nt;
    }
    return 0;
}