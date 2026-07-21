#include <iostream>
using namespace std;

//Backtracking (Post-order) Recursion.

void insertionSortRecursive(int arr[], int n) {
    // Base case: array of size 1 is already sorted
    if (n <= 1)
        return;
    
    // Sort first n-1 elements
    insertionSortRecursive(arr, n - 1);
    
    // Insert the last element at its correct position
    int key = arr[n - 1];
    int j = n - 2;
    
    // Move elements greater than key one position ahead
    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: ";
    printArray(arr, n);
    
    insertionSortRecursive(arr, n);
    
    cout << "Sorted array: ";
    printArray(arr, n);
    
    return 0;
}
