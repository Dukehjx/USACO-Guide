# Problem: Maximum Subarray Sum with One Deletion

## Description
Given an array of `n` integers `a[1..n]`, find the **maximum possible sum** of a **non-empty** subarray after deleting **at most one** element from the array (you may also choose to delete nothing).

A subarray is a **contiguous** part of the array.

---

## Input
- First line: integer `n` (1 ≤ n ≤ 2 * 10^5)  
- Second line: `n` integers `a[i]` (−10^9 ≤ a[i] ≤ 10^9)

## Output
- One integer: the maximum subarray sum after at most one deletion.

---

## Examples

### Example 1
**Input**
```
8
1 -2 0 3 -1 2 -1 2
```
**Output**
```
6
```
**Explanation**
Delete `-2`, best subarray becomes `[1, 0, 3, -1, 2, -1, 2]` with sum 6 (or keep and choose `[0, 3, -1, 2, -1, 2]` also 5; deletion helps).

### Example 2
**Input**
```
5
-2 -1 -3 -4 -5
```
**Output**
```
-1
```
**Explanation**
All numbers are negative. Best is to **not delete**, take the single largest element `-1`.

---

## Hints
- Let `endHere[i]` be the best sum ending at `i` and `startHere[i]` be the best sum starting at `i`.
- Consider deleting `a[k]` and joining `endHere[k-1]` with `startHere[k+1]`.
