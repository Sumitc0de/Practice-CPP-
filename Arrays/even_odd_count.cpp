#include <iostream>
using namespace std;

int main(){
    int arr[] = {10,5,6,8,1,37,60,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int even = 0;
    int odd = 0;

    for(int i = 0;i<size;i++){
        if(arr[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }

    cout << "Even: "<<even <<endl << "Odd :" << odd;


    return 0;
}