# C++ STL Stack Mastery Guide

This repository is a complete beginner-to-advanced guide for learning the C++ STL `stack` container adapter. It is designed for college students, DSA learners, placement preparation, interview revision, and GitHub portfolio building.

## Repository Structure

```text
Stack/
|-- basic.cpp
|-- README.md
```

## 1. Introduction

A stack is a linear data structure that stores elements in a special order called LIFO.

```text
LIFO = Last In, First Out
```

This means the last element inserted into the stack is the first element removed from it.

Think of a stack of plates:

```text
You put a new plate on the top.
You remove a plate from the top.
You cannot remove a plate from the middle directly.
```

In C++, STL provides a ready-made stack through:

```cpp
#include <stack>
```

Stack is important because many DSA and real-world problems naturally require processing the most recent item first.

## 2. Real World Examples

| Example | Stack Behavior |
|---|---|
| Browser history | The last visited page is opened first when pressing Back |
| Undo feature | The most recent action is undone first |
| Call stack | The most recent function call finishes first |
| Recursion | Function calls are stored internally using stack behavior |
| Expression evaluation | Operators and operands are processed using stacks |
| Backtracking | The most recent decision is reversed first |
| Compiler parsing | Brackets, syntax, and expressions can be checked using stacks |

## 3. Stack Visualization

After pushing `10`, `20`, and `30`:

```text
30 <- Top
20
10
```

Here, `30` is at the top because it was inserted last.

If we call `pop()`, then `30` is removed:

```text
20 <- Top
10
```

## 4. Stack Syntax

```cpp
stack<int> st;
```

Explanation:

| Part | Meaning |
|---|---|
| `stack` | STL container adapter |
| `int` | Type of data stored in the stack |
| `st` | Name of the stack variable |

Complete basic program:

```cpp
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top();

    return 0;
}
```

Output:

```text
30
```

## 5. STL Stack Functions

The main STL stack functions are:

```cpp
push()
pop()
top()
size()
empty()
```

### `push()`

Syntax:

```cpp
st.push(value);
```

Explanation:

`push()` inserts an element at the top of the stack.

Example:

```cpp
stack<int> st;

st.push(10);
st.push(20);
st.push(30);
```

Stack state:

```text
30 <- Top
20
10
```

Complexity:

```text
O(1)
```

### `pop()`

Syntax:

```cpp
st.pop();
```

Explanation:

`pop()` removes the top element from the stack. It does not return the removed value.

Example:

```cpp
stack<int> st;

st.push(10);
st.push(20);
st.push(30);

st.pop();
```

Stack after `pop()`:

```text
20 <- Top
10
```

Complexity:

```text
O(1)
```

Important:

```cpp
if (!st.empty()) {
    st.pop();
}
```

Always check whether the stack is empty before calling `pop()`.

### `top()`

Syntax:

```cpp
st.top();
```

Explanation:

`top()` returns the top element of the stack.

Example:

```cpp
stack<int> st;

st.push(10);
st.push(20);
st.push(30);

cout << st.top();
```

Output:

```text
30
```

Complexity:

```text
O(1)
```

Important:

```cpp
if (!st.empty()) {
    cout << st.top();
}
```

Never call `top()` on an empty stack.

### `size()`

Syntax:

```cpp
st.size();
```

Explanation:

`size()` returns the number of elements currently present in the stack.

Example:

```cpp
stack<int> st;

st.push(10);
st.push(20);

cout << st.size();
```

Output:

```text
2
```

Complexity:

```text
O(1)
```

### `empty()`

Syntax:

```cpp
st.empty();
```

Explanation:

`empty()` returns:

- `true` if the stack has no elements
- `false` if the stack has at least one element

Example:

```cpp
stack<int> st;

if (st.empty()) {
    cout << "Stack is empty";
}
```

Complexity:

```text
O(1)
```

## 6. Dry Runs

### Dry Run 1: Push Operations

Operations:

```text
Push 10
Push 20
Push 30
```

Step-by-step:

```text
Step 1:
10 <- Top

Step 2:
20 <- Top
10

Step 3:
30 <- Top
20
10
```

Final stack:

```text
30 <- Top
20
10
```

### Dry Run 2: Pop Operation

Initial stack:

```text
30 <- Top
20
10
```

Operation:

```text
pop()
```

Stack after pop:

```text
20 <- Top
10
```

### Dry Run 3: Top Operation

Stack:

```text
30 <- Top
20
10
```

Operation:

```cpp
st.top();
```

Result:

```text
30
```

## 7. Internal Working

STL `stack` is not a normal container. It is a container adapter.

That means it gives a stack-like interface on top of another container.

