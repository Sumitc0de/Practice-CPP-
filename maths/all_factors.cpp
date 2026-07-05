#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){ 
    int n = 10;
    int sum =0;
    vector<int> factors;

    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            factors.push_back(i);
            if((n / i) != i){
                factors.push_back(n / i);
            }
        }
    }

    sort(factors.begin(), factors.end());

    for(int factor : factors){
        cout << factor << " ";
        sum += factor;
    }

    // count factor
    cout <<endl <<factors.size();
    
    // sum of factor
    cout <<endl << sum;

    return 0;
}