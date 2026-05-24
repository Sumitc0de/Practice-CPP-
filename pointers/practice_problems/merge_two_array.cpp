#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int totalSize = size1 + size2;

    // Dynamic memory allocation
    int *merged = new int[totalSize];

    // Pointer for merged array
    int *mergePtr = merged;

    // Pointer for first array
    int *ptr1 = arr1;

    // Pointer for second array
    int *ptr2 = arr2;

    // Copy first array
    while(ptr1 < arr1 + size1)
    {
        *mergePtr = *ptr1;

        mergePtr++;
        ptr1++;
    }

    // Copy second array
    while(ptr2 < arr2 + size2)
    {
        *mergePtr = *ptr2;

        mergePtr++;
        ptr2++;
    }

    // Print merged array
    int *printPtr = merged;

    while(printPtr < merged + totalSize)
    {
        cout << *printPtr << " ";

        printPtr++;
    }

    // Free dynamic memory
    delete[] merged;

    return 0;
}