#include <iostream>
using namespace std;

int reverseArr(int size, int arr[]){

    int *start =  arr;
    int *end = arr + size - 1;

    while(start < end){
         // Swap values
        int temp = *start;
        *start = *end;
        *end = temp;

        // Move pointers
        start++;
        end--;
    }

}

int main(){
    int arr[3] = {10,20,30};

    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArr(size, arr);


    int *ptr = arr ;
    while (ptr < arr + size)
    {
        cout << *ptr << " ";
        ptr++;
    }
    
    return 0;
}