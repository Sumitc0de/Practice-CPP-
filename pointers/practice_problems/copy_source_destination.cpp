#include <iostream>
using namespace std;


int main(){
    int source[5] = {1,2,3,4,5};
    int size = sizeof(source) / sizeof(source[0]);

    // Declare destination array with the same number of elements
    int destination[size];

    // Pointer to the beginning of the source array
    int *sourcePtr = source;
    // Pointer to the beginning of the destination array
    int *destinationPtr = destination;
    while (sourcePtr < source + size)
    {
        // Copy the current value from source to destination
        *destinationPtr = *sourcePtr;
        // Advance both pointers to the next element
        sourcePtr++;
        destinationPtr++;
    }

    // Print the copied array contents
    int *ptr = destination;

    while(ptr < destination + size)
    {
        cout << *ptr << " ";

        ptr++;
    }



    
    return 0;
}