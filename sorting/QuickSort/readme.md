### 📌 What is Quick Sort?
--------------------------------
Quick Sort is a divide and conquer sorting algorithm.
It works by choosing a pivot element, partitioning the array into two parts (smaller & greater than pivot), and recursively sorting them.

### 🔧 Key Idea
---------------------------------

1. Pick a pivot element.

2. Rearrange (partition) so that:

* Left side → elements smaller than pivot

* Right side → elements greater than pivot

3. Recursively apply Quick Sort on left and right parts.

4. Combine results → sorted array.



### ✍️ Algorithm – Quick Sort (Pivot = First Element)
--------------------------------------------------------

🔁 QuickSort(A, low, high)

Step 1: Start

Step 2: If low < high
  → Call Partition(A, low, high)
  → Let p = partition index

Step 3: Recursively apply QuickSort
  → QuickSort(A, low, p – 1)
  → QuickSort(A, p + 1, high)

Step 4: Stop

### ✍️ Algorithm – Partition (Pivot = First Element)

🔁 Partition(A, low, high)

Step 1: pivot = A[low]

Step 2: i = low + 1, j = high

Step 3: Repeat while i ≤ j
  → While i ≤ high AND A[i] ≤ pivot → i = i + 1
  → While j ≥ low AND A[j] > pivot → j = j – 1

Step 4: If i < j
  → Swap(A[i], A[j])

Step 5: After loop ends
  → Swap(A[low], A[j])

Step 6: Return j → pivot index



### 🧠 Dry Run Example (with Passes)
---------------------------------

Input: A = [38, 27, 43, 3, 9, 82, 10]

Pass 1: Pivot = 10
Partition → [3, 9, 10] | [38, 27, 43, 82]

Pass 2 (Left: [3, 9, 10])
Pivot = 10 → [3, 9] | [10]

Pass 3 (Left: [3, 9])
Pivot = 9 → [3] | [9]

✅ Left side sorted = [3, 9, 10]

Pass 4 (Right: [38, 27, 43, 82])
Pivot = 82 → [38, 27, 43] | [82]

Pass 5 (Subarray: [38, 27, 43])
Pivot = 43 → [38, 27] | [43]

Pass 6 (Subarray: [38, 27])
Pivot = 27 → [27] | [38]

✅ Right side sorted = [27, 38, 43, 82]

✅ Final Sorted Array:
[3, 9, 10, 27, 38, 43, 82]

### 📊 Time and Space Complexity
---------------------------------

| Case       | Time Complexity | Why?                                   |
| ---------- | --------------- | -------------------------------------- |
| Best Case  | O(n log n)      | Pivot splits array almost equally      |
| Average    | O(n log n)      | Balanced splits in most cases          |
| Worst Case | O(n²)           | Pivot always smallest/largest (sorted) |


* Space: O(log n) average (recursion stack)

* Worst Space: O(n)



### 📐 T(n) Derivation
---------------------------------

T(n) = T(k) + T(n-k-1) + O(n)

Best case → T(n) = 2T(n/2) + O(n) = O(n log n)

Worst case → T(n) = T(n-1) + O(n) = O(n²)


### ✅ Advantages of Quick Sort
---------------------------------


| 🔹 Advantage            | 💡 Why it’s useful                    |
| ----------------------- | ------------------------------------- |
| 1. **Fast on average**  | O(n log n) performance                |
| 2. **In-place sorting** | No extra arrays (O(log n) space)      |
| 3. **Cache friendly**   | Works well with modern memory systems |
| 4. **Divide & Conquer** | Easy to parallelize                   |


### ❌ Disadvantages of Quick Sort
---------------------------------
| 🔻 Disadvantage              | ⚠️ Explanation                        |
| ---------------------------- | ------------------------------------- |
| 1. **Worst case O(n²)**      | If pivot choice is bad (sorted input) |
| 2. **Not stable by default** | Equal elements may swap positions     |
| 3. **Recursive overhead**    | Stack depth = n in worst case         |


### ✅ Quick Interview Facts
---------------------------------
| Feature         | Value                  |
| --------------- | ---------------------- |
| Type            | Comparison-based       |
| Adaptive        | ❌ No                   |
| Stable          | ❌ No (unless modified) |
| In-place        | ✅ Yes (O(log n))       |
| Best Case Time  | O(n log n)             |
| Worst Case Time | O(n²)                  |
| Space           | O(log n)               |


## 📌 Real-Life Applications of Quick Sort

1. Databases Searching & Sorting

* Quick Sort is used in database management systems (DBMS) for fast retrieval and indexing.

* Example: Sorting employee records by ID or Name.

2. E-Commerce Websites

* Used to sort product lists by price, ratings, or popularity.

* Example: Flipkart / Amazon sorting products from low-to-high price.

3. Search Engines

* Google and Bing use sorting techniques (including Quick Sort variants) for ranking web pages based on relevance scores.

4. Operating Systems

* Used in task scheduling to arrange processes based on priority.

* Example: Sorting jobs in a CPU scheduler.

5. Library Management System

* Quick Sort is used to arrange books alphabetically or by accession number for faster searching.

6. Networking

* Used in routing algorithms to sort IP addresses and optimize packet delivery.