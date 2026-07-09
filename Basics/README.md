# C++ Basics - Complete Beginner Guide

This folder contains beginner-level C++ programs for learning the foundation before moving into arrays, strings, pointers, recursion, STL, and DSA problems.

The goal of this README is to explain the basics clearly: input/output, variables, operators, conditions, loops, functions, pass by value, pass by reference, and common warmup problems.

## Folder Structure

```text
Basics/
|-- Lvl_1_warmup/
    |-- hello.cpp
    |-- user_input.cpp
    |-- avg_3_num.cpp
    |-- largest_2_num.cpp
    |-- largest_3_num.cpp
    |-- div_by_5_11.cpp
    |-- c_vowel_constant.cpp
    |-- leap_year.cpp
    |-- numbers_sum.cpp
    |-- swap_2_var.cpp
    |-- loops/
        |-- 1_to_N_print.cpp
        |-- 1_to_n_even.cpp
        |-- count_digit_n.cpp
        |-- factorial.cpp
        |-- fibnonacci.cpp
        |-- multiplication.cpp
        |-- palindrome.cpp
        |-- reverse_num.cpp
        |-- sum_of_digits.cpp
        |-- sum_to_n.cpp
```

## How to Compile and Run

From the project root:

```bash
g++ Basics/Lvl_1_warmup/hello.cpp -o Basics/Lvl_1_warmup/hello
./Basics/Lvl_1_warmup/hello
```

On Windows PowerShell:

```powershell
g++ .\Basics\Lvl_1_warmup\hello.cpp -o .\Basics\Lvl_1_warmup\hello.exe
.\Basics\Lvl_1_warmup\hello.exe
```

Replace `hello.cpp` with any other file name to run that example.

## Basic C++ Program Structure

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World";
    return 0;
}
```

Meaning:

| Code | Meaning |
|---|---|
| `#include <iostream>` | Adds input/output support |
| `using namespace std;` | Allows writing `cout` instead of `std::cout` |
| `int main()` | Starting point of the program |
| `{ }` | Block of code |
| `cout` | Prints output |
| `return 0;` | Ends the program successfully |

## Input and Output

### Output using `cout`

```cpp
cout << "Hello";
cout << "Age: " << 20;
```

Use `endl` or `\n` for a new line:

```cpp
cout << "First line" << endl;
cout << "Second line\n";
```

### Input using `cin`

```cpp
int age;
cin >> age;
```

Example:

```cpp
string name;
cout << "Enter your name: ";
cin >> name;
cout << "Your name is: " << name;
```

Note: `cin >> name` reads only one word. For full names with spaces, use:

```cpp
getline(cin, name);
```

## Variables and Data Types

A variable stores data in memory.

```cpp
int age = 20;
float price = 99.5;
double marks = 98.75;
char grade = 'A';
bool isPass = true;
string name = "Rahul";
```

Common data types:

| Type | Stores | Example |
|---|---|---|
| `int` | Whole numbers | `10`, `-5` |
| `float` | Decimal numbers | `3.14f` |
| `double` | Larger decimal numbers | `99.75` |
| `char` | Single character | `'A'` |
| `bool` | True or false | `true` |
| `string` | Text | `"hello"` |

## Operators

Operators are symbols that perform operations on values.

### Arithmetic Operators

| Operator | Meaning | Example |
|---|---|---|
| `+` | Addition | `a + b` |
| `-` | Subtraction | `a - b` |
| `*` | Multiplication | `a * b` |
| `/` | Division | `a / b` |
| `%` | Remainder | `a % b` |

Example:

```cpp
int a = 10, b = 3;

cout << a + b; // 13
cout << a / b; // 3 because both are int
cout << a % b; // 1
```

### Relational Operators

These compare values and return `true` or `false`.

| Operator | Meaning |
|---|---|
| `==` | Equal to |
| `!=` | Not equal to |
| `>` | Greater than |
| `<` | Less than |
| `>=` | Greater than or equal to |
| `<=` | Less than or equal to |

Example:

```cpp
int age = 18;

cout << (age >= 18); // 1, meaning true
```

### Logical Operators

| Operator | Meaning | Example |
|---|---|---|
| `&&` | AND | `age >= 18 && age <= 60` |
| `||` | OR | `marks >= 90 || grade == 'A'` |
| `!` | NOT | `!isPass` |

Example:

```cpp
int n = 55;

if (n % 5 == 0 && n % 11 == 0) {
    cout << "Divisible by both";
}
```

