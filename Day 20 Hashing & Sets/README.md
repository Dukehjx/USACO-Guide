# Day 20 – Hashing & Sets: Implementation & Examples

Today you’ll learn about **hashing** and how to use **sets** in C++.  
Hash sets are powerful for tracking unique items, fast lookup, and many contest tricks!

---

## 📌 What You'll Learn

- What is a hash table? What is a set?
- How to use `std::set` and `std::unordered_set` in C++
- When to use sets in USACO problems
- Common operations: insert, erase, count, check presence


## 🗂️ What is Hashing? What is a Set?

- **Hashing:** A technique to map data (like numbers or strings) to unique “buckets” for fast lookup.
- **Set:** A collection of unique elements, no duplicates.

**In C++:**
- `std::set` – ordered (elements sorted)
- `std::unordered_set` – faster, order not guaranteed


## 📝 Using Sets in C++

```cpp
#include <set>
#include <unordered_set>
set<int> s;
s.insert(3);
s.erase(3);
if (s.count(5)) { /* 5 is present */ }

unordered_set<string> us;
us.insert("USACO");
```

## 📝 Typical Contest Applications
- Remove duplicates

- Check if an element has been seen before (visited set)

- Count number of unique elements
 
- Speed up searching for items

## 📝 Tips
- Use set if you want elements sorted; use `unordered_set` for fastest possible lookups.

- `.insert(x)` and `.erase(x)` are both O(log N) for set, O(1) average for unordered_set.

- For strings or pairs, you may need to define a hash or comparator for advanced problems.

## 💡 Example
See [example.cpp](./example.cpp) for removing duplicates and fast membership check.

## 🏋️‍♂️ Self-Test Problem
Try the self-test problem in [problem.md](./problem.md)!
Practice using sets to count unique elements.

