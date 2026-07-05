#include <iostream>
using namespace std;

int main(){
    int n = 65;
    int count = 0;

    for(int i =1;i*i<=n;i++){
        if(n%i == 0){
            count++;
            if((n/i) != i) count++;
        }

    }

    if(count == 2) cout << "Prime";
    else cout << "Not prime";

    return 0;
}