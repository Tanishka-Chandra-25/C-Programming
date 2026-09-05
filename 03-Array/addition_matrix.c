#include<stdio.h>

int main() {
  int arr1[100][100], arr2[100][100], arr3[100][100], m; 
  printf("Enter value of m :");
  scanf("%d", &m);
  
  for ( int i=0; i<m ; i++) 
  {
    for (int j=0; j<m; j++)
    {
    printf("Enter the element:");
    scanf("%d ", &arr1[i][j]);
    }
  }
  
  for ( int i=0; i<m ; i++) 
  {
    for ( int j=0; j<m; j++)
    {
    printf("Enter the element:");
    scanf("%d ", &arr2[i][j]);
    }
  }
  
  for ( int i=0; i<m; i++)
  {
    for(int j=0; j<m ; j++)
    {
    arr3[i][j]=arr1[i][j]+arr2[i][j];
    }
  }
  
  printf("Addition of array 1 and array 2:\n");
  
  for(int i=0; i<m; i++)
  {
    for( int j=0; j<m; j++)
    {
      printf("%d ", arr3[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
