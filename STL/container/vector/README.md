# C++ STL Vector - Complete Learning Guide

This folder explains `std::vector`, one of the most important containers in the C++ Standard Template Library (STL).

A vector is like a dynamic array. It stores elements in order, allows fast index-based access, and can grow automatically when new elements are added.

## Folder Structure

```text
vector/
|-- basic.cpp
|-- basic.exe
|-- README.md
```

> Note: `basic.exe` is a compiled output file. The main source file for learning is `basic.cpp`.

## How to Compile and Run

From the project root:

```bash
g++ STL/container/vector/basic.cpp -o STL/container/vector/basic
./STL/container/vector/basic
```

On Windows PowerShell:

```powershell
g++ .\STL\container\vector\basic.cpp -o .\STL\container\vector\basic.exe
.\STL\container\vector\basic.exe
```

## What Is a Vector?

A `vector` is a sequence container that stores elements in contiguous memory locations.

It behaves like an array, but unlike a normal array, its size can change at runtime.

### Normal Array

```cpp
int arr[3] = {1, 2, 3};
```

The size of this array is fixed.

### Vector

```cpp
vector<int> v;

v.push_back(1);
v.push_back(2);
v.push_back(3);
```

The vector can grow as more values are inserted.

## Required Header File

To use vectors, include:

```cpp
#include <vector>
```

Common starting code:

```cpp
#include <iostream>
#include <vector>
using namespace std;
```

## Basic Syntax

```cpp
vector<data_type> vector_name;
```

Examples:

```cpp
vector<int> numbers;
vector<char> letters;
vector<string> names;
vector<double> prices;
```

## `basic.cpp` - Basic Vector Usage

This file introduces the following concepts:

- Creating an empty vector
- Adding elements using `push_back()`
- Checking vector size using `size()`
- Checking vector capacity using `capacity()`
- Traversing a vector using loops

Example:

```cpp
vector<int> v;

v.push_back(1);
v.push_back(2);
v.push_back(3);
```

After these insertions, the vector contains:

```text
Index:  0   1   2
Value:  1   2   3
```

Elements can be accessed using indexes:

```cpp
cout << v[0]; // 1
cout << v[1]; // 2
cout << v[2]; // 3
```

## Vector Initialization

### Empty Vector

```cpp
vector<int> v;
```

Creates an empty vector.

### Vector With Initial Values

```cpp
vector<int> v = {1, 2, 3, 4, 5};
```

Creates a vector with five elements.

### Vector With Fixed Size

```cpp
vector<int> v(5);
```

Creates a vector of size `5`. Each element is initialized with `0`.

```text
0 0 0 0 0
```

### Vector With Fixed Size and Custom Value

```cpp
vector<int> v(5, 10);
```

Creates a vector of size `5`, where every element is `10`.

```text
10 10 10 10 10
```

### Copy One Vector Into Another

```cpp
vector<int> a = {1, 2, 3};
vector<int> b = a;
```

Now `b` contains:

```text
1 2 3
```

## Adding Elements

Use `push_back()` to insert an element at the end of the vector.

```cpp
vector<int> v;

v.push_back(10);
v.push_back(20);
v.push_back(30);
```

Result:

```text
10 20 30
```

## Removing Elements

Use `pop_back()` to remove the last element.

```cpp
vector<int> v = {10, 20, 30};

v.pop_back();
```

Result:

```text
10 20
```

Important: Do not call `pop_back()` on an empty vector.

Safe version:

```cpp
if (!v.empty()) {
    v.pop_back();
}
```

## Size vs Capacity

`size()` and `capacity()` are different.

| Function | Meaning |
|---|---|
| `size()` | Number of elements currently stored in the vector |
| `capacity()` | Amount of memory currently allocated by the vector |

Example:

```cpp
vector<int> v;

v.push_back(1);
v.push_back(2);
v.push_back(3);

cout << v.size() << endl;
cout << v.capacity() << endl;
```

### Mental Model

```text
size     = number of filled seats
capacity = total seats currently available
```

Possible internal state:

```text
Index:     0   1   2   3
Value:     1   2   3   -

size:      3
capacity:  4
```

The empty slot is reserved memory. It is not part of the vector's actual data yet.

## Why Capacity Is Usually Bigger Than Size

When a vector becomes full and a new element is inserted, it usually allocates a bigger memory block.

Then it:

1. Creates new larger memory.
2. Copies or moves old elements into the new memory.
3. Adds the new element.
4. Releases the old memory.

This is why `capacity()` may be greater than `size()`.

## Accessing Elements

### Using `[]`

```cpp
cout << v[0];
```

This is fast, but it does not check whether the index is valid.

### Using `at()`

```cpp
cout << v.at(0);
```

This checks whether the index is valid. If the index is out of range, it throws an error.

## Traversing a Vector

### Simple `for` Loop

Use this when you need the index.

```cpp
for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
}
```

### Range-Based `for` Loop

Use this when you only need the values.

```cpp
for (int x : v) {
    cout << x << " ";
}
```

### Range-Based Loop With Reference

Use a reference when you want to modify the original elements.

```cpp
for (int &x : v) {
    x = x * 2;
}
```

### Range-Based Loop With `const` Reference

Use `const` reference for large objects when you only want to read values.

```cpp
for (const string &name : names) {
    cout << name << endl;
}
```

## Common Vector Functions

