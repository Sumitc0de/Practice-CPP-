#include <iostream>
using namespace std;

int main(){
    int size;
    
    cout << "Enter the size: "<<endl;
    int arr[100];
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    int minelem = arr[0];

    for(int i=0;i<size;i++){
        if(arr[i] < minelem){
            minelem = arr[i];
        }
    }
    
    cout << "Maximum element: " << minelem << endl;

    return 0;
}