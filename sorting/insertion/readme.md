📌 What is Insertion Sort?
Insertion Sort is a simple, intuitive, and stable sorting algorithm.
It works just like sorting cards in your hand – inserting each new element at the correct position in the already sorted part.

🔧 Key Idea
Divide array into:

✅ Sorted part (starts with 1 element)

🔁 Unsorted part

Take one element from the unsorted part and insert it at the correct position in the sorted part by shifting elements to the right.

✍️ Algorithm – Insertion Sort
---------------------------------
🔁 InsertionSort(A, n)

Step 1: Start

Step 2: Repeat for i = 1 to n - 1
        → key = A[i]
        → j = i - 1

Step 3: While j ≥ 0 and A[j] > key
        → A[j + 1] = A[j]
        → j = j - 1

Step 4: Insert key at correct position
        → A[j + 1] = key

Step 5: Repeat Steps 2 to 4

Step 6: Stop

🧠 Dry Run Example
------------------------------------
Input: A = [20, 5, 13, 8, 2]

Step-by-step
1. Pass 1 (i = 1):

        key = 5 → shift 20 → place 5 at start

        [5, 20, 13, 8, 2]

2. Pass 2 (i = 2):

        key = 13 → shift 20 → place 13 after 5

        [5, 13, 20, 8, 2]

3. Pass 3 (i = 3):

        key = 8 → shift 20, shift 13 → place 8 after 5

        [5, 8, 13, 20, 2]

4.     Pass 4 (i = 4):

        key = 2 → shift 20, shift 13, shift 8, shift 5 → place 2 at start

        [2, 5, 8, 13, 20]

✅ Final Sorted Array: [2, 5, 8, 13, 20]



📊 Time and Space Complexity
------------------------------------------------
| Case       | Time Complexity | Why?                                  |
| ---------- | --------------- | ------------------------------------- |
| Best Case  | O(n)            | Already sorted, no shifting           |
| Average    | O(n²)           | Half the array shifted per pass       |
| Worst Case | O(n²)           | Reversed array → all elements shifted |


✅ Comparisons & Shifts vary by input  
✅ Space: O(1) → in-place  
✅ Stable? → Yes


📐 T(n) Derivation (Worst Case)
----------------------------------------------
T(n) = 1 + 2 + 3 + ... + (n - 1)
     = n(n - 1)/2
     ∈ O(n²)


Best Case T(n) = O(n)
Worst Case T(n) = O(n²)


✅ Advantages of Insertion Sort
----------------------------------------
| 🔹 Advantage                        | 💡 Why it's useful                                          |
| ----------------------------------- | ----------------------------------------------------------- |
| 1. **Simple and easy to implement** | Great for beginners and small tasks                         |
| 2. **Efficient for small arrays**   | Much faster than Selection/Bubble for nearly-sorted         |
| 3. **Stable Sorting**               | Preserves order of equal elements                           |
| 4. **In-place Sorting**             | Uses no extra memory (O(1))                                 |
| 5. **Adaptive**                     | Becomes faster as data gets more sorted (Best: O(n))        |
| 6. **Online Sorting**               | Can sort as elements are received (like typing suggestions) |


❌ Disadvantages of Insertion Sort
--------------------------------------------
| 🔻 Disadvantage                          | ⚠️ Explanation                    |
| ---------------------------------------- | --------------------------------- |
| 1. **Inefficient on large arrays**       | Time = O(n²) in worst case        |
| 2. **Too many shifts in reverse order**  | Every element must move           |
| 3. **Not good for real-time large apps** | Merge/Quick/Timsort are preferred |

✅ Quick Interview Facts
--------------------------------------------------------------
| Feature         | Value            |
| --------------- | ---------------- |
| Type            | Comparison-based |
| Adaptive        | ✅ Yes            |
| Stable          | ✅ Yes            |
| In-place        | ✅ Yes (O(1))     |
| Best Case Time  | O(n)             |
| Worst Case Time | O(n²)            |
| Space           | O(1)             |
