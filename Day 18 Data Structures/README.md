# Day 18 – Introduction to Data Structures: Arrays, Vectors, Lists

Today you’ll get comfortable with the most fundamental data structures:  
**arrays, vectors, and lists** in C++.  
These are the backbone for almost all USACO algorithms and will make your code faster, neater, and easier to debug.

---

## 📌 What You'll Learn

- The difference between arrays, vectors, and lists in C++
- How to declare, use, and choose between these data structures
- Common operations: insert, remove, traverse, update
- When to use each structure in USACO problems

---

## 🗂️ Static Arrays

- **Declaration:** `int arr[100];`
- **Fixed size, fast access** (`arr[i]`)
- Cannot change size after creation
- Used when the size is known and doesn’t change

---

## 🗂️ Vectors

- **Declaration:** `vector<int> v;` or `vector<int> v(n);`
- **Dynamic size:** can add or remove elements
- Common operations: `push_back(x)`, `pop_back()`, `size()`
- Random access (`v[i]`) is fast
- Ideal for most USACO problems

---

## 🗂️ Lists

- **Declaration:** `list<int> l;`
- **Doubly linked list** (each element points to previous and next)
- Fast insert/delete at any position, **but**:  
  - No random access (cannot use `l[i]`)
  - Use when you need to frequently insert or remove in the middle

---

## 📝 Example Operations

```cpp
vector<int> v = {1, 2, 3};
v.push_back(4); // v = [1,2,3,4]
v.pop_back();   // v = [1,2,3]
for (int x : v) cout << x << " ";

list<int> l = {5, 6, 7};
l.push_front(4); // l = [4,5,6,7]
l.push_back(8);  // l = [4,5,6,7,8]
l.pop_front();   // l = [5,6,7,8]
for (int x : l) cout << x << " ";
```

## 📝 Tips
- Use vector for 99% of contest code unless you have a special reason.

- Don’t use large arrays as function arguments—use vector<int>&.

- Lists are rarely used in USACO, but good to know for interview coding.

## 💡 Example
See [example.cpp](./example.cpp) for common vector and list operations.

## 🏋️‍♂️ Self-Test Problem
Try the self-test problem in [problem.md](./problem.md)!
Practice basic data structure operations and printing results.