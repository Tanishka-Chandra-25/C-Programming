#include<stdio.h>
int main() {
  int arr[100], n;
  printf("Enter value of n:");
  scanf("%d",&n);
  for ( int i=0; i<n ; i++) 
  {
    printf("Enter the element:");
    scanf("%d", &arr[i]);
  }
  
  for ( int i=n-1 ; i>=0 ;i--)
  {
  printf("%d ", arr[i]);
  }
  
  return 0;
}
