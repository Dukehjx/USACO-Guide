# Self-Test Problem: Longest Substring Without Repeating Characters

**Statement:**  
Given a string `S` containing letters and/or digits, find the **length of the longest substring** that contains **no repeated characters**.

---

**Input Format:**  
A single line: string `S` (1 ≤ |S| ≤ 2 * 10^5)

**Output Format:**  
One integer: the maximum length

---

**Sample Input 1:**
```
abcabcbb
```

**Sample Output 1:**
```
3
```

**Explanation:** The valid substrings include `abc`, `bca`, `cab`. The maximum length is 3.

---

**Sample Input 2:**
```
bbbbb
```

**Sample Output 2:**
```
1
```

**Hint:**  
Use a **sliding window** with a frequency map (or last-seen index).  
Expand `R`; while current character repeats, **shrink `L`** until the substring has all unique characters.