By default:

```cpp
stack<int> st;
```

internally uses:

```text
deque
```

So, conceptually:

```text
stack -> adapter
deque -> underlying container
```

The stack restricts access so that elements can only be added, removed, and read from the top.

### Memory Behavior

When values are pushed, they are stored in the underlying container.

The user does not directly manage memory. STL handles memory allocation and deallocation automatically.

## 8. Complexity Analysis

| Operation | Description | Complexity |
|---|---|---|
| `push()` | Insert element at top | `O(1)` |
| `pop()` | Remove top element | `O(1)` |
| `top()` | Access top element | `O(1)` |
| `size()` | Count elements | `O(1)` |
| `empty()` | Check whether stack is empty | `O(1)` |

## 9. Stack vs Queue

| Feature | Stack | Queue |
|---|---|---|
| Principle | LIFO | FIFO |
| Full form | Last In, First Out | First In, First Out |
| Insertion | Top | Rear |
| Deletion | Top | Front |
| Main functions | `push()`, `pop()`, `top()` | `push()`, `pop()`, `front()` |
| Example | Undo operation | Ticket line |
| Access pattern | Most recent first | Oldest first |

## 10. Interview Questions

### 1. What is a stack?

A stack is a linear data structure in which insertion and deletion happen from the same end, called the top.

### 2. What is LIFO?

LIFO means Last In, First Out. The element inserted last is removed first.

### 3. Which header file is required for STL stack?

```cpp
#include <stack>
```

### 4. How do you declare an integer stack?

```cpp
stack<int> st;
```

### 5. Which function inserts an element into a stack?

`push()` inserts an element at the top of the stack.

### 6. Which function removes an element from a stack?

`pop()` removes the top element.

### 7. Does `pop()` return the removed element?

No. `pop()` only removes the top element. Use `top()` before `pop()` if you need the value.

### 8. Which function gives the top element?

`top()` returns the top element.

### 9. Why is `top()` O(1)?

Because the stack keeps direct access to the top element.

### 10. What is the difference between stack and queue?

Stack follows LIFO. Queue follows FIFO.

### 11. Can a stack be traversed directly?

No. STL stack does not provide iterators.

### 12. How can you print all elements of a stack?

Create a copy and repeatedly print `top()` followed by `pop()`.

```cpp
stack<int> temp = st;

while (!temp.empty()) {
    cout << temp.top() << " ";
    temp.pop();
}
```

### 13. Can a stack access the middle element directly?

No. Stack only allows access to the top element.

### 14. What happens if `top()` is called on an empty stack?

It causes undefined behavior.

### 15. What happens if `pop()` is called on an empty stack?

It causes undefined behavior.

### 16. How do you check whether a stack is empty?

```cpp
st.empty();
```

### 17. How do you get the number of elements in a stack?

```cpp
st.size();
```

### 18. What is the default underlying container of STL stack?

The default underlying container is `deque`.

### 19. Is STL stack a container or container adapter?

It is a container adapter.

### 20. Why is stack useful in recursion?

Recursive function calls are stored in call stack order, where the most recent call returns first.

### 21. Which data structure is used for DFS?

DFS can be implemented using a stack.

### 22. Which data structure is used for balanced parentheses?

A stack is commonly used for balanced parentheses checking.

### 23. Can STL stack use vector internally?

Yes. A stack can use another suitable underlying container, such as `vector` or `deque`.

Example:

```cpp
stack<int, vector<int>> st;
```

### 24. Why is stack used for undo operations?

The most recent action should be undone first, which matches LIFO behavior.

### 25. Is random access allowed in stack?

No. Stack does not support random access.

### 26. Why is stack called a restricted data structure?

Because it only allows operations at one end: the top.

### 27. What is the time complexity of `push()`?

`push()` is `O(1)`.

### 28. What is the time complexity of `pop()`?

`pop()` is `O(1)`.

### 29. What is the time complexity of `empty()`?

`empty()` is `O(1)`.

### 30. What is the safest way to remove an element?

```cpp
if (!st.empty()) {
    st.pop();
}
```

## 11. Common Mistakes

### Mistake 1: Calling `top()` on an Empty Stack

Wrong:

```cpp
stack<int> st;
cout << st.top();
```

Correct:

```cpp
if (!st.empty()) {
    cout << st.top();
}
```

### Mistake 2: Calling `pop()` on an Empty Stack

Wrong:

```cpp
stack<int> st;
st.pop();
```

Correct:

```cpp
if (!st.empty()) {
    st.pop();
}
```

### Mistake 3: Expecting `pop()` to Return a Value

Wrong:

