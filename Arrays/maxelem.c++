#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        int max = 0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x>max){
                max = x;
            }
            
        }
        cout<<max<<endl;
    }
    return 0;
}
