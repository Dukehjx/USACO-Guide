# Day 14 – Binary Search on Sorted Arrays

Today you’ll master **binary search**, one of the most important and widely used algorithms in competitive programming.  
Binary search lets you find elements or positions in a sorted array **fast** (O(log N) time).

---

## 📌 What You'll Learn

- The binary search algorithm and when to use it
- How to implement standard binary search in C++
- How to use `lower_bound` and `upper_bound` from the STL
- Common mistakes and how to debug binary search

---

## 🧠 When Can You Use Binary Search?

- The array (or range) **must be sorted**!
- You want to check if a value exists, or find its position
- You need to efficiently answer “find the smallest/largest value with some property”

---

## 🔎 Binary Search Algorithm

### Find a value in a sorted array

```cpp
int binarySearch(vector<int>& arr, int x) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == x) return mid;      // Found
        else if (arr[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return -1; // Not found
}
```

## ⚡ STL lower_bound & upper_bound
```lower_bound(v.begin(), v.end(), x)```: first index where value ≥ x

```upper_bound(v.begin(), v.end(), x)```: first index where value > x

Example:

```cpp
vector<int> v = {1, 3, 3, 5, 7};
auto it = lower_bound(v.begin(), v.end(), 3); // points to first 3
int idx = it - v.begin(); // 1
```

## 📝 Tips
Always check if your array is sorted first!

Watch out for off-by-one errors (use ≤, <, >=, > carefully)

Practice both returning index and “true/false exists” versions

Try coding both standard and STL binary search

## 💡 Example
See [example.cpp](./example.cpp) for a full C++ implementation with explanations.

## 🏋️‍♂️ Self-Test Problem
Try the self-test problem in [problem.md](./example.cpp)!
Can you write an efficient binary search for the answer?