### Assignment Operators

| Operator | Meaning |
|---|---|
| `=` | Assign value |
| `+=` | Add and assign |
| `-=` | Subtract and assign |
| `*=` | Multiply and assign |
| `/=` | Divide and assign |
| `%=` | Remainder and assign |

Example:

```cpp
int x = 10;
x += 5; // x = 15
x *= 2; // x = 30
```

### Increment and Decrement

```cpp
int i = 5;
i++; // 6
i--; // 5
```

Commonly used in loops:

```cpp
for (int i = 1; i <= 5; i++) {
    cout << i << endl;
}
```

## Conditional Statements

Conditionals let your program make decisions.

### `if`

```cpp
if (marks >= 33) {
    cout << "Pass";
}
```

### `if else`

```cpp
if (num % 2 == 0) {
    cout << "Even";
} else {
    cout << "Odd";
}
```

### `else if`

```cpp
if (a > b && a > c) {
    cout << "a is largest";
} else if (b > c) {
    cout << "b is largest";
} else {
    cout << "c is largest";
}
```

### `switch`

Use `switch` when you compare one value with many fixed choices.

```cpp
int day = 2;

switch (day) {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    default:
        cout << "Invalid day";
}
```

## Loops

Loops repeat code.

### `for` Loop

Use when you know how many times to repeat.

```cpp
for (int i = 1; i <= 5; i++) {
    cout << i << endl;
}
```

### `while` Loop

Use when repetition depends on a condition.

```cpp
int i = 1;

while (i <= 5) {
    cout << i << endl;
    i++;
}
```

### `do while` Loop

Runs at least once.

```cpp
int i = 1;

do {
    cout << i << endl;
    i++;
} while (i <= 5);
```

## Common Loop Patterns

### Sum from `1` to `n`

```cpp
int n = 5;
int sum = 0;

for (int i = 1; i <= n; i++) {
    sum += i;
}

cout << sum; // 15
```

### Factorial

```cpp
int n = 5;
int fact = 1;

for (int i = 1; i <= n; i++) {
    fact *= i;
}

cout << fact; // 120
```

### Count Digits

```cpp
int n = 12345;
int count = 0;

while (n > 0) {
    count++;
    n /= 10;
}

cout << count; // 5
```

### Reverse a Number

```cpp
int n = 1234;
int rev = 0;

while (n > 0) {
    int digit = n % 10;
    rev = rev * 10 + digit;
    n /= 10;
}

cout << rev; // 4321
```

## Functions

A function is a reusable block of code.

```cpp
returnType functionName(parameters) {
    // code
}
```

Example:

```cpp
int add(int a, int b) {
    return a + b;
}

int main() {
    cout << add(10, 20);
    return 0;
}
```

Parts of a function:

| Part | Example | Meaning |
|---|---|---|
| Return type | `int` | Function returns an integer |
| Function name | `add` | Name used to call it |
| Parameters | `int a, int b` | Input values |
| Return statement | `return a + b;` | Sends result back |

## Pass by Value

In pass by value, the function receives a copy of the original variable.

```cpp
void change(int x) {
    x = 100;
}

int main() {
    int a = 10;
    change(a);
    cout << a; // 10
}
```

Mental model:

```text
a = 10
change(a) sends a copy
x becomes 100
original a stays 10
```

Use pass by value when the function should not change the original variable.

## Pass by Reference

In pass by reference, the function receives another name for the original variable.

```cpp
void change(int &x) {
    x = 100;
}

int main() {
    int a = 10;
    change(a);
    cout << a; // 100
}
```

Mental model:

```text
x is not a new copy.
x refers to the original variable a.
Changing x changes a.
```

Use pass by reference when the function should modify the original variable.

## Swap Using Pass by Reference

```cpp
void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    swapNumbers(x, y);

    cout << x << " " << y; // 20 10
}
```

## Pass by Value vs Pass by Reference

| Feature | Pass by Value | Pass by Reference |
|---|---|---|
| What is passed? | Copy of variable | Original variable reference |
| Changes original? | No | Yes |
| Syntax in function | `int x` | `int &x` |
| Safer for beginners? | Usually yes | Use carefully |
| Useful for | Calculations | Swapping, updating values |

## Arrays

An array stores multiple values of the same type.

```cpp
int marks[5] = {90, 80, 70, 85, 95};
```

Access elements using index:

```cpp
cout << marks[0]; // first element
cout << marks[4]; // fifth element
```

Loop through an array:

