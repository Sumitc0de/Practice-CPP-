# Pointers in C++ - Complete Learning Guide

This folder contains small C++ programs that explain pointers step by step. The goal of this README is to help you understand not only what each file does, but also the deeper idea behind pointers: variables live in memory, and pointers store memory addresses.

## Folder Structure

```text
pointers/
|-- basic.cpp
|-- arithmetic.cpp
|-- dblpointer.cpp
|-- functions.cpp
|-- memory_allocation.cpp
|-- practice_problems/
    |-- swap_two_num.cpp
```

## How to Compile and Run

From the project root:

```bash
g++ pointers/basic.cpp -o pointers/basic
./pointers/basic
```

On Windows PowerShell:

```powershell
g++ .\pointers\basic.cpp -o .\pointers\basic.exe
.\pointers\basic.exe
```

Replace `basic.cpp` with any other file name to run that example.

## What Is a Pointer?

A pointer is a variable that stores the address of another variable.

Normal variable:

```cpp
int a = 25;
```

Pointer variable:

```cpp
int *ptr = &a;
```

Meaning:

```text
a stores a value.
ptr stores the address of a.
*ptr gives the value stored at that address.
```

Visual:

```text
Variable memory:

Name       Address      Value
----       -------      -----
a          0x100        25
ptr        0x200        0x100

Relationship:

ptr ---- stores ----> address of a
ptr ---- points to -> a
*ptr ---------------> value of a, which is 25
```

## Important Pointer Operators

| Operator | Name | Meaning |
|---|---|---|
| `&` | address-of operator | Gives the address of a variable |
| `*` | dereference operator | Gives the value stored at the address |
| `int *ptr` | pointer declaration | Declares a pointer to an integer |

Example:

```cpp
int a = 10;
int *ptr = &a;

cout << a;    // 10
cout << &a;   // address of a
cout << ptr;  // same address as &a
cout << *ptr; // 10
```

## 1. `basic.cpp` - Basic Pointer Concept

This file introduces the most important pointer ideas.

Code idea:

```cpp
int a = 25;
int *ptr = &a;
```

The program prints:

```cpp
cout << a << endl;     // value of a
cout << ptr << endl;   // address of a
cout << &ptr << endl;  // address of pointer variable itself
cout << *ptr << endl;  // value pointed to by ptr
```

Memory visualization:

```text
int a = 25;
int *ptr = &a;

Address       Variable      Value
-------       --------      -----
0x100         a             25
0x200         ptr           0x100

ptr contains 0x100.
0x100 is the address of a.
So *ptr means "go to address 0x100 and read the value".
Therefore *ptr is 25.
```

### Key Learning

`ptr` and `&a` both represent the address of `a`.

`&ptr` is different. It is the address of the pointer variable itself.

`*ptr` is the value stored at the address inside `ptr`.

## 2. `arithmetic.cpp` - Pointer Arithmetic and Arrays

This file explains how pointers work with arrays.

Code idea:

```cpp
int arr[3] = {10, 20, 30};
int *ptr = arr;
```

In C++, the name of an array usually behaves like the address of its first element.

So:

```cpp
ptr == &arr[0]
```

Visual:

```text
Array:

Index        0        1        2
Value        10       20       30
Address      0x100    0x104    0x108

ptr = arr

ptr points to arr[0]
ptr + 1 points to arr[1]
ptr + 2 points to arr[2]
```

If `int` takes 4 bytes, then `ptr + 1` does not increase the address by 1 byte. It increases it by `sizeof(int)`, usually 4 bytes.

```cpp
cout << ptr + 1 << endl;
```

This prints the address of the second element, not the value.

To print values:

```cpp
cout << *(ptr + 0); // 10
cout << *(ptr + 1); // 20
cout << *(ptr + 2); // 30
```

### Array Access and Pointer Access

These are equivalent:

```cpp
arr[i]
*(arr + i)
*(ptr + i)
ptr[i]
```

Example:

```cpp
cout << arr[1];      // 20
cout << *(arr + 1);  // 20
cout << *(ptr + 1);  // 20
cout << ptr[1];      // 20
```

### Key Learning

Pointer arithmetic depends on the data type.

For an `int *`, `ptr + 1` moves by `sizeof(int)`.

For a `char *`, `ptr + 1` moves by `sizeof(char)`.

For a `double *`, `ptr + 1` moves by `sizeof(double)`.

## 3. `dblpointer.cpp` - Double Pointers

This file explains pointers to pointers.

Code idea:

```cpp
int a = 10;
int *p = &a;
int **pp = &p;
```

Meaning:

```text
a stores an integer value.
p stores the address of a.
pp stores the address of p.
```

