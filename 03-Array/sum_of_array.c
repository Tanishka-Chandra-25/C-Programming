#include<stdio.h>
int main() {
  int arr[100], n, sum=0 ;
  printf("Enter value of n:");
  scanf("%d",&n);
  for ( int i=0; i<n ; i++) 
  {
    printf("Enter the element:");
    scanf("%d", &arr[i]);
  }
  
  for ( int i=0 ; i<n ;i++)
  {
    sum+=arr[i];
  }
  printf("The sum of array is %d", sum);
  
  return 0;
}
