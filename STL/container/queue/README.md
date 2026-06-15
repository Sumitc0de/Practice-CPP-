# C++ STL Queue Learning Guide

This guide explains the C++ STL `queue` container adapter in a simple beginner-friendly way. It is useful for DSA learning, college practicals, placement preparation, and interview revision.

## Repository Structure

```text
queue/
|-- basic.cpp
|-- README.md
```

## 1. Introduction

A queue is a linear data structure that follows FIFO order.

```text
FIFO = First In, First Out
```

This means the element inserted first is removed first.

Think of a line at a ticket counter:

```text
The person who comes first gets served first.
New people join from the back.
People leave from the front.
```

In C++, STL provides a ready-made queue through:

```cpp
#include <queue>
```

## 2. Queue Visualization

After pushing `10`, `20`, and `30`:

```text
Front                  Back
 10   ->   20   ->   30
```

Here:

- `10` is at the front because it was inserted first.
- `30` is at the back because it was inserted last.

If we call `pop()`, then `10` is removed:

```text
Front           Back
 20   ->   30
```

## 3. Basic Syntax

```cpp
queue<int> q;
```

Explanation:

| Part | Meaning |
|---|---|
| `queue` | STL container adapter |
| `int` | Type of data stored |
| `q` | Name of the queue variable |

Complete basic program:

```cpp
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.front();

    return 0;
}
```

Output:

```text
10
```

## 4. Main STL Queue Functions

The most important STL queue functions are:

```cpp
push()
pop()
front()
back()
size()
empty()
```

### `push()`

`push()` inserts an element at the back of the queue.

```cpp
q.push(10);
q.push(20);
q.push(30);
```

Queue state:

```text
Front                  Back
 10   ->   20   ->   30
```

Time complexity:

```text
O(1)
```

### `pop()`

`pop()` removes the front element of the queue. It does not return the removed value.

```cpp
q.pop();
```

Important:

```cpp
if (!q.empty()) {
    q.pop();
}
```

Always check whether the queue is empty before calling `pop()`.

Time complexity:

```text
O(1)
```

### `front()`

`front()` returns the first element of the queue.

```cpp
cout << q.front();
```

For this queue:

```text
Front                  Back
 10   ->   20   ->   30
```

Output:

```text
10
```

Important:

```cpp
if (!q.empty()) {
    cout << q.front();
}
```

Never call `front()` on an empty queue.

### `back()`

`back()` returns the last element of the queue.

```cpp
cout << q.back();
```

For this queue:

```text
Front                  Back
 10   ->   20   ->   30
```

Output:

```text
30
```

Never call `back()` on an empty queue.

### `size()`

`size()` returns the number of elements in the queue.

```cpp
cout << q.size();
```

### `empty()`

`empty()` returns:

- `true` if the queue has no elements
- `false` if the queue has at least one element

```cpp
if (q.empty()) {
    cout << "Queue is empty";
}
```

## 5. Dry Run

Operations:

```text
push(10)
push(20)
push(30)
pop()
```

Step-by-step:

```text
Step 1:
Front/Back
10

Step 2:
Front        Back
10    ->     20

Step 3:
Front               Back
10    ->    20  ->  30

Step 4:
After pop(), 10 is removed.

Front        Back
20    ->     30
```

## 6. Internal Working

STL `queue` is a container adapter.

That means it gives a queue-like interface on top of another container.

By default:

```cpp
queue<int> q;
```

internally uses:

```text
deque
```

The queue restricts access so that:

- insertion happens at the back
- deletion happens from the front
- direct indexing is not allowed
- direct traversal using iterators is not available

## 7. Queue vs Stack

| Feature | Queue | Stack |
|---|---|---|
| Principle | FIFO | LIFO |
| Full form | First In, First Out | Last In, First Out |
| Insertion | Back | Top |
| Deletion | Front | Top |
| Front access | `front()` | Not available |
| Top access | Not available | `top()` |
| Example | Ticket line | Plates stacked on each other |

## 8. Common Mistakes

### Calling `front()` on an Empty Queue

Wrong:

```cpp
queue<int> q;
cout << q.front();
```

Correct:

```cpp
if (!q.empty()) {
    cout << q.front();
}
```

### Calling `pop()` on an Empty Queue

Wrong:

```cpp
queue<int> q;
q.pop();
```

Correct:

