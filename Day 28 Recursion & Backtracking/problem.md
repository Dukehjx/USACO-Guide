# Self-Test Problem: Unique Permutations (with Duplicates)

**Statement**  
Given an array of `N` integers (values may repeat), print **all unique permutations**
in **lexicographic order**. Each permutation should be on its own line, space-separated.

- `1 ≤ N ≤ 8`

**Input**  
```
N
a1 a2 ... aN
```

**Output**  
All unique permutations in lexicographic order, one per line.

**Sample Input**
```
3
1 1 2
```

**Sample Output**
```
1 1 2
1 2 1
2 1 1
```

**Hints**
- Sort the array first.
- Track which indices are used with a `vector<bool> used(N)`.
- At index `i`, if `a[i] == a[i-1]` **and** `used[i-1] == false`, **skip** to avoid duplicates.
- Build `cur` vector; when size is `N`, print it.
