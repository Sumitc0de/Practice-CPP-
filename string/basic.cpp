#include <algorithm>
#include <cctype>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

bool isPalindrome(const string &s)
{
    int left = 0;
    int right = static_cast<int>(s.size()) - 1;

    while (left < right)
    {
        if (s[left] != s[right])
        {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int countVowels(const string &s)
{
    int count = 0;

    for (char ch : s)
    {
        char lower = static_cast<char>(tolower(static_cast<unsigned char>(ch)));

        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
        {
            count++;
        }
    }

    return count;
}

void printStringInfo(const string &label, const string &s)
{
    cout << label << ": " << s << endl;
    cout << "Length: " << s.length() << endl;
    cout << "Size: " << s.size() << endl;
    cout << "Capacity: " << s.capacity() << endl;
    cout << "Empty: " << boolalpha << s.empty() << endl;
}

int main()
{
    cout << "===== C++ String Basics =====" << endl;

    string name = "Rahul";
    string city("Delhi");
    string repeated(5, '*');

    printStringInfo("Name", name);
    cout << "City: " << city << endl;
    cout << "Repeated string: " << repeated << endl;

    cout << "\n===== Taking Input Concept =====" << endl;
    string oneWord = "coding";
    string fullLine = "I am learning C++ strings";

    cout << "cin reads one word example: " << oneWord << endl;
    cout << "getline reads full line example: " << fullLine << endl;

    stringstream ss(fullLine);
    string word;

    cout << "Words from fullLine: ";
    while (ss >> word)
    {
        cout << word << " ";
    }
    cout << endl;

    cout << "\n===== Indexing and Traversal =====" << endl;
    string text = "hello";

    cout << "text: " << text << endl;
    cout << "First character: " << text[0] << endl;
    cout << "Last character: " << text[text.size() - 1] << endl;
    cout << "Using at(1): " << text.at(1) << endl;

    cout << "Forward traversal: ";
    for (int i = 0; i < static_cast<int>(text.size()); i++)
    {
        cout << text[i] << " ";
    }
    cout << endl;

    cout << "Range based loop: ";
    for (char ch : text)
    {
        cout << ch << " ";
    }
    cout << endl;

    cout << "\n===== Addressing and Pointers =====" << endl;
    cout << "Address of string object text: " << &text << endl;
    cout << "Address of first character: " << static_cast<const void *>(text.data()) << endl;

    char *charPtr = &text[0];

    cout << "charPtr points to first character: " << *charPtr << endl;
    charPtr[0] = 'H';
    cout << "After changing charPtr[0]: " << text << endl;

    const char *cStylePtr = text.c_str();
    cout << "C-style string using c_str(): " << cStylePtr << endl;

    cout << "\n===== Character Array vs String =====" << endl;
    char charArray[] = "DSA";
    string stlString = "DSA";

    cout << "charArray: " << charArray << endl;
    cout << "stlString: " << stlString << endl;
    cout << "sizeof(charArray): " << sizeof(charArray) << " bytes" << endl;
    cout << "stlString.length(): " << stlString.length() << endl;

    cout << "\n===== Built-in String Functions =====" << endl;
    string s = "program";

    cout << "Original: " << s << endl;

    s.push_back('s');
    cout << "After push_back('s'): " << s << endl;

    s.pop_back();
    cout << "After pop_back(): " << s << endl;

    s.append("ming");
    cout << "After append(\"ming\"): " << s << endl;

    s.insert(0, "C++ ");
    cout << "After insert(0, \"C++ \"): " << s << endl;

    s.erase(0, 4);
    cout << "After erase(0, 4): " << s << endl;

    cout << "Substring from index 0 length 4: " << s.substr(0, 4) << endl;

    size_t position = s.find("gram");
    if (position != string::npos)
    {
        cout << "\"gram\" found at index: " << position << endl;
    }

    s.replace(0, 3, "code");
    cout << "After replace(0, 3, \"code\"): " << s << endl;

    cout << "\n===== Comparing and Joining =====" << endl;
    string a = "apple";
    string b = "banana";

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "a + b: " << a + " " + b << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a.compare(b): " << a.compare(b) << endl;

    cout << "\n===== Reverse, Sort, and Case Change =====" << endl;
    string letters = "dbca";

    reverse(letters.begin(), letters.end());
    cout << "Reversed dbca: " << letters << endl;

    sort(letters.begin(), letters.end());
    cout << "Sorted letters: " << letters << endl;

    string mixed = "HeLLo";
    for (char &ch : mixed)
    {
        ch = static_cast<char>(tolower(static_cast<unsigned char>(ch)));
    }
    cout << "Lowercase: " << mixed << endl;

    for (char &ch : mixed)
    {
        ch = static_cast<char>(toupper(static_cast<unsigned char>(ch)));
    }
    cout << "Uppercase: " << mixed << endl;

    cout << "\n===== Simple DSA Style Examples =====" << endl;
    string palindromeWord = "level";
    string vowelWord = "education";

    cout << palindromeWord << " is palindrome: " << isPalindrome(palindromeWord) << endl;
    cout << "Vowels in " << vowelWord << ": " << countVowels(vowelWord) << endl;

    cout << "\n===== Clear and Empty =====" << endl;
    string temp = "delete me";
    cout << "Before clear: " << temp << endl;
    temp.clear();
    cout << "After clear, empty: " << temp.empty() << endl;

    return 0;
}
