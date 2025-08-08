# Day 21 – Maps & Dictionaries: Key-Value Storage

Today you’ll learn about **maps** in C++—also called **dictionaries** in other languages.  
Maps let you associate keys with values, like a name with a score, or a string with a count.

---

## 📌 What You'll Learn

- What maps are and how they work
- The difference between `map` and `unordered_map`
- How to store and access data using key-value pairs
- Common use cases in USACO problems


## 🗂️ What is a Map?

A **map** stores key-value pairs.

In C++:
- `map<K, V>` keeps keys **sorted**  
- `unordered_map<K, V>` has **faster average access**, but order is **not guaranteed**


## 📝 Basic Map Operations

```cpp
#include <map>
#include <unordered_map>
map<string, int> m;
m["cow"] = 3;
cout << m["cow"] << endl; // 3
unordered_map<int, string> um;
um[5] = "apple";
```
`m.count(key)` → check if a key exists

`m.erase(key)` → remove a key

`m.size()` → number of keys stored

## 🔍 Common Use Cases
 - Frequency counting (how many times something appears)

 - Storing name-to-score mappings

 - Grouping values by category

 - Caching answers (memoization)

## 📝 Tips
 - Use `unordered_map` for faster access (O(1) average time)

 - Use `map` if you need the keys in sorted order

 - Be careful when accessing keys that might not exist—use `.count()` first if needed


## 💡 Example
See [example.cpp](./example.cpp) for two applications: frequency count and reverse lookup.

## 🏋️‍♂️ Self-Test Problem
Try the self-test problem in [problem.md](./problem.md)!
Practice using a map to count string frequencies.

