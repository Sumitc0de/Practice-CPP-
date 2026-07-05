#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "sumit";

    for (size_t i = 0; i < name.length(); ++i)
    {
        if (name[i] > 'a' && name[i] < 'z')
        {

            int num = int(name[i] - 32);
            cout << char(num);
        }
    }
    // cout << name;

    return 0;
}