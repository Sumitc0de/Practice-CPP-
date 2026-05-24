#include <iostream>
using namespace std;

int main(){

    // Declare and initialize an array of 5 integers
    int arr[5] = {10, 20, 30, 40, 50};

    // Calculate number of elements in the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Use a pointer to iterate from the first element of the array
    int *start = arr;
    int sum = 0;

    // Continue while the pointer is before the end of the array
    while (start < arr + size) {
        // Dereference the pointer to get the current element value
        sum = sum + *start;
        // Move the pointer to the next integer element in the array
        start++;
    }

    // Print the total sum of array elements
    cout << sum;

    return 0;
}