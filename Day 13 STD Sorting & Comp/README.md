# Day 13 – Standard Library Sorting & Comparators

Today you’ll learn to use **C++’s standard sorting functions** and **custom comparators** for advanced sorting.  
This will make your code faster, shorter, and more flexible for USACO problems!

---

## 📌 What You'll Learn

- How to use `std::sort` and `std::stable_sort` with vectors and arrays
- How to sort arrays of pairs, structs, and strings
- How to write custom comparator functions or lambdas
- When to use stable vs. unstable sorts

## ⚡ Using std::sort

`std::sort` is the most common way to sort in C++.

```cpp
#include <algorithm>
#include <vector>
vector<int> v = {3, 1, 4};
sort(v.begin(), v.end()); // sorts in ascending order
```

For arrays:
```cpp
int arr[5] = {5, 2, 9, 1, 3};
sort(arr, arr + 5); // sorts arr[0]..arr[4]
```

## ⚡ Descending Order
```cpp
sort(v.rbegin(), v.rend()); // vectors
sort(arr, arr + n, greater<int>()); // arrays
```

## ⚡ Sorting Pairs and Structs
Pairs and structs are sorted by default by first, then second value.

```cpp
vector<pair<int,int>> vp = {{2,3}, {1,5}, {2,2}};
sort(vp.begin(), vp.end()); // sorts by first, then second
```

## ⚡ Custom Comparators
Use a **lambda** or a **function** for custom rules.

```cpp
// Sort by second, then by first if tie
sort(vp.begin(), vp.end(), [](pair<int,int>& a, pair<int,int>& b) {
    if (a.second != b.second) return a.second < b.second;
    return a.first < b.first;
});
```
Or for a struct:

```cpp
struct Cow {
    int height, weight;
};
vector<Cow> herd;
// Sort by weight, descending
sort(herd.begin(), herd.end(), [](Cow a, Cow b) {
    return a.weight > b.weight;
});
```

## ⚡ Stable Sort
`std::stable_sort` keeps equal elements in their original order.
Use this when "stable" sorting is required.


## 📝 Tips
Use `std::sort` for speed: O(N log N), very fast in practice.

Practice writing lambdas for custom sorting!

Check if the problem asks for a specific order when ties occur.

## 💡 Example
See [example.cpp](./example.cpp) for sorting pairs and custom objects.

## 🏋️‍♂️ Self-Test Problem
Try the self-test problem in [problem.md](./problem.md)!
Write your own custom comparator.