```cpp
if (!q.empty()) {
    q.pop();
}
```

### Expecting `pop()` to Return a Value

Wrong:

```cpp
int x = q.pop();
```

Correct:

```cpp
int x = q.front();
q.pop();
```

### Trying to Use Indexing

Wrong:

```cpp
cout << q[0];
```

Correct:

```cpp
cout << q.front();
```

## 9. Applications of Queue

Queues are used in many DSA and real-world problems:

| Application | Why Queue Helps |
|---|---|
| BFS traversal | Visit nodes level by level |
| CPU scheduling | Process tasks in arrival order |
| Printer queue | Print documents in request order |
| Ticket booking | Serve first customer first |
| Call center system | Handle calls in waiting order |
| Buffer management | Process data in arrival order |
| Level order traversal | Visit tree nodes level by level |

## 10. Complexity Analysis

| Operation | Description | Complexity |
|---|---|---|
| `push()` | Insert element at back | `O(1)` |
| `pop()` | Remove front element | `O(1)` |
| `front()` | Access first element | `O(1)` |
| `back()` | Access last element | `O(1)` |
| `size()` | Count elements | `O(1)` |
| `empty()` | Check whether queue is empty | `O(1)` |

## 11. One-Page Cheat Sheet

```cpp
#include <iostream>
#include <queue>
using namespace std;

queue<int> q;

q.push(10);      // Insert at back
q.push(20);      // Insert at back

q.front();       // First element
q.back();        // Last element
q.pop();         // Remove first element
q.size();        // Number of elements
q.empty();       // Check if empty
```

Key points:

- Queue follows FIFO.
- Insertion happens at the back.
- Deletion happens from the front.
- `front()` gives the first element.
- `back()` gives the last element.
- `pop()` removes the front element but does not return it.
- Check `empty()` before `front()`, `back()`, and `pop()`.
- STL queue does not support indexing.
- STL queue does not support direct traversal.

## 12. Practice Problems

### Beginner Problems

| No. | Problem | Concept |
|---|---|---|
| 1 | Implement basic queue operations | `push`, `pop`, `front` |
| 2 | Print all queue elements | Loop with `front()` and `pop()` |
| 3 | Count queue elements | `size()` |
| 4 | Check if queue is empty | `empty()` |
| 5 | Store student roll numbers | Basic queue usage |

### Intermediate Problems

| No. | Problem | Concept |
|---|---|---|
| 1 | Generate binary numbers from 1 to N | Queue pattern |
| 2 | First non-repeating character in stream | Queue + frequency |
| 3 | Reverse a queue | Queue + stack or recursion |
| 4 | Interleave first and second half of queue | Queue manipulation |
| 5 | Implement stack using queues | Queue adapter logic |

### Important DSA Problems

| No. | Problem | Concept |
|---|---|---|
| 1 | BFS of graph | Queue traversal |
| 2 | Level order traversal of binary tree | Queue traversal |
| 3 | Rotten oranges | Multi-source BFS |
| 4 | Number of islands | BFS on grid |
| 5 | Shortest path in unweighted graph | BFS |

## 13. Interview Questions

### 1. What is a queue?

A queue is a linear data structure where insertion happens at the back and deletion happens from the front.

### 2. What is FIFO?

FIFO means First In, First Out. The element inserted first is removed first.

### 3. Which header file is used for STL queue?

```cpp
#include <queue>
```

### 4. Which function inserts an element in a queue?

`push()` inserts an element at the back.

### 5. Which function removes an element from a queue?

`pop()` removes the front element.

### 6. Does `pop()` return the removed element?

No. Use `front()` before `pop()` if you need the value.

### 7. Which function gives the first element?

`front()` gives the first element.

### 8. Which function gives the last element?

`back()` gives the last element.

### 9. Can STL queue be traversed directly?

No. STL queue does not provide iterators.

### 10. What is the default underlying container of STL queue?

The default underlying container is `deque`.

## 14. Summary

Queue is one of the most important data structures in DSA.

Final takeaways:

- Queue follows FIFO order.
- Use `#include <queue>`.
- Use `push()` to insert elements.
- Use `pop()` to remove the front element.
- Use `front()` to access the first element.
- Use `back()` to access the last element.
- Use `size()` to count elements.
- Use `empty()` to check whether the queue is empty.
- Queue is widely used in BFS, scheduling, buffering, and level order traversal.