```cpp
for (int i = 0; i < 5; i++) {
    cout << marks[i] << endl;
}
```

Important: array indexing starts from `0`.

## Strings

A `string` stores text.

```cpp
string name = "Aman";
cout << name;
```

Useful operations:

```cpp
cout << name.length();
cout << name[0];
```

Input with spaces:

```cpp
string fullName;
getline(cin, fullName);
```

## Type Casting

Type casting converts one data type into another.

```cpp
int a = 5;
int b = 2;

cout << a / b;           // 2
cout << (double)a / b;   // 2.5
```

Use casting when you need decimal output from integer values.

## Important Beginner Mistakes

### 1. Using `=` instead of `==`

Wrong:

```cpp
if (a = 10) {
    cout << "Equal";
}
```

Correct:

```cpp
if (a == 10) {
    cout << "Equal";
}
```

### 2. Integer Division Surprise

```cpp
cout << 5 / 2; // 2
```

For decimal result:

```cpp
cout << 5.0 / 2; // 2.5
```

### 3. Forgetting to Update Loop Variable

Wrong:

```cpp
int i = 1;
while (i <= 5) {
    cout << i;
}
```

Correct:

```cpp
int i = 1;
while (i <= 5) {
    cout << i;
    i++;
}
```

### 4. Accessing Array Out of Bounds

Wrong:

```cpp
int arr[3] = {1, 2, 3};
cout << arr[3];
```

Correct:

```cpp
cout << arr[2]; // last valid index
```

## Suggested Learning Order

1. Run `hello.cpp`.
2. Run `user_input.cpp`.
3. Practice variables and operators using `avg_3_num.cpp` and `numbers_sum.cpp`.
4. Practice conditionals using `largest_2_num.cpp`, `largest_3_num.cpp`, `div_by_5_11.cpp`, `c_vowel_constant.cpp`, and `leap_year.cpp`.
5. Practice simple loops using `1_to_N_print.cpp` and `1_to_n_even.cpp`.
6. Practice loop logic using `sum_to_n.cpp`, `factorial.cpp`, and `multiplication.cpp`.
7. Practice digit problems using `count_digit_n.cpp`, `sum_of_digits.cpp`, `reverse_num.cpp`, and `palindrome.cpp`.
8. Practice sequences using `fibnonacci.cpp`.
9. Learn functions and rewrite some warmup problems using functions.
10. Learn pass by value and pass by reference, then rewrite `swap_2_var.cpp` using references.

## Practice Problems

### Problem 1: Basic Input Output

Take name, age, and city as input. Print them in a clean sentence.

### Problem 2: Simple Calculator

Take two numbers and an operator character: `+`, `-`, `*`, `/`, `%`. Print the result.

### Problem 3: Largest of Three Numbers

Take three numbers and print the largest.

### Problem 4: Even Numbers from `1` to `n`

Take `n` as input and print all even numbers from `1` to `n`.

### Problem 5: Sum of Digits

Take a number and print the sum of its digits.

Example:

```text
Input: 1234
Output: 10
```

### Problem 6: Palindrome Number

Take a number and check whether it is a palindrome.

Example:

```text
121 is palindrome
123 is not palindrome
```

### Problem 7: Function for Factorial

Write a function:

```cpp
int factorial(int n);
```

Use it to print the factorial of a number.

### Problem 8: Swap by Reference

Write a function:

```cpp
void swapNumbers(int &a, int &b);
```

Use it to swap two numbers.

## Revision Checklist

- [ ] I can write a basic C++ program from memory.
- [ ] I can use `cin` and `cout`.
- [ ] I know the difference between `int`, `float`, `double`, `char`, `bool`, and `string`.
- [ ] I can use arithmetic, relational, logical, and assignment operators.
- [ ] I can write `if`, `else if`, `else`, and `switch`.
- [ ] I can write `for`, `while`, and `do while` loops.
- [ ] I can solve sum, factorial, reverse number, and digit-count problems.
- [ ] I can create and call functions.
- [ ] I can explain pass by value.
- [ ] I can explain pass by reference.
- [ ] I can write a swap function using reference variables.

## Final Mental Model

C++ basics are built from a few simple blocks:

```text
data       -> variables and data types
actions    -> operators
decisions  -> if else and switch
repetition -> loops
reuse      -> functions
memory     -> value, reference, and later pointers
```

Once these basics feel comfortable, arrays, strings, pointers, recursion, STL, and DSA become much easier to understand.
