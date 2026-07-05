#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};
    int large = INT_MIN;
    int secondlargest  = INT_MIN;

    for(size_t i = 0;i<v.size();i++){
        if(v[i] >large){
            secondlargest = large;
            large = v[i];
        }else if(v[i] > secondlargest && v[i] != large){
               secondlargest = v[i];
        }
    }
    
    if(secondlargest == INT_MIN)
    {
        cout<<"No Second Largest";
    }
    else
    {
        cout<<"Second Largest = "
            <<secondlargest;
    }

    

    return 0;
}


