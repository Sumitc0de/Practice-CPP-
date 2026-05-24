#include <iostream>
using namespace std;


int main(){
    int arr[5] = {1,2,3,4,5};
    int countEven = 0, countOdd = 0;

    int size = sizeof(arr) / sizeof(arr[0]);

    int *ptr = arr ;
    while (ptr < arr + size)
    {
        if(*ptr % 2 == 0){
            countEven++; 
        }else{
            countOdd++;
        }
        ptr++;
    }

    cout << countEven <<endl<< countOdd;
    
    return 0;
}