Visual:

```text
pp -> p -> a -> 10
```

Detailed memory:

```text
Address       Variable      Value
-------       --------      -----
0x100         a             10
0x200         p             0x100
0x300         pp            0x200
```

Expression meanings:

| Expression | Meaning | Result |
|---|---|---|
| `a` | value of `a` | `10` |
| `&a` | address of `a` | `0x100` |
| `p` | value stored in `p` | `0x100` |
| `*p` | value at address stored in `p` | `10` |
| `&p` | address of pointer `p` | `0x200` |
| `pp` | value stored in `pp` | `0x200` |
| `*pp` | value at address stored in `pp` | `p`, which stores `0x100` |
| `**pp` | value reached after two dereferences | `10` |

### Step-by-Step Dereference

```cpp
cout << **pp;
```

Read it like this:

```text
pp stores address of p.
*pp gives p.
p stores address of a.
**pp gives *p.
*p gives a.
So **pp gives 10.
```

### Key Learning

A double pointer stores the address of a pointer.

It is useful in advanced topics like:

- Dynamic 2D arrays
- Modifying a pointer inside a function
- Linked lists and trees
- Command-line arguments

## 4. `functions.cpp` - Pointers with Functions

This file compares pass by value and pass by pointer.

### Pass by Value

```cpp
void change(int x) {
    x = 20;
}
```

When you call:

```cpp
int a = 10;
change(a);
```

The function receives a copy of `a`.

Visual:

```text
Before function call:

a = 10

Inside function:

x = 10   // copy of a
x = 20   // only copy changes

After function call:

a = 10   // original remains same
```

### Pass by Pointer

```cpp
void changeByPtr(int *ptr) {
    *ptr = 30;
}
```

When you call:

```cpp
int b = 10;
changeByPtr(&b);
```

The function receives the address of `b`.

Visual:

```text
b lives at address 0x100.

changeByPtr(&b)

ptr = 0x100
*ptr = 30

This changes the value at address 0x100.
So b becomes 30.
```

### Key Learning

Pass by value cannot change the original variable.

Pass by pointer can change the original variable because the function works with the original variable's address.

## 5. `memory_allocation.cpp` - Dynamic Memory Allocation

This file introduces memory created at runtime using `new` and removed using `delete`.

Code idea:

```cpp
int *p = new int;
*p = 10;
cout << *p;
delete p;
```

Normal variables are often created automatically:

```cpp
int a = 10;
```

Dynamic variables are created manually:

```cpp
int *p = new int;
```

Visual:

```text
Stack memory:

p stores address 0x500

Heap memory:

Address       Value
-------       -----
0x500         10
```

`new int` creates memory on the heap.

`delete p` frees that memory.

### Important Warning: Dangling Pointer

The file contains this example:

```cpp
int *ptr = new int;
delete ptr;
*ptr = 5;
```

This is dangerous.

After `delete ptr`, the memory is no longer valid. But `ptr` still stores the old address. Such a pointer is called a dangling pointer.

Better:

```cpp
int *ptr = new int;
delete ptr;
ptr = nullptr;
```

Then you can check:

```cpp
if (ptr != nullptr) {
    *ptr = 5;
}
```

### Wild Pointer

A wild pointer is an uninitialized pointer.

Dangerous:

```cpp
int *p;
*p = 10; // undefined behavior
```

Safe:

```cpp
int *p = nullptr;
```

### Void Pointer

A `void *` is a generic pointer. It can store the address of any data type, but you must cast it before dereferencing.

Example:

```cpp
int a = 10;
void *ptr = &a;

cout << *(static_cast<int *>(ptr));
```

### Key Learning

Every `new` should have a matching `delete`.

Never use a pointer after deleting it.

Set deleted pointers to `nullptr`.

## 6. `practice_problems/swap_two_num.cpp` - Practice Problem

This file is currently incomplete. It looks like it is meant for a pointer-based swap problem.

Goal:

```text
Input or define two numbers.
Swap their values using pointers.
Print values before and after swapping.
```

Example solution:

```cpp
#include <iostream>
using namespace std;

void swapUsingPointers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swapUsingPointers(&x, &y);

    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}
```

Visual:

```text
Before:

x = 10
y = 20

Function receives:

a = address of x
b = address of y

Inside function:

temp = *a  // temp = 10
*a = *b    // x = 20
*b = temp  // y = 10

After:

x = 20
y = 10
```

## Pointer Types

### Integer Pointer

```cpp
int a = 10;
int *p = &a;
```

### Float Pointer

```cpp
float price = 99.5;
float *p = &price;
```

### Character Pointer

