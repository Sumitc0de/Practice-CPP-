#include <iostream>
using namespace std;

int main()
{

    int arr[3] = {10, 20, 30};
    int *ptr = arr;

    // cout << *ptr <<endl;
    // ptr++;
    // cout << *ptr <<endl;
    cout << ptr + 1 << endl; // print the 2ndd elements address of the array

    // cout << *(ptr + 0); // 10
    // cout << *(ptr + 1); // 20
    // cout << *(ptr + 2); // 30

    cout << "Array address: " << arr << endl;
    cout << "Pointer address: " << ptr << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "arr[" << i << "] = " << arr[i]
             << ", address = " << &arr[i] << endl;
    }

    return 0;
}
