#include <stdio.h>

// Function to sort an array using a modified bubble sort
void sorting(int a[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i; j < size - 1; j++) {
            if (a[i] > a[j + 1]) {
                // Swap elements
                int temp = a[i];
                a[i] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size = 12, s, count = 0; 
    int a[size]; 

    
    printf("Enter size of array:\n");
    scanf("%d", &size);

    // Get the array elements from the user
    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    // Sort the array
    sorting(a, size);

    // Get the element to search for from the user
    printf("Enter the element you want to search:\n");
    scanf("%d", &s);

    // Initialize the search range for binary search
    int min = 0;
    int max = size - 1;

    // Perform binary search
    for (int i = 0; min <= max; i++) {
        int mid = (min + max) / 2; // Calculate the middle index

        // Check if the search element is greater than the middle element
        if (s > a[mid]) {
            min = mid + 1; // Search in the right half
        }
        // Check if the search element is less than the middle element
        else if (s < a[mid]) {
            max = mid - 1; // Search in the left half
        }
        // If the search element is found
        else {
            printf("%d is present\n", s);
            count++;
            break; // Exit the loop
        }
    }

    // If the element is not found
    if (count == 0) {
        printf("%d is not present\n", s);
    }

    return 0;
}