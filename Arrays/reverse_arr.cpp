#include <iostream>
using namespace std;

int main(){
    int arr[] = {10,5,6,8,1,37,60,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int left = 0, right = size - 1;
    
    while (left<right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    
    cout << "Reversed Array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}