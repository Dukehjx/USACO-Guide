# Day 12 – Sorting Algorithms II (Merge Sort & Quick Sort)

Today you’ll learn two advanced, efficient sorting algorithms:  
**Merge Sort** and **Quick Sort**.  
These are fast (O(N log N)) and are the basis for the `std::sort` function in C++.  
Understanding them prepares you for harder problems and makes your code much faster!

---

## 📌 What You'll Learn

- How Merge Sort and Quick Sort work
- How to implement both algorithms in C++
- Pros and cons of each method
- Why O(N log N) sorting is important for USACO

---

## ⚡ Merge Sort

- **Divide** the array into halves, recursively sort each half, then **merge** them together.
- Always O(N log N) time.
- Stable sort (preserves the order of equal elements).

```cpp
void mergeSort(vector<int>& arr, int l, int r) {
    if (l >= r) return;
    int m = (l + r) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m+1, r);
    // Merge step
    vector<int> temp;
    int i = l, j = m+1;
    while (i <= m && j <= r) {
        if (arr[i] < arr[j]) temp.push_back(arr[i++]);
        else temp.push_back(arr[j++]);
    }
    while (i <= m) temp.push_back(arr[i++]);
    while (j <= r) temp.push_back(arr[j++]);
    for (int k = l; k <= r; k++) arr[k] = temp[k - l];
}
```

## ⚡ Quick Sort
Pick a pivot element, partition the array into elements less than and greater than the pivot, and recursively sort the parts.

Average O(N log N) time; worst case O(N²) (rare if pivot chosen well).

Fast in practice and uses less extra memory.

```cpp
int partition(vector<int>& arr, int l, int r) {
    int pivot = arr[r], i = l;
    for (int j = l; j < r; j++) {
        if (arr[j] < pivot) swap(arr[i++], arr[j]);
    }
    swap(arr[i], arr[r]);
    return i;
}

void quickSort(vector<int>& arr, int l, int r) {
    if (l >= r) return;
    int pi = partition(arr, l, r);
    quickSort(arr, l, pi - 1);
    quickSort(arr, pi + 1, r);
}
```

## 📝 Tips
Use merge sort or quick sort for large arrays (N > 1000).

For most problems, you can use std::sort(arr.begin(), arr.end()).

Understand how recursion and partitioning work.

## 💡 Example
See [example.cpp](./example.cpp) for working implementations of merge sort and quick sort.

## 🏋️‍♂️ Self-Test Problem
Try the self-test problem in [problem.md](./problem.md).
Practice writing and calling your own sort function!