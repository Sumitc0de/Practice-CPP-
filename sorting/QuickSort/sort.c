#include <stdio.h>

// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    int i, curr, prev;

    // Start from the second element (index 1)
    for (i = 1; i < n; i++) {
        curr = arr[i];       // Take the current element as key
        prev = i - 1;       // prev means prev index of the current element 

        
       // check if the prev elem is greater than current one
        while (prev >= 0 && arr[prev] > curr) {
            arr[prev + 1] = arr[prev];  // Shift element to the right
            prev--;
        }

        // Place key at the correct position
        arr[prev + 1] = curr;
    }
}

// Function to print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Main function to test the algorithm
int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("Sorted array:\n");
    printArray(arr, n);

    return 0;
}

