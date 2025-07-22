# Day 8 – Introduction to Greedy Algorithms

Today you’ll explore **greedy algorithms**, a key problem-solving strategy for USACO and many contests!  
Greedy algorithms build solutions step by step, always making the locally optimal ("best at the moment") choice.

---

## 📌 What You'll Learn

- What is a greedy algorithm?
- When greedy methods work (and when they don’t)
- Common greedy problems and patterns
- Examples and tips for successful greedy solutions

---

## 💡 What is a Greedy Algorithm?

A **greedy algorithm** solves a problem by always taking the best, most immediate option, hoping this leads to an overall optimal solution.

- **Key property:** If you can prove that making the local best choice leads to the global optimum, greedy works!
- **Greedy ≠ Brute Force:** Greedy doesn’t try all possibilities, just the best one at each step.

---

## 🤔 When Does Greedy Work?

Greedy works well for:
- **Activity selection** (choose as many non-overlapping events as possible)
- **Coin change (with certain coins)**
- **Min/max problems with obvious best choices at each step**

Greedy may fail if taking a local best leads to a bad overall result. Always **prove** or **test** your greedy idea!

---

## 📝 Common Greedy Patterns

- **Sort first:** Many greedy problems involve sorting numbers, intervals, or objects.
- **Pick or skip:** At each step, decide to take or skip an option.
- **Update state:** Track your choices and remaining resources.

---

## 📝 Example: Activity Selection

You have a list of intervals [start, end]. What’s the max number you can pick without overlap?
**Greedy strategy:** Always pick the interval with the earliest end time that doesn’t overlap previous choices.

---

## 📝 Tips

- Try simple cases by hand before coding.
- Always check if a counterexample can break your greedy logic.
- If stuck, try a brute-force or dynamic programming approach to compare.

---

## 💡 Example

See [`example.cpp`](./example.cpp) for a greedy coin change solution.

---

## 🏋️‍♂️ Self-Test Problem

Try the self-test problem in [`problem.md`](./problem.md)!  
Think carefully: is a greedy solution correct for this problem?
