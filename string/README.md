# C++ Strings Complete Learning Guide

This folder explains C++ strings from beginner basics to useful DSA concepts. It covers `std::string`, character arrays, indexing, addresses, pointers, built-in functions, common mistakes, and practice problems.

## Folder Structure

```text
string/
|-- basic.cpp
|-- README.md
```

## How to Compile and Run

From the project root:

```powershell
g++ .\string\basic.cpp -o .\string\basic.exe
.\string\basic.exe
```

## 1. What Is a String?

A string is a sequence of characters.

Examples:

```text
"hello"
"C++"
"Data Structures"
```

In C++, the most common string type is:

```cpp
string s = "hello";
```

To use it:

```cpp
#include <string>
```

Usually we also include:

```cpp
#include <iostream>
using namespace std;
```

## 2. String Declaration

```cpp
string name = "Rahul";
string city("Delhi");
string stars(5, '*');
```

Output idea:

```text
Rahul
Delhi
*****
```

## 3. Input in Strings

### `cin`

`cin` reads only one word.

```cpp
string word;
cin >> word;
```

If input is:

```text
hello world
```

then only `hello` is stored.

### `getline()`

`getline()` reads the full line, including spaces.

```cpp
string line;
getline(cin, line);
```

If input is:

```text
hello world
```

then `hello world` is stored.

Important when using `cin` before `getline()`:

```cpp
cin.ignore();
getline(cin, line);
```

`cin.ignore()` removes the leftover newline from the input buffer.

## 4. Indexing

Each character has an index.

```cpp
string s = "hello";
```

```text
Index:  0 1 2 3 4
Char:   h e l l o
```

Access characters:

```cpp
cout << s[0];              // h
cout << s[1];              // e
cout << s[s.size() - 1];   // o
cout << s.at(2);           // l
```

Difference:

- `s[i]` is commonly used and fast.
- `s.at(i)` checks the range and can throw an error if index is invalid.

## 5. Traversing a String

### Using Index

```cpp
for (int i = 0; i < s.size(); i++) {
    cout << s[i] << " ";
}
```

### Using Range-Based Loop

```cpp
for (char ch : s) {
    cout << ch << " ";
}
```

### Using Reference to Modify

```cpp
for (char &ch : s) {
    ch = 'x';
}
```

Use `char &ch` when you want to change the original string.

## 6. Addresses and Memory

A `string` object is a variable, so it has its own address.

```cpp
string s = "hello";

cout << &s;
```

This prints the address of the string object.

The characters inside the string are stored in another internal memory area.

```cpp
cout << static_cast<const void *>(s.data());
```

This prints the address of the first character.

Mental model:

```text
s object
|
|-- stores size, capacity, and character storage information
|
characters: h e l l o
```

So:

- `&s` is the address of the string object.
- `s.data()` is the address of the first character.

## 7. Strings and Pointers

You can point to the first character of a non-empty string:

```cpp
string s = "hello";
char *ptr = &s[0];

cout << *ptr;   // h
```

You can also modify characters through the pointer:

```cpp
ptr[0] = 'H';
cout << s;      // Hello
```

Important:

```cpp
if (!s.empty()) {
    char *ptr = &s[0];
}
```

Always make sure the string is not empty before using `&s[0]`.

## 8. `c_str()` and `data()`

### `c_str()`

`c_str()` gives a C-style string pointer.

```cpp
const char *p = s.c_str();
```

It is useful when a function expects `const char *`.

### `data()`

`data()` gives a pointer to the internal character array.

```cpp
cout << s.data();
```

In modern C++, `data()` can be used to access the character storage.

Do not store `c_str()` or `data()` pointers for a long time if the string may change, because modifying the string can invalidate old pointers.

## 9. Character Array vs `std::string`

### Character Array

```cpp
char arr[] = "hello";
```

It stores characters ending with a null character:

```text
h e l l o \0
```

### `std::string`

```cpp
string s = "hello";
```

It manages memory automatically and provides many useful functions.

| Feature | Character Array | `std::string` |
|---|---|---|
| Header | Built-in | `<string>` |
| Size handling | Manual | Automatic |
| Easy concatenation | No | Yes |
| Built-in functions | Limited | Many |
| Safer for beginners | Less safe | More safe |

## 10. Important Built-in Functions

### `length()` and `size()`

Both return the number of characters.

```cpp
string s = "hello";

cout << s.length(); // 5
cout << s.size();   // 5
```

### `empty()`

Checks if the string has no characters.

```cpp
if (s.empty()) {
    cout << "Empty string";
}
```

### `push_back()`

Adds one character at the end.

```cpp
s.push_back('!');
```

### `pop_back()`

Removes the last character.

```cpp
s.pop_back();
```

Only call it when the string is not empty.

```cpp
if (!s.empty()) {
    s.pop_back();
}
```

### `append()`

Adds another string at the end.

```cpp
s.append(" world");
```

### `insert()`

Inserts text at a position.

```cpp
s.insert(0, "Hi ");
```

### `erase()`

Removes characters.

```cpp
s.erase(0, 3);
```

This removes 3 characters starting from index 0.

### `substr()`

Creates a substring.

```cpp
string part = s.substr(0, 4);
```

This takes 4 characters from index 0.

### `find()`

Searches for a character or substring.

```cpp
size_t pos = s.find("abc");

if (pos != string::npos) {
    cout << "Found";
}
```

`string::npos` means not found.

### `replace()`

Replaces part of the string.

```cpp
s.replace(0, 3, "code");
```

### `clear()`

Removes all characters.

```cpp
s.clear();
```

## 11. Comparing Strings

```cpp
string a = "apple";
string b = "banana";

cout << (a == b);
cout << (a < b);
cout << a.compare(b);
```

String comparison is lexicographical, like dictionary order.

Examples:

```text
apple < banana
abc < abd
```

## 12. Concatenation

```cpp
string first = "Hello";
string second = "World";

string result = first + " " + second;
```

Output:

```text
Hello World
```

## 13. Reverse and Sort

Use:

```cpp
#include <algorithm>
```

Reverse:

```cpp
reverse(s.begin(), s.end());
```

Sort:

```cpp
sort(s.begin(), s.end());
```

Example:

```cpp
string s = "dbca";
sort(s.begin(), s.end());
cout << s; // abcd
```

## 14. Uppercase and Lowercase

Use:

```cpp
#include <cctype>
```

Lowercase:

```cpp
for (char &ch : s) {
    ch = tolower(ch);
}
```

Uppercase:

```cpp
for (char &ch : s) {
    ch = toupper(ch);
}
```

Safer version:

```cpp
ch = static_cast<char>(tolower(static_cast<unsigned char>(ch)));
```

This avoids problems with negative `char` values.

## 15. Passing Strings to Functions

### Pass by Value

```cpp
void print(string s) {
    cout << s;
}
```

This creates a copy.

### Pass by Reference

```cpp
void change(string &s) {
    s[0] = 'H';
}
```

This can modify the original string.

### Pass by Const Reference

```cpp
void print(const string &s) {
    cout << s;
}
```

This avoids copying and protects the original string from changes.

Best practice for read-only string parameters:

```cpp
void functionName(const string &s)
```

## 16. Common DSA String Patterns

### Count Vowels

```cpp
int countVowels(const string &s) {
    int count = 0;

    for (char ch : s) {
        ch = tolower(ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    return count;
}
```

### Check Palindrome

```cpp
bool isPalindrome(const string &s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}
```

### Frequency of Characters

```cpp
int freq[26] = {0};
string s = "banana";

for (char ch : s) {
    freq[ch - 'a']++;
}
```

This works for lowercase English letters.

## 17. Common Mistakes

### Accessing Invalid Index

Wrong:

```cpp
cout << s[s.size()];
```

Correct:

```cpp
cout << s[s.size() - 1];
```

Only do this if the string is not empty.

### Calling `pop_back()` on Empty String

Wrong:

```cpp
string s = "";
s.pop_back();
```

Correct:

```cpp
if (!s.empty()) {
    s.pop_back();
}
```

### Forgetting `cin.ignore()` Before `getline()`

Wrong:

```cpp
int age;
string name;

cin >> age;
getline(cin, name);
```

Correct:

```cpp
int age;
string name;

cin >> age;
cin.ignore();
getline(cin, name);
```

### Confusing Object Address and Character Address

```cpp
cout << &s;       // address of string object
cout << s.data(); // character data
```

They are not the same thing.

### Storing Old `c_str()` Pointer

Wrong:

```cpp
const char *p = s.c_str();
s += " new text";
cout << p;
```

The pointer may become invalid after modifying the string.

Correct:

```cpp
s += " new text";
const char *p = s.c_str();
cout << p;
```

## 18. Complexity Notes

| Operation | Average Complexity |
|---|---|
| Access by index | `O(1)` |
| `length()` / `size()` | `O(1)` |
| `push_back()` | Amortized `O(1)` |
| `pop_back()` | `O(1)` |
| `find()` | `O(n * m)` in simple thinking |
| `substr()` | `O(k)` |
| `insert()` | `O(n)` |
| `erase()` | `O(n)` |
| `sort()` | `O(n log n)` |
| `reverse()` | `O(n)` |

## 19. One-Page Cheat Sheet

```cpp
#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

string s = "hello";

s.length();
s.size();
s.empty();

s[0];
s.at(1);

s.push_back('!');
s.pop_back();
s.append(" world");
s.insert(0, "Hi ");
s.erase(0, 3);
s.substr(0, 4);
s.find("ll");
s.replace(0, 2, "He");
s.clear();

reverse(s.begin(), s.end());
sort(s.begin(), s.end());

const char *p = s.c_str();
```

## 20. Practice Problems

### Beginner

| No. | Problem | Concept |
|---|---|---|
| 1 | Print every character of a string | Traversal |
| 2 | Count vowels and consonants | Loop + condition |
| 3 | Reverse a string | Two pointers |
| 4 | Check palindrome | Two pointers |
| 5 | Count spaces in a sentence | `getline()` |

### Intermediate

| No. | Problem | Concept |
|---|---|---|
| 1 | Find first non-repeating character | Frequency array |
| 2 | Remove duplicate characters | Hashing |
| 3 | Check anagram | Sorting or frequency |
| 4 | Reverse every word in a sentence | String parsing |
| 5 | Compress string | Counting groups |

### Important DSA

| No. | Problem | Concept |
|---|---|---|
| 1 | Longest common prefix | Comparison |
| 2 | Valid palindrome ignoring spaces | Two pointers |
| 3 | Longest substring without repeating characters | Sliding window |
| 4 | String matching | `find()` / KMP later |
| 5 | Group anagrams | Hash map |

## 21. Summary

Final takeaways:

- `std::string` is safer and easier than character arrays.
- Use `getline()` for full lines.
- Indexing starts from 0.
- `&s` gives the address of the string object.
- `s.data()` gives the address of character storage.
- `c_str()` gives a C-style string pointer.
- Use `const string &s` when passing a string to a function without modifying it.
- Always check `empty()` before accessing the first or last character.
- Strings are heavily used in DSA problems like palindrome, anagram, frequency counting, sliding window, and pattern matching.