```cpp
char ch = 'A';
char *p = &ch;
```

### Double Pointer

```cpp
int a = 10;
int *p = &a;
int **pp = &p;
```

### Null Pointer

```cpp
int *p = nullptr;
```

Use `nullptr` when a pointer does not point to anything.

## Common Pointer Mistakes

### 1. Dereferencing an Uninitialized Pointer

Wrong:

```cpp
int *p;
cout << *p;
```

Correct:

```cpp
int a = 10;
int *p = &a;
cout << *p;
```

### 2. Using a Pointer After `delete`

Wrong:

```cpp
int *p = new int;
delete p;
*p = 20;
```

Correct:

```cpp
int *p = new int;
delete p;
p = nullptr;
```

### 3. Forgetting to Delete Dynamic Memory

Wrong:

```cpp
int *p = new int;
*p = 10;
```

Correct:

```cpp
int *p = new int;
*p = 10;
delete p;
p = nullptr;
```

### 4. Confusing `ptr` and `*ptr`

```cpp
cout << ptr;  // address
cout << *ptr; // value at that address
```

### 5. Confusing `&ptr` and `ptr`

```cpp
cout << ptr;  // address stored inside pointer
cout << &ptr; // address of pointer variable itself
```

## Stack vs Heap

### Stack

Used for normal local variables.

```cpp
int a = 10;
```

Stack memory is managed automatically.

### Heap

Used for dynamic memory.

```cpp
int *p = new int;
```

Heap memory must be managed manually using `delete`.

Visual:

```text
Stack:

a = 10
p = 0x500

Heap:

0x500 -> dynamically created int
```

## Pointer Summary Table

| Code | Meaning |
|---|---|
| `int a = 10;` | Create an integer variable |
| `int *p;` | Create a pointer to int |
| `p = &a;` | Store address of `a` in `p` |
| `*p` | Access value stored at address inside `p` |
| `&p` | Address of pointer variable `p` |
| `int **pp = &p;` | Pointer to pointer |
| `new int` | Create dynamic integer on heap |
| `delete p` | Free dynamic memory |
| `nullptr` | Pointer points to nothing |

## Best Practices

Always initialize pointers:

```cpp
int *p = nullptr;
```

Always check before dereferencing if a pointer may be null:

```cpp
if (p != nullptr) {
    cout << *p;
}
```

After deleting dynamic memory, set the pointer to `nullptr`:

```cpp
delete p;
p = nullptr;
```

Prefer modern C++ containers and smart pointers in real projects:

```cpp
#include <memory>

unique_ptr<int> p = make_unique<int>(10);
```

For learning data structures, raw pointers are still important because they help you understand memory, linked lists, trees, graphs, dynamic arrays, and recursion.

## Suggested Learning Order

1. Read and run `basic.cpp`.
2. Change the value of `a` and observe `*ptr`.
3. Read and run `arithmetic.cpp`.
4. Print `*(ptr + 0)`, `*(ptr + 1)`, and `*(ptr + 2)`.
5. Read and run `dblpointer.cpp`.
6. Draw `pp -> p -> a` on paper.
7. Read and run `functions.cpp`.
8. Compare pass by value with pass by pointer.
9. Read `memory_allocation.cpp`.
10. Understand why using a pointer after `delete` is dangerous.
11. Complete `practice_problems/swap_two_num.cpp`.

## Practice Problems

### Problem 1: Print Value and Address

Create an integer variable and a pointer. Print:

- Value of variable
- Address of variable
- Value stored in pointer
- Value pointed to by pointer
- Address of pointer itself

### Problem 2: Change Value Using Pointer

Create a variable `num = 50`. Use a pointer to change it to `100`.

### Problem 3: Array Traversal Using Pointer

Create:

```cpp
int arr[5] = {1, 2, 3, 4, 5};
```

Print all elements using only pointer arithmetic.

### Problem 4: Swap Two Numbers

Write a function:

```cpp
void swapUsingPointers(int *a, int *b);
```

Use it to swap two integers.

### Problem 5: Dynamic Integer

Create an integer using `new`, assign a value, print it, then delete it safely.

### Problem 6: Dynamic Array

Create an array using dynamic memory:

```cpp
int *arr = new int[5];
```

Fill it, print it, then free it:

```cpp
delete[] arr;
arr = nullptr;
```

## Final Mental Model

Think of memory as numbered boxes.

```text
Address       Value
-------       -----
1000          25
1004          1000
```

If:

```cpp
int a = 25;
int *ptr = &a;
```

Then:

```text
a is a box containing 25.
ptr is another box containing the address of a.
*ptr means follow the address and read or change the value there.
```

That is the core idea of pointers.

