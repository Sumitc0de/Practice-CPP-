#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {10,20,30,40,50};
    int sum = 0;
   for (int val : v)
    {
        sum += val;
    }

    cout << "Sum :" <<sum;

    return 0;
}