# Day 16 – Prefix Sums & Arrays

Today you’ll learn about **prefix sums**, a technique that lets you answer range sum queries in arrays quickly.  
This method is a powerful tool for both USACO and many coding competitions.

---

## 📌 What You'll Learn

- What prefix sums are and how to compute them
- How to use prefix sums to answer range sum queries in O(1) time
- Common applications: sum of a subarray, number of occurrences in a range, etc.
- How to extend prefix sums to 2D arrays (for grid problems)


## 📚 What Are Prefix Sums?

A **prefix sum array** stores the sum of all elements from the start up to each index.

- Given array `a` of length `n`, define `prefix[i] = a[0] + a[1] + ... + a[i]`
- For range sums from index `l` to `r` (0-based):  
  `sum = prefix[r] - (l > 0 ? prefix[l-1] : 0)`


## 📝 Example: Constructing a Prefix Sum

```cpp
vector<int> a = {3, 2, 4, 1};
vector<int> prefix(a.size());
prefix[0] = a[0];
for (int i = 1; i < a.size(); i++)
    prefix[i] = prefix[i-1] + a[i];
// prefix = [3, 5, 9, 10]
```

To find sum from index 1 to 3:

`sum = prefix[3] - prefix[0] = 10 - 3 = 7`

## 🔢 Range Queries in O(1) Time
Precompute prefix sums in O(N)

Answer each sum query in O(1)

## 📝 2D Prefix Sums (Advanced Preview)
For grids, build a 2D prefix sum: `sum[r][c]` = sum of rectangle from (0,0) to (r,c)

Can answer subrectangle sums in O(1)

## 📝 Tips
Always initialize your prefix sum array!

For 0-based arrays: `prefix[0] = a[0]`

For 1-based arrays, it’s often easier: `prefix[i] = a[1] + ... + a[i]`

## 💡 Example
See [example.cpp](./example.cpp) for a C++ implementation and range sum queries.

## 🏋️‍♂️ Self-Test Problem
Try the self-test problem in [problem.md](./problem.md)!
Practice answering multiple range sum queries quickly.