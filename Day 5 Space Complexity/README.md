# Day 5 – Space Complexity

Today you’ll learn about **space complexity**—how much memory your code uses.  
Knowing space complexity helps you avoid "Memory Limit Exceeded" errors and write efficient solutions for USACO problems.

---

## 📌 What You'll Learn

- What is space complexity?
- Big O notation for memory (O(1), O(N), O(N²), etc.)
- How to estimate how much space your variables, arrays, or data structures use
- Examples of common space usage patterns

---

## 🧠 What is Space Complexity?

**Space complexity** describes **how the memory usage of an algorithm grows as the input size increases**.  
This includes memory for variables, arrays, data structures, recursion stack, etc. \
Even though space complexity is usually not a major concern in USACO, it is still important to consider it when coding \
A common approach in competitive programming is called **"Trading space for time"**

---

## 🅾️ Big O Notation for Space

- **O(1):** Constant space (does not depend on input size)
- **O(N):** Linear space (proportional to input size)
- **O(N²):** Quadratic space (often 2D arrays, like grids)
- **O(logN):** Logarithmic space (e.g., some recursive algorithms)
- **O(N³):** Cubic space (rare, large 3D arrays)

---

## 💡 Examples

### O(1): Constant Space

```cpp
int sumFirstN(int n) {
    int sum = 0; // Only uses a few integer variables, regardless of n
    for (int i = 1; i <= n; i++) sum += i;
    return sum;
}
```

O(N): Linear Space
```cpp
vector<int> arr(n); // Array of size n; uses O(N) memory
```
O(N²): Quadratic Space
```cpp
vector<vector<int>> grid(n, vector<int>(n)); // n x n grid
```
O(N³): Cubic Space
```cpp
vector<vector<vector<int>>> cube(n, vector<vector<int>>(n, vector<int>(n))); // n x n x n cube
```
## 🖼️ Visualization
Here's a demonstration of how memory increases: [space_demo](space_demo.png)


## 📝 Tips
Always check memory limits in the problem description!

For USACO Bronze/Silver, arrays with up to 10^6 elements are usually safe.

Watch out for large nested arrays: int grid[1000][1000] is about 4MB.

Avoid unnecessary copies of data structures.

Use vector<bool> or bitsets to save space for large boolean arrays.

## 💡 Example
See [example.cpp](./example.cpp) for an example that creates and sums an array of size N (O(N) space).