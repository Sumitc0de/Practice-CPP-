📌 What is Selection Sort?
Selection Sort is a comparison-based sorting algorithm.
It works by repeatedly selecting the smallest (or largest) element from the unsorted part and swapping it with the first unsorted element.

🔧 Key Idea
Divide array into:

🔹 Sorted part (left side)

🔸 Unsorted part (right side)

In every iteration:

Find the minimum element from the unsorted part.

Swap it with the first element of the unsorted part.



Algorithm Steps:
-------------------------------------------------------------------

1. Repeat for i = 1 to n - 1:

    Set minIndex = i (assume the minimum is at position i)

2. Repeat for j = i + 1 to n:

    If A[j] < A[minIndex], then set minIndex = j

3. Swap the elements at index i and minIndex
    (i.e., swap A[i] with A[minIndex])

4. Repeat steps 1–3 until the entire array is sorted



----------------------------------------------------------------

| Pass | Minimum Element Found | Swapped With | Resulting Array        |
| ---- | --------------------- | ------------ | ---------------------- |
| 1    | 10 (index 1)          | 29 (index 0) | `[10, 29, 14, 37, 13]` |
| 2    | 13 (index 4)          | 29 (index 1) | `[10, 13, 14, 37, 29]` |
| 3    | 14 (already in place) | —            | `[10, 13, 14, 37, 29]` |
| 4    | 29 (index 4)          | 37 (index 3) | `[10, 13, 14, 29, 37]` |
| 5    | Done                  | —            | `[10, 13, 14, 29, 37]` |






🔁 Dry Run of Selection Sort
----------------------------------------------------------
📚 Array: A = [29, 10, 14, 37, 13]
🔢 Length (n) = 5
✨ Initial Array:
[29, 10, 14, 37, 13]

✅ Pass 1 (i = 0)
minIndex = 0 (29)

Compare with:

A[1] = 10 → smaller → minIndex = 1

A[2] = 14 → no change

A[3] = 37 → no change

A[4] = 13 → no change

✅ Swap A[0] and A[1]
→ Array becomes: [10, 29, 14, 37, 13]


✅ Pass 2 (i = 1)
minIndex = 1 (29)

Compare with:

A[2] = 14 → smaller → minIndex = 2

A[3] = 37 → no change

A[4] = 13 → smaller → minIndex = 4

✅ Swap A[1] and A[4]
→ Array becomes: [10, 13, 14, 37, 29]\


✅ Pass 3 (i = 2)
minIndex = 2 (14)

Compare with:

A[3] = 37 → no change

A[4] = 29 → no change

❌ No swap needed
→ Array remains: [10, 13, 14, 37, 29]


✅ Pass 4 (i = 3)
minIndex = 3 (37)

Compare with:

A[4] = 29 → smaller → minIndex = 4

✅ Swap A[3] and A[4]
→ Array becomes: [10, 13, 14, 29, 37]

🎉 Final Sorted Array:
[10, 13, 14, 29, 37]




📊 Time and Space Complexity
----------------------------------------------------
| Case       | Condition      | Comparisons | Time      |
| ---------- | -------------- | ----------- | --------- |
| Best Case  | Already sorted | Always same | **O(n²)** |
| Average    | Random order   | Always same | **O(n²)** |
| Worst Case | Reversed order | Always same | **O(n²)** |

🧠 Comparisons are always the same:
Total = n(n - 1)/2

📦 Space Complexity: O(1) → in-place sort
🧠 No extra memory used.


🆚 Comparison with Other Sorts
------------------------------------------------------------------
| Algorithm      | Time (Best) | Time (Worst) | Stable | Space |
| -------------- | ----------- | ------------ | ------ | ----- |
| Selection Sort | O(n²)       | O(n²)        | ❌      | O(1)  |
| Bubble Sort    | O(n)        | O(n²)        | ✅      | O(1)  |
| Insertion Sort | O(n)        | O(n²)        | ✅      | O(1)  |



✅ Quick Facts for Interviews
--------------------------------------------

| Feature       | Answer            |
| ------------- | ----------------- |
| Type          | Comparison Sort   |
| Sorting Style | In-place          |
| Stability     | ❌ No              |
| Adaptive      | ❌ No              |
| Space         | O(1)              |
| Time          | Always O(n²)      |
| Swaps         | Up to (n - 1)     |
| Comparisons   | Always n(n - 1)/2 |

✅ Advantages of Selection Sort
----------------------------------------------
| 🔹 Advantage                               | 💡 Explanation                                                                     |
| ------------------------------------------ | ----------------------------------------------------------------------------------- |
| 1. **Simple to implement**                 | Easy to code and understand, even for beginners                                     |
| 2. **In-place sorting**                    | Requires no extra space → Space Complexity = O(1)                                   |
| 3. **Predictable behavior**                | Number of comparisons is fixed → always `n(n-1)/2`                                  |
| 4. **Performs well when swaps are costly** | Makes at most (n−1) swaps → good for memory with write limits (e.g., EEPROM, flash) |
| 5. **Works well on small arrays**          | Suitable for tiny datasets where efficiency isn't critical                          |
| 6. **No recursive calls**                  | Better for environments without stack memory (unlike Quick Sort)                    |



❌ Disadvantages of Selection Sort
--------------------------------------------------
| 🔻 Disadvantage                          | ⚠️ Explanation                                      |
| ---------------------------------------- | ---------------------------------------------------- |
| 1. **Time Complexity is always O(n²)**   | Even if the array is already sorted                  |
| 2. **Not adaptive**                      | Doesn't take advantage of pre-sorted arrays          |
| 3. **Not stable**                        | May change the relative order of equal elements      |
| 4. **Slower for large datasets**         | Inefficient compared to Merge Sort, Quick Sort, etc. |
| 5. **Inefficient number of comparisons** | Makes `n(n-1)/2` comparisons regardless of input     |
