#include <iostream>
using namespace std;

int main(){
    int size;
    
    cout << "Enter the size: "<<endl;
    cin>>size;
    
    int arr[100];
    int maxelem = arr[0];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        if(arr[i] > maxelem){
            maxelem = arr[i];
        }
    }
    
    cout << "Maximum element: " << maxelem << endl;

    return 0;
}