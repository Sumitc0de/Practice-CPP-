#include <iostream>
using namespace std;


void fibonacci(int n, int a, int b)
{
    // base case
    if(n == 0)
    {
        return;
    }


    cout << a << " ";


    fibonacci(n-1, b, a+b);
}


int main()
{
    int n = 8;


    fibonacci(n, 0, 1);


    return 0;
}