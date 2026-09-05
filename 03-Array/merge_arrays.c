#include<stdio.h>

int main() {
  int arr1[100], arr2[100], arr3[100], m, n; 
  printf("Enter value of m and n:");
  scanf("%d%d", &m, &n);
  
  for ( int i=0; i<n ; i++) 
  {
    printf("Enter the element:");
    scanf("%d", &arr1[i]);
  }
  
  for ( int j=0; j<m ; j++) 
  {
    printf("Enter the element:");
    scanf("%d", &arr2[j]);
  }
  
  for ( int i=0; i<n; i++)
  {
    arr3[i]=arr1[i];
  }
  
  for ( int j=0; j<m; j++)
  {
    arr3[n+j]=arr2[j];
  }
  
  printf("The merged array:\n");
  for (int k=0; k<n+m; k++)
  {
    printf("%d ", arr3[k]);
  }
  
  return 0;
}
