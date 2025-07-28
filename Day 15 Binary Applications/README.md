# Day 15 – Binary Search: Applications

Binary search is not just for finding a number in a sorted array!  
Today, you’ll practice using binary search to solve “real-life” and contest problems where you search for the smallest/largest value that meets a condition.


## 📌 What You'll Learn

- How to use binary search to solve problems that are **not just about finding an exact value**
- The “binary search on the answer” pattern
- Typical applications: finding minimum/maximum feasible values, ranges, thresholds, or answers to “can you achieve X?”
- How to structure your own binary search problems

## 🤔 Binary Search on the Answer

Sometimes, you don’t search in an array but in a **range of possible answers**.  
You repeatedly check: “Is it possible with value X?” and adjust your search range based on yes/no.

### Example: Allocate N tasks to K workers so that the largest workload is minimized

- You want the **smallest max workload** possible.
- For each guess, check: Can you assign tasks without exceeding X?
- Use binary search over possible answers.

## 📝 Common Patterns

- “Find the minimum/maximum value such that a condition is true.”
- “What is the smallest/largest X so that [statement about X]?”
- Use a helper function to check feasibility: `bool check(X)`

## 💡 Example: Minimum Maximum Page

Suppose you have an array of book pages and want to split them into K groups (each group assigned to one student) to minimize the largest number of pages any student has to read.

- Binary search the answer: min possible = max(page), max possible = sum(pages)
- For each guess, check if you can split the books into ≤ K groups with each sum ≤ guess.

## 📝 Tips

- Binary search works for monotonic (always increasing or decreasing) functions.
- Always test your check/feasibility function carefully!
- This pattern is very common in USACO Silver/Gold.

## 💡 Example

See [`example.cpp`](./example.cpp) for binary search to find the smallest feasible maximum workload.

## 🏋️‍♂️ Self-Test Problem

Try the self-test problem in [`problem.md`](./problem.md)!  
Practice writing a feasibility function and binary search on the answer.