```cpp
int x = st.pop();
```

Correct:

```cpp
int x = st.top();
st.pop();
```

### Mistake 4: Trying to Access Elements Using Index

Wrong:

```cpp
cout << st[0];
```

Correct:

```cpp
cout << st.top();
```

### Mistake 5: Destroying the Original Stack While Printing

Printing by popping removes elements from the original stack.

Use a copy:

```cpp
stack<int> temp = st;
```

## 12. Applications

### DFS

Depth First Search can use a stack to explore the most recent unvisited node first.

### Recursion

Recursive calls are stored in a call stack. The latest function call completes first.

### Browser Navigation

Browser Back button behavior can be modeled using a stack of visited pages.

### Compiler Parsing

Stacks are used to check brackets, parse expressions, and validate syntax.

### Undo Systems

The latest action is stored on top and undone first.

### Expression Evaluation

Stacks are used in infix, postfix, and prefix expression evaluation.

### Backtracking

Stacks help reverse the most recent decision first.

## 13. Coding Problems

### Beginner Problems

| No. | Problem | Concept |
|---|---|---|
| 1 | Implement basic stack operations | `push`, `pop`, `top` |
| 2 | Print stack using a copy | Traversal logic |
| 3 | Reverse a string | Character stack |
| 4 | Check empty stack before pop | Safety checks |
| 5 | Count stack elements | `size()` |
| 6 | Remove all elements from stack | Loop with `pop()` |
| 7 | Print top after every push | LIFO observation |
| 8 | Reverse numbers using stack | Number ordering |
| 9 | Store names in stack | Generic stack usage |
| 10 | Compare two stack sizes | `size()` practice |

### Intermediate Problems

| No. | Problem | Concept |
|---|---|---|
| 1 | Balanced parentheses | Bracket matching |
| 2 | Valid parentheses with multiple bracket types | Stack matching |
| 3 | Remove adjacent duplicates | Top comparison |
| 4 | Next greater element | Monotonic stack |
| 5 | Previous greater element | Monotonic stack |
| 6 | Next smaller element | Monotonic stack |
| 7 | Stock span problem | Index stack |
| 8 | Min stack | Auxiliary stack |
| 9 | Sort a stack | Recursion or helper stack |
| 10 | Delete middle element of stack | Recursion |

### Advanced Problems

| No. | Problem | Concept |
|---|---|---|
| 1 | Largest rectangle in histogram | Monotonic stack |
| 2 | Maximal rectangle in binary matrix | Histogram + stack |
| 3 | Trapping rain water using stack | Index stack |
| 4 | Infix to postfix conversion | Operator stack |
| 5 | Postfix expression evaluation | Operand stack |
| 6 | Prefix expression evaluation | Operand stack |
| 7 | Asteroid collision | Simulation stack |
| 8 | Decode string | Nested stack |
| 9 | Basic calculator | Expression parsing |
| 10 | Remove K digits | Greedy monotonic stack |

## 14. Revision Notes

### One-Page Cheat Sheet

```cpp
#include <iostream>
#include <stack>
using namespace std;

stack<int> st;

st.push(10);     // Insert at top
st.push(20);     // Insert at top

st.top();        // Get top element
st.pop();        // Remove top element
st.size();       // Number of elements
st.empty();      // Check if empty
```

Key points:

- Stack follows LIFO.
- Insertion happens at the top.
- Deletion happens at the top.
- Only the top element is directly accessible.
- STL stack does not support direct traversal.
- STL stack does not support indexing.
- `pop()` does not return a value.
- Check `empty()` before `top()` and `pop()`.
- Default underlying container is `deque`.
- Stack is useful for recursion, DFS, parsing, undo, and monotonic stack problems.

Complexity:

| Operation | Complexity |
|---|---|
| `push()` | `O(1)` |
| `pop()` | `O(1)` |
| `top()` | `O(1)` |
| `size()` | `O(1)` |
| `empty()` | `O(1)` |

## 15. Summary

Stack is one of the most important data structures in DSA.

Final takeaways:

- Stack follows the LIFO principle.
- STL stack is available through `#include <stack>`.
- Use `push()` to insert elements.
- Use `pop()` to remove the top element.
- Use `top()` to access the top element.
- Use `size()` to count elements.
- Use `empty()` to check whether the stack has no elements.
- Direct traversal and random access are not supported.
- Use a temporary copy when you want to print a stack.
- Stack is heavily used in interviews, recursion, DFS, parsing, expression evaluation, and monotonic stack problems.

After mastering this guide and practicing the listed problems, you will have a strong foundation in C++ STL Stack for DSA and interview preparation.
