# Day 4 – Time Complexity Analysis

Today you’ll learn the basics of **time complexity**—an essential skill for solving USACO problems efficiently.  
Understanding how fast your code runs is key to passing harder test cases and moving up in USACO.

---

## 📌 What You'll Learn

- What is time complexity?
- Big O notation: O(1), O(logN), O(N), O(N log N), O(N²), O(N³)
- How to estimate the efficiency of an algorithm
- Simple examples for each complexity

---

## ⏳ What Is Time Complexity?

Time complexity describes **how the runtime of an algorithm increases as the input size grows**.  
USACO problems often require you to solve problems efficiently—brute-force code can be too slow!

---

## 🅾️ Big O Notation

Big O notation shows the **upper bound**, of how many operations your code will use. In other words, in the worst scenario, how many operations will there be.

- **O(1)**: Constant time (does not depend on input size)
- **O(logN)**: Logarithmic time (work decreases rapidly as input increases; often found in binary search)
- **O(N)**: Linear time (proportional to the size of input)
- **O(N log N)**: "Linearithmic" time (common in fast sorting algorithms like Merge Sort, Quick Sort)
- **O(N²)**: Quadratic time (nested loops)
- **O(N³)**: Cubic time (three nested loops, rare in USACO Bronze/Silver but good to know)

---

## 💡 Examples

### O(1): Constant Time

```cpp
int getFirstElement(vector<int> arr) {
    return arr[0]; // No matter how big arr is, this takes 1 step
}
```
### O(logN): Logarithmic Time
```cpp
// Binary search in a sorted array
int binarySearch(vector<int>& arr, int x) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == x) return mid;
        else if (arr[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}
```
### O(N): Linear Time
```cpp
int sumArray(vector<int> arr) {
    int sum = 0;
    for (int x : arr) sum += x; // Runs once for each element
    return sum;
}
```
### O(N log N): Linearithmic Time
```cpp
// Merge Sort example
void mergeSort(vector<int>& arr, int l, int r) {
    if (l >= r) return;
    int m = (l + r) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m+1, r);
    // Merge step omitted for simplicity
}
```
### O(N²): Quadratic Time
``` cpp
int countPairs(vector<int> arr) {
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
        for (int j = 0; j < arr.size(); j++)
            if (arr[i] < arr[j]) count++;
    return count;
}
```
### O(N³): Cubic Time
```cpp
int countTriplets(vector<int> arr) {
    int n = arr.size(), cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                if (arr[i] + arr[j] == arr[k]) cnt++;
    return cnt;
}
```

---

## 🖼️ Visualization:
Here is a diagram of time complexity vs. input size of date: [Time vs. Input Size](./time_input_size.png)

---

## 📝 Tips
Estimate: For USACO Bronze/Silver, N ≤ 1000 → O(N²) is usually OK. N ≥ 10⁵ → O(N log N) or O(N) is required!

The max time complexity for all USACO question is #operations = N⁹

Nested loops = multiplication of N (O(N²)), triple loops = O(N³), etc.

Binary search = O(logN), sorting = O(N log N).

Always check input limits and think about your approach before coding.

## 💡 Example
See [example.cpp](./example.cpp) for a function that calculates the sum of an array (O(N)).

## 🏋️‍♂️ Self-Test Problem
Try the self-test problem in [problem.md](./problem.md)!  
Can you estimate the time complexity before coding?