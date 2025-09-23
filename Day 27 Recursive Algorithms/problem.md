# Self-Test Problem: Recursive Palindrome Check

**Statement:**  
Given a string `S` (letters only, no spaces), determine **recursively** whether it is a **palindrome** (reads the same forward and backward).  
You **must** use a recursive helper function that checks characters moving inward.

---

**Input Format:**  
A single line string `S` (1 ≤ |S| ≤ 2000)

**Output Format:**  
Print `YES` if `S` is a palindrome, otherwise print `NO`.

---

**Sample Input 1:**
```
racecar
```

**Sample Output 1:**
```
YES
```

**Sample Input 2:**
```
usaco
```

**Sample Output 2:**
```
NO
```

---

## Hints
- Write a helper: `bool isPal(const string& s, int L, int R)`
  - **Base case:** if `L >= R`, return true
  - **Recursive case:** if `s[L] == s[R]`, return `isPal(s, L+1, R-1)`; else false
- Watch your indices carefully!
