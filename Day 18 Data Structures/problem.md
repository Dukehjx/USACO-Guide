# Self-Test Problem: Vector Operations

**Statement:**  
You are given Q queries to operate on a vector (initially empty). Each query is one of the following:
- `push x` : add integer x to the end of the vector
- `pop`    : remove the last element
- `print`  : print all elements of the vector, separated by spaces (or print "EMPTY" if vector is empty)

Process all queries in order.

---

**Input Format:**  
First line: integer Q (1 ≤ Q ≤ 100)  
Next Q lines: each line is either `push x`, `pop`, or `print`

**Output Format:**  
For each `print` query, output the vector or "EMPTY"

---

**Sample Input:**
```
6
push 5
push 8
print
pop
print
pop
```

**Sample Output:**
```
5 8
5
EMPTY
```