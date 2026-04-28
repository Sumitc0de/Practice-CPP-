#include <iostream>
using namespace std;

int main()
{
    int n = 1000;
    int count = 0;
    if (n == 0)
        count = 1; // edge case
    while (n != 0)
    {
        count++;
        n = n / 10;
    }

    cout << count ;
    return 0;
}

// dry run
// n->1000
// count -> 1   n -> 100

// count -> 2 n-> 10

//count -> 3  n->1

//count -> 4 n-> 0