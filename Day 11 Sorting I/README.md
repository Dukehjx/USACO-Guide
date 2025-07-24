# Day 11 – Sorting Algorithms I (Bubble, Selection, Insertion)

Sorting is a key skill for USACO! Today, you’ll learn to implement the three basic sorting algorithms:  
**Bubble Sort, Selection Sort, and Insertion Sort.**  
Understanding how sorting works helps you solve many contest problems and prepares you for more advanced algorithms later.

---

## 📌 What You'll Learn

- How bubble, selection, and insertion sorts work
- How to implement each algorithm in C++
- When to use each sort (and their pros/cons)
- How to practice sorting on small data

---

## 🔢 Why Sorting?

Sorting helps with:
- Searching, counting, and grouping data
- Making greedy and binary search algorithms easier
- Organizing input for simulation and complete search problems

---

## 📝 Bubble Sort

- Compare each pair of adjacent elements.
- Swap if out of order.
- Repeat N-1 times.

```cpp
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}
```
## 📝 Selection Sort
- Find the minimum element and move it to the front.
- Repeat for the rest of the array.

```cpp
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(arr[i], arr[min_idx]);
    }
}
```

## 📝 Insertion Sort
 - Build the sorted array one element at a time.
 - Insert each new element in the correct place.

```cpp
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
```

## 📝 Tips
These sorts are easy to code and understand, but slow (O(N²)) for large N.

Great for small arrays (N ≤ 1000) and learning the basics!

Practice writing these by hand—don’t just memorize!

Search on Internet for visualizations if it is too hard to interpret codes alone

## 💡 Example
See [example.cpp](./example.cpp) for an implementation of all three sorts.

## 🏋️‍♂️ Self-Test Problem
Try the self-test problem in [problem.md](./problem.md).
Practice sorting, then check your answer!

