#include<stdio.h>
int main() {
  int arr[100], found=0, n, sr;
  printf("Enter value of n:");
  scanf("%d",&n);
  
  for ( int i=0; i<n ; i++) 
  {
    printf("Enter the element:");
    scanf("%d", &arr[i]);
  }
  printf("Enter element to be searched:");
  scanf("%d", &sr);
  
  for ( int i=0 ; i<n ;i++)
  {
    if ( arr[i]==sr)
    { 
      printf("Element FOUND at %d", i+1);
      found++; 
      break;
    }
  }
  if ( found==0)
  {
    printf("Element NOT FOUND");
  }
  
  return 0;
}
