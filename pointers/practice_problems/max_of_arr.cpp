#include <iostream>
using namespace std;

int main(){
   int arr[5] = {10,20,30,40,50};

    int size = sizeof(arr) / sizeof(arr[0]);

    // Start max with the first element of the array
    int max = arr[0];

    // Pointer to the first element of the array
    int *ptr = arr;

    // Loop through the array using the pointer
    while (ptr < arr + size) {
        // If the current element is larger than max, update max
        if (max < *ptr) {
            max = *ptr;
        }
        ptr++; // Move to the next array element
    }

    cout << max; // Print the maximum value found in the array



    return 0;
}