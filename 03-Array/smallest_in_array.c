#include<stdio.h>
int main() {
  int arr[100], n, min ;
  printf("Enter value of n:");
  scanf("%d",&n);
  for ( int i=0; i<n ; i++) 
  {
    printf("Enter the element:");
    scanf("%d", &arr[i]);
  }
  min=arr[0];
  for ( int i=0 ; i<n ;i++)
  {
    if(arr[i]<min)
    {
      min=arr[i];
    }
  }
  printf("The smallest element is %d", min);
  
  return 0;
}
