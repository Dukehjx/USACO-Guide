# Day 22 – Frequency Counting Techniques

Today you’ll learn practical ways to **count frequencies** of values (numbers, letters, strings, pairs) efficiently.  
Frequency counting appears everywhere in USACO Bronze/Silver: modes, duplicates, histograms, validations (e.g., anagrams), and more.

---

## 📌 What You'll Learn

- When to use **arrays / buckets** vs. **maps / hash maps**
- How to count **numbers, characters, strings, and pairs**
- How to **sort** or **rank** by frequency
- Common pitfalls and complexity

## 🧰 Core Techniques

### 1) Array / Bucket (Best when the value range is small and known)
- Example: lowercase letters `'a'..'z'`, digits `0..9`, scores `0..100`.
- Fast and simple: `O(N)` time, `O(K)` memory, where K is the value range.

```cpp
// Count lowercase letters
vector<int> cnt(26, 0);
for (char c : s) if ('a' <= c && c <= 'z') cnt[c - 'a']++;
```

### 2) unordered_map (Hash Map)
Use for large or unknown ranges (e.g., arbitrary integers or strings).

Average `O(1)` insert/query; order not guaranteed.

```cpp
unordered_map<long long, int> freq;
for (long long x : arr) freq[x]++;   // counts every value x
```

### 3) map (Tree Map, ordered)
Keys kept sorted automatically.

`O(log N)` per operation; useful when you must output in sorted key order.

```cpp
map<int, int> ordered;
for (int x : arr) ordered[x]++;
// iterate in ascending key order
```

### 4) Counting Pairs or Tuples
Use `map<pair<int,int>, int>` or `unordered_map<long long,int>` with a custom hash/encoding.

```cpp
map<pair<int,int>, int> pairCount;
pairCount[{u, v}]++;
```

## 🔎 Sorting by Frequency
Sometimes you need the mode or a ranking by frequency.
Collect entries into a vector and sort by (frequency desc, value asc):

```cpp
vector<pair<long long,int>> items(freq.begin(), freq.end());
sort(items.begin(), items.end(), [](auto &a, auto &b){
    if (a.second != b.second) return a.second > b.second; // higher freq first
    return a.first < b.first;                              // tie-break by value
});
```

## ⏱️ Complexity
Building counts: `O(N)` (amortized for unordered_map, `O(N log N)` for map)

Output in sorted-by-key order: `O(M log M)` where M is #distinct keys

Memory: `O(M)`

## ⚠️ Pitfalls
- Indexing chars: use c - 'a' only when you’re sure of the range.

- Clearing state: reset arrays/maps between test cases.

- Long counts: use long long if totals can exceed 2^31−1.

- Iteration order: unordered_map is not ordered; sort if order matters.

## 💡 Example
See [example.cpp](./example.cpp) for:

- Counting integers with unordered_map

- Printing counts in ascending value order

- Computing the mode with a tie-break rule

- Counting letters 'a'..'z' using a bucket array

## 🏋️‍♂️ Self-Test Problem
Try the task in [problem.md](./problem.md): find the mode (most frequent value) for large ranges with a clear tie-break.