#include <iostream>
using namespace std;


int sumN(int n)
{
    // base case
    if(n == 0)
    {
        return 0;
    }


    return n + sumN(n - 1);
}



void sum(int n, int ans)
{
    // base case
    if(n == 0)
    {
        cout << ans;
        return;
    }


    // recursive call
    sum(n - 1, ans + n);
}



int main()
{
    cout << sumN(5);
//    sum(5, 0);
}