# Day 19 – Stacks & Queues: Implementation, Usage, Examples

Today you’ll learn about **stacks** and **queues**, two core data structures in computer science and USACO contests.  
They help you manage order, simulate processes, and solve many typical problems involving order, undo, or waiting.

---

## 📌 What You'll Learn

- What are stacks and queues?
- How to implement and use them in C++
- Common operations and their real contest applications
- Typical problems: matching parentheses, undo operations, simulation, etc.


## 🗂️ What is a Stack?

A **stack** is a "last-in, first-out" (LIFO) structure.  
- `push(x)`: add to the top  
- `pop()`: remove the top  
- `top()`: peek at the top  
- Use: managing function calls, undo, matching parentheses

```cpp
#include <stack>
stack<int> st;
st.push(3);
st.pop();
int x = st.top();
```

## 🗂️ What is a Queue?
A queue is a "first-in, first-out" (FIFO) structure.

- `push(x)`: add to the back

- `pop()`: remove from the front

- `front()`: look at the front

- Use: simulations, task scheduling, BFS in graphs

```cpp
#include <queue>
queue<int> q;
q.push(5);
q.pop();
int y = q.front();
```

## 📝 Common Stack Problems
- Matching parentheses: check if every '(' has a ')'

- Undoing actions (like Ctrl+Z)

- Reversing data

## 📝 Common Queue Problems
- Process elements in arrival order (simulation)

- Breadth-First Search (BFS) for graphs and shortest path

- Multi-stage simulations (like printer queues)

## 📝 Tips
`stack` and `queue` in C++ are both built on top of `deque`, but for most use-cases you never need to use `deque` directly.

Both support `.empty()` to check if there’s anything left.

Only use stack/queue functions—no random access.

## 💡 Example
See [example.cpp](./example.cpp) for code showing basic stack and queue usage and a simple parentheses matcher.

## 🏋️‍♂️ Self-Test Problem
Try the self-test problem in [problem.md](./problem.md)!
See if you can use a stack to check for correct bracket sequences.