# Vector in C++ STL – Complete Learning Guide (Beginner → Interview Level)

If you master `vector`, you'll be able to solve around 70% of beginner DSA problems because most questions use arrays or vectors.

## 1. What is a Vector?

A `vector` is a dynamic array provided by the C++ Standard Template Library (STL).

### Normal Array
```cpp
int arr[5];
```
- Size is fixed.
- You cannot easily increase it.

### Vector
```cpp
vector<int> v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
```
- Size grows automatically.

Memory layout:
- Index: 0 1 2
- Value: 10 20 30

### Why use vector?

If you create `int arr[5];` and the user enters 100 values, the array size becomes a problem. `vector` solves this by expanding automatically.

## 2. Header File

```cpp
#include <vector>
```

Or use the convenience header:

```cpp
#include <bits/stdc++.h>
using namespace std;
```

## 3. Creating Vectors

### Empty Vector
```cpp
vector<int> v;
```

### Vector with size
```cpp
vector<int> v(5);
```
Output:
```
0 0 0 0 0
```

### Vector with size and initial value
```cpp
vector<int> v(5, 10);
```
Output:
```
10 10 10 10 10
```

### Initialize directly
```cpp
vector<int> v = {1, 2, 3, 4, 5};
```

## 4. Adding Elements

Use `push_back()` to add elements at the end.

```cpp
vector<int> v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
```
Output:
```
10 20 30
```

## 5. Accessing Elements

### Using index
```cpp
cout << v[0];
cout << v[1];
```
Output:
```
10
20
```

### Using `at()`
```cpp
cout << v.at(0);
```
Output:
```
10
```

### Difference
- `v[100]` may cause undefined behavior.
- `v.at(100)` throws an exception if the index is out of range.

## 6. Traversing a Vector

### For loop
```cpp
for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
}
```

### Range-based loop
```cpp
for (int x : v) {
    cout << x << " ";
}
```

### Iterator
```cpp
for (auto it = v.begin(); it != v.end(); it++) {
    cout << *it << " ";
}
```

Output for all methods:
```
10 20 30
```

## 7. Size of Vector

```cpp
cout << v.size();
```
Output:
```
3
```

## 8. Check Empty

```cpp
if (v.empty()) {
    cout << "Empty";
}
```

`v.empty()` returns `true` or `false`.

## 9. Remove Elements

### `pop_back()`
```cpp
vector<int> v = {10, 20, 30};
v.pop_back();
```
Output:
```
10 20
```

## 10. First and Last Element

```cpp
cout << v.front();
cout << v.back();
```
Output:
```
10
30
```

## 11. Insert at Specific Position

```cpp
vector<int> v = {10, 20, 30};
v.insert(v.begin() + 1, 15);
```
Output:
```
10 15 20 30
```

## 12. Erase Element

```cpp
vector<int> v = {10, 20, 30, 40};
v.erase(v.begin() + 2);
```
Output:
```
10 20 40
```

### Erase a range

```cpp
v.erase(v.begin(), v.begin() + 2);
```
Before:
```
10 20 30 40
```
After:
```
30 40
```

## 13. Clear Vector

```cpp
v.clear();
```
Removes all elements.

Before:
```
10 20 30
```
After:
```
Empty
```

## 14. Iterators

Iterator behaves like a pointer.

```cpp
vector<int> v = {10, 20, 30};
auto it = v.begin();
cout << *it;
```
Output:
```
10
```

Move iterator:
```cpp
it++;
```
Now points to `20`.

## 15. `begin()` and `end()`

- `v.begin()` points to the first element.
- `v.end()` points just past the last element.

Example:
```
10 20 30
         ^
       end()
```

## 16. Finding an Element

```cpp
vector<int> v = {10, 20, 30, 40};
auto it = find(v.begin(), v.end(), 30);
if (it != v.end()) {
    cout << "Found";
}
```
Output:
```
Found
```

## 17. Sorting Vector

```cpp
vector<int> v = {5, 2, 9, 1};
sort(v.begin(), v.end());
```
Output:
```
1 2 5 9
```

### Descending order

```cpp
sort(v.begin(), v.end(), greater<int>());
```
Output:
```
9 5 2 1
```

## 18. Reverse Vector

```cpp
reverse(v.begin(), v.end());
```
Before:
```
1 2 3 4
```
After:
```
4 3 2 1
```

## 19. Sum of Vector

```cpp
int sum = 0;
for (int x : v) {
    sum += x;
}
```

For competitive programming:

```cpp
int sum = accumulate(v.begin(), v.end(), 0);
```

## 20. 2D Vector

A 2D vector works like a matrix.

```cpp
vector<vector<int>> mat = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
```
Output:
```
1 2 3
4 5 6
7 8 9
```

## Memory Working (Interview Favorite)

When a vector becomes full:
- Size = 4
- Capacity = 4

After `v.push_back(50);` the vector usually allocates more memory, often doubling capacity.
- Old capacity = 4
- New capacity = 8

This is why `push_back()` is O(1) amortized.

## `size()` vs `capacity()`

```cpp
vector<int> v;
v.push_back(10);
v.push_back(20);
cout << v.size();
cout << v.capacity();
```

`size()` returns the number of elements.
`capacity()` returns the amount of memory allocated.

Output may be:
```
2
```
or
```
4
```
depending on the implementation.

## Complexity Table

| Operation   | Complexity |
|-------------|------------|
| Access      | O(1)       |
| push_back() | O(1)       |
| pop_back()  | O(1)       |
| size()      | O(1)       |
| front()     | O(1)       |
| back()      | O(1)       |
| insert()    | O(n)       |
| erase()     | O(n)       |
| find()      | O(n)       |
| sort()      | O(n log n) |

## Most Asked Interview Questions

### Q1. What is a Vector?

A dynamic array provided by STL.

### Q2. Difference between Array and Vector?

| Array          | Vector             |
|----------------|--------------------|
| Fixed Size     | Dynamic Size       |
| Faster         | Flexible           |
| No STL Support | Many STL Functions |

### Q3. Why is `push_back()` O(1)?

Because insertion is at the end. Occasionally reallocation occurs, so the complexity is O(1) amortized.

### Q4. Difference between `size()` and `capacity()`?

- `size()` → elements present
- `capacity()` → memory allocated

### Q5. Which operations are expensive?

- `insert()`
- `erase()`

Because shifting elements is required.
