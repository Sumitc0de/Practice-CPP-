#include <iostream>
using namespace std;

//Print after recursion (backtracking)
void print1ToN(int n)
{
    if (n == 0)
    {
        return;
    }

    print1ToN(n - 1);
    cout << n << " ";
}

//Print before recursion
void print(int i, int n){

    // base case
    if(i > n)
        return;


    // work
    cout << i << " ";


    // recursive call
    print(i+1, n);
}


int main()
{
    print(1,5);
    // print1ToN(5); 

    return 0;
}