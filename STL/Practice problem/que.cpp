#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> qu;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cout << "Enter element " << i + 1 << ": ";
        cin >> x;
        qu.push(x);
    }

    cout << qu.front() <<endl;
    cout << qu.back();

    qu.pop();
    cout <<endl << qu.front() << endl;

    cout << "Size: " << qu.size() <<endl;

    cout << endl;
    while (!qu.empty())
    {
        cout << qu.front() << " ";
        qu.pop();
    }

    if(qu.empty()){
        cout << endl << "Queue is empty" <<endl;
    }

    
    return 0;
}