| Function | Description |
|---|---|
| `push_back(x)` | Adds `x` at the end |
| `pop_back()` | Removes the last element |
| `size()` | Returns the number of stored elements |
| `capacity()` | Returns the current allocated capacity |
| `empty()` | Returns `true` if the vector is empty |
| `front()` | Returns the first element |
| `back()` | Returns the last element |
| `clear()` | Removes all elements |
| `at(i)` | Accesses index `i` with bounds checking |
| `v[i]` | Accesses index `i` without bounds checking |

Example:

```cpp
vector<int> v = {10, 20, 30};

cout << v.front() << endl; // 10
cout << v.back() << endl;  // 30

v.pop_back();

cout << v.size() << endl;  // 2
```

## Vector vs Array

| Feature | Array | Vector |
|---|---|---|
| Size | Fixed | Dynamic |
| Header required | No extra STL header | Requires `<vector>` |
| Can grow | No | Yes |
| Stores elements in order | Yes | Yes |
| Index access | Yes | Yes |
| Has built-in functions | Very limited | Many useful functions |

## Time Complexity

| Operation | Time Complexity |
|---|---|
| Access by index | `O(1)` |
| Add at end using `push_back()` | Amortized `O(1)` |
| Remove from end using `pop_back()` | `O(1)` |
| Insert in middle | `O(n)` |
| Delete from middle | `O(n)` |
| Traverse all elements | `O(n)` |

## Common Mistakes

### 1. Accessing an Invalid Index

Wrong:

```cpp
vector<int> v = {1, 2, 3};
cout << v[5];
```

Correct:

```cpp
if (5 < v.size()) {
    cout << v[5];
}
```

Better while learning:

```cpp
cout << v.at(2);
```

### 2. Confusing `size()` and `capacity()`

Do not loop until `capacity()`. Loop until `size()`.

Wrong:

```cpp
for (int i = 0; i < v.capacity(); i++) {
    cout << v[i];
}
```

Correct:

```cpp
for (int i = 0; i < v.size(); i++) {
    cout << v[i];
}
```

### 3. Calling `front()` or `back()` on an Empty Vector

Wrong:

```cpp
vector<int> v;
cout << v.back();
```

Correct:

```cpp
if (!v.empty()) {
    cout << v.back();
}
```

### 4. Forgetting That Indexing Starts From `0`

For this vector:

```cpp
vector<int> v = {10, 20, 30};
```

The valid indexes are:

```text
0 1 2
```

Not:

```text
1 2 3
```

## Best Practices

- Use `vector` instead of raw dynamic arrays in most C++ programs.
- Use `size()` for loop conditions, not `capacity()`.
- Check `empty()` before using `front()`, `back()`, or `pop_back()`.
- Use `at()` when you want safer index access.
- Use range-based loops when indexes are not needed.
- Use references when modifying elements inside a loop.
- Use `const` references for reading large objects.

## Suggested Learning Order

1. Read and run `basic.cpp`.
2. Add more values using `push_back()`.
3. Print `size()` and `capacity()` after every insertion.
4. Try both a normal `for` loop and a range-based `for` loop.
5. Practice `front()`, `back()`, `pop_back()`, and `empty()`.
6. Create vectors using different initialization styles.
7. Compare vector behavior with normal arrays.

## Practice Problems

### Problem 1: Print All Elements

Create a vector:

```cpp
vector<int> v = {10, 20, 30, 40, 50};
```

Print all elements using a simple `for` loop.

### Problem 2: Sum of Vector Elements

Find the sum of all elements in:

```cpp
vector<int> v = {1, 2, 3, 4, 5};
```

Expected output:

```text
15
```

### Problem 3: Find Maximum Element

Create a vector and find the largest number without using built-in maximum functions.

### Problem 4: Double Every Element

Create:

```cpp
vector<int> v = {2, 4, 6, 8};
```

Modify it so it becomes:

```text
4 8 12 16
```

### Problem 5: Reverse Print

Print the vector elements from last to first.

### Problem 6: Remove Last Element Safely

Create an empty vector and write logic that calls `pop_back()` only if the vector is not empty.

### Problem 7: Count Even Numbers

Create a vector of integers and count how many numbers are even.

### Problem 8: Input Vector Elements

Take `n` from the user, then input `n` numbers into a vector and print them.

Example:

```cpp
int n;
cin >> n;

vector<int> v;

for (int i = 0; i < n; i++) {
    int value;
    cin >> value;
    v.push_back(value);
}
```

## Quick Revision Table

| Code | Meaning |
|---|---|
| `vector<int> v;` | Creates an empty integer vector |
| `vector<int> v(5);` | Creates a vector of size `5` with default values |
| `vector<int> v(5, 10);` | Creates a vector of size `5` filled with `10` |
| `v.push_back(20);` | Adds `20` at the end |
| `v.pop_back();` | Removes the last element |
| `v.size();` | Returns the number of elements |
| `v.capacity();` | Returns the allocated capacity |
| `v.empty();` | Checks whether the vector is empty |
| `v.front();` | Returns the first element |
| `v.back();` | Returns the last element |
| `v.clear();` | Removes all elements |

## Final Mental Model

Think of a vector as a smart array.

```text
It stores elements in order.
It gives fast index access.
It grows automatically.
It tracks both size and capacity.
```

For DSA, vectors are useful in arrays, dynamic lists, prefix sums, sorting problems, searching problems, matrices, graphs, and many other topics.
