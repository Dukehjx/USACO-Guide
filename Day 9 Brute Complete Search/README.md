# Day 9 – Complete Search (Brute Force)

Today you’ll learn about **complete search** (also called brute force), a basic yet powerful strategy in USACO and other contests.  
When the problem size is small, trying all possibilities is often the simplest and most reliable approach!

---

## 📌 What You'll Learn

- What is complete search (brute force)?
- When is brute force the best approach?
- How to implement search over all possibilities (loops, recursion)
- Common pitfalls and how to optimize simple brute force code

---

## 🔍 What is Complete Search?

**Complete search** means you systematically try every possible candidate solution and check if it’s valid or optimal.

- Use when the input size is small (for N ≤ 10⁵, O(N), for N ≤ 20, O(2ᴺ) or O(N!) is possible)
- Great for simple combinatorics, permutations, subsets, or when other methods are too complex

---

## 📝 Common Complete Search Patterns

- **Try all combinations:** Use nested loops, recursion, or bitmasking
- **Check every possibility:** For each candidate, test if it satisfies the problem’s conditions
- **Track the best answer:** Save the maximum, minimum, or count as you search

---

## 💡 Examples

### 1. Try All Pairs

```cpp
int maxPairSum(vector<int>& arr) {
    int n = arr.size(), best = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i != j) best = max(best, arr[i] + arr[j]);
    return best;
}
```

2. Try All Subsets (Bitmasking)
```cpp
// There are 2^n subsets of n elements
for (int mask = 0; mask < (1 << n); mask++) {
    // mask: 0..2^n-1, each bit indicates if that item is chosen
}
```
## 📝 Tips
- Check constraints: use brute force only when input size is small!

- Avoid unnecessary computations—prune impossible cases early.

- Combine brute force with simulation or greedy when helpful.


## 💡 Example
See [example.cpp](./example.cpp) for how to check all pairs for a sum.

## 🏋️‍♂️ Self-Test Problem
Try the self-test problem in [problem.md](./problem.md)!
Can you improve your brute force code to avoid checking duplicate cases?