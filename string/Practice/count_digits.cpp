#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word = "sumit132s12";
    int counts[10] = {0};

    for (size_t i = 0; i < word.length(); ++i)
    {
        if (word[i] >= '0' && word[i] <= '9')
        {
            counts[word[i] - '0']++;
        }
    }

    for (int d = 0; d < 10; ++d)
    {
        cout << d << ": " << counts[d] << endl;
    }
    return 0;
}