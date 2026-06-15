#include <iostream>
using namespace std;

int main()
{   
    int sum = 0;
    int arr[] = {10, 5, 1,3,6};
    int size = sizeof(arr) / sizeof(arr[0]);


    for(int i = 0;i<size;i++){
        sum += arr[i];
    }

    cout << "Sum: " << sum;
}