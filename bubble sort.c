#include <stdio.h>

int main()
{

  int size = 12, a[size];

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  printf("Enter the array elements: ");
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &a[i]);
  }

  // Bubble sort algorithm to sort the array
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size - (i + 1); j++)
    {
      if (a[j] > a[j + 1])
      {
        // Swap
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }

    // Print the array after each pass
    printf("After pass %d: ", i + 1);
    for (int b = 0; b < size; b++)
    {
      printf("%d ", a[b]);
    }
    printf("\n");
  }

  // Print the final sorted array
  printf("Final sorted array: ");
  for (int b = 0; b < size; b++)
  {
    printf("%d ", a[b]);
  }

  return 0;
}