#include<stdio.h>

int binarysearch(int arr[], int size, int tg)
{
    int low = 0;
    int high = size-1;

    while (low<=high) 
    {
        int mid=(low+high)/2;
        if (arr[mid]==tg) 
        {
            return mid;
        }
        if (arr[mid]<tg) 
        {
            low=mid+1;
        } 
        else 
        {
            high=mid-1;
        }
    }
    return -1;
}

int main() {
  int arr[100], n, tg; 
  printf("Enter value of n:");
  scanf("%d",&n);
  printf("Enter sorted elements");
  for ( int i=0; i<n ; i++) 
  {
    printf("Enter the element:");
    scanf("%d", &arr[i]);
  }
  
  printf("Enter target:");
  scanf("%d", &tg);

    int result=binarysearch(arr, n, tg);

    if (result!=-1) {
        printf("Element found at position %d\n", result+1);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}
