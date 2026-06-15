#include <iostream>
using namespace std;

int main(){
    int size;
    
    cout << "Enter the size: "<<endl;
    cin>>size;
    
    int arr[100];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int maxelem = arr[0];
    int secondMax = arr[0];

    for(int i = 1; i < size; i++){
        if(arr[i] > maxelem){
            secondMax = maxelem;
            maxelem = arr[i];
        } else if(arr[i] > secondMax && arr[i] < maxelem){
            secondMax = arr[i];
        }
    }

    if(secondMax == maxelem){
        cout << "No distinct second largest element." << endl;
    } else {
        cout << "Second largest element: " << secondMax << endl;
    }

    return 0;
}