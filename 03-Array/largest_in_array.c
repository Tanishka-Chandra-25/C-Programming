#include<stdio.h>
int main() {
  int arr[100], n, max ;
  printf("Enter value of n:");
  scanf("%d",&n);
  for ( int i=0; i<n ; i++) 
  {
    printf("Enter the element:");
    scanf("%d", &arr[i]);
  }
  max=arr[0];
  for ( int i=0 ; i<n ;i++)
  {
    if(arr[i]> max)
    {
      max=arr[i];
    }
  }
  printf("The largest element is %d", max);
  
  return 0;
}
