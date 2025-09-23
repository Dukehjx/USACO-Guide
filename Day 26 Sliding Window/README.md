# Day 26 – Sliding Window Technique

Today you’ll master the **sliding window** technique, a powerful pattern for processing **contiguous subarrays/substrings** in linear time.  
It’s a natural extension of two pointers and appears frequently in USACO Silver problems.

---

## 📌 What You'll Learn

- When to use sliding windows (contiguous ranges)
- **Fixed-size** window vs. **variable-size** window
- Typical tasks: maximum/minimum sum, longest substring with a property, count of valid windows
- How to maintain window state efficiently (sum, frequency map, distinct count)

---

## 🧠 When to Use Sliding Window

Use sliding window when:
- The answer involves **contiguous** segments (subarrays/substrings)
- The window **grows/shrinks** based on a simple condition
- You can update the window state in **O(1)** when adding/removing an element

---

## 🪟 Two Flavors

### 1) Fixed-Size Window (length K)
- Keep exactly **K** elements in the window
- Move the window one step at a time (remove left, add right)
- Example: **maximum sum of any subarray of length K**

### 2) Variable-Size Window (constraint-based)
- Maintain a condition (e.g., sum ≤ K, at most K distinct letters, no duplicates)
- Expand right; **shrink left** until the constraint is satisfied again
- Example: **minimum length subarray with sum ≥ S** (for positive numbers)

---

## 🧰 Common Patterns

- **Sum-based windows:** maintain a running sum
- **Distinct elements / counts:** maintain a frequency map `freq[value]`
- **No-duplicate substring:** shrink while `freq[char] > 1`

---

## ⚠️ Pitfalls

- For variable-size windows, **shrink in a loop** while the constraint is violated
- Clear/reset your frequency arrays/maps between test cases
- For negative numbers, simple sum-based windows may not work—consider different approaches or DP

---

## 💡 Examples Provided

- **Fixed-size:** maximum sum subarray of length K  
- **Variable-size:** minimum length subarray with sum ≥ S (positive integers)

See [`example.cpp`](./example.cpp).

---

## 🏋️‍♂️ Self-Test Problem

Try the self-test problem in [`problem.md`](./problem.md): **Longest substring without repeating characters** using a frequency map.
