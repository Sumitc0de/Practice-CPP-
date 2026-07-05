#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v = {1,2,3,4,5};
    int maxELem = v[0];
    int minELem = v[0];

    for(int i =0;i<v.size();i++){
        if(v[i] > maxELem){
            maxELem = v[i];
        }
        if(v[i] < minELem){
            minELem = v[i];
        }
    }

    cout << "Max Element :" <<maxELem <<endl;
    cout << "Min Element :" <<minELem<<endl;
    
    return 0;
}