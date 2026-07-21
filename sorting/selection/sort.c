#include <stdio.h>

// Function to swap two integer values using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform selection sort on an array
// Parameters: arr[] - the array to sort, size - number of elements in the array
void selection_sort(int arr[], int size) {
    // Initialize the required counter variables
    int i, j, minIndex;         // minIndex is used to store the index value of the smallest element of the array

    // Outer loop: iterate through each element (excluding the last)
    for (i = 0; i < size - 1; i++) {
        minIndex = i; // Assume the current index has the minimum value

        // Inner loop: find the smallest element in the unsorted part of the array
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {  // comparing the unsorted arr with sorted arr
                minIndex = j; // Updatating minIndex if a smaller element is found inside a unsorted array
            }
        }

        // Swap the smallest found element with the element at index 'i'
        swap(&arr[i], &arr[minIndex]);
    }
}

int main() {
    int arr[] = {10, 50, 30, 20, 40};

    // Calculate number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Calling selection sort function
    selection_sort(arr, n);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
