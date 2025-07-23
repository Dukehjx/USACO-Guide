# Simulation Practice Problem: Milk Pouring

**Statement:**  
You have three buckets with capacities A, B, C liters.  
Initially, bucket A is full, and B and C are empty.  
You can pour from any bucket to any other bucket (until either the source is empty or the target is full).  
Find all possible amounts of milk that could be in bucket C when bucket A is empty (after any number of moves).

---

**Input Format:**  
Three integers: A B C (1 ≤ A, B, C ≤ 20)

**Output Format:**  
Sorted list of all possible amounts in bucket C (when A is empty), separated by spaces.

---

**Sample Input:**
```
8 9 10
```

**Sample Output:**
```
1 2 8 9 10
```
*Explanation: These are all the possible values for C when A is empty after any sequence of pours.*