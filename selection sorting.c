#include <stdio.h>

int main()
{
  int size=12,a[size];
  
  printf("Enter the size of array: ");
  scanf("%d",&size);
  printf("Enter the array elements: ");
  for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
  }
  
  // selection sort algorithm to sort the array
  for(int i=0;i<size-1;i++){
    for(int j=i;j<size-1;j++)
    {
      if(a[i]>a[j+1])
      {
        // Swap elements 
        int temp =a[i];
        a[i]=a[j+1];
        a[j+1]=temp;
      }
    }
    
    // Print the array after each pass
    printf("After pass %d\n",i+1);
    for(int b=0;b<size;b++)
    {
      printf("%d ",a[b]);
    }
    printf("\n");
  }
  
  // Print the final sorted array
  printf("\nFinal sorted array: ");
  for(int b=0;b<size;b++)
  {
    printf("%d ",a[b]);
  }
  
  return 0;
}