# Day 7 – Simulation Techniques

Today you'll learn about **simulation** in competitive programming:  
Solving problems by directly modeling the process described, step by step, using code.  
Simulation is one of the most common approaches at the USACO Bronze and Silver levels!

---

## 📌 What You'll Learn

- What is simulation?
- When and why to use simulation
- Typical simulation problem patterns
- Tips for writing clear, bug-free simulation code

---

## 🕹️ What is Simulation?

**Simulation** means you directly imitate the process or actions described in a problem using your code.  
You "follow the rules" step by step, updating variables and data structures as you go.

Simulation is great when:
- The process is straightforward to implement
- There’s no formula or shortcut, just "do what they say"

---

## 📝 Common Patterns

- **Follow instructions step by step:** Move, change, or update values as the problem describes.
- **Track changes over time:** Use loops to simulate hours, days, or rounds.
- **Use arrays, vectors, or custom structures** to represent the current state.
- **Carefully read the problem statement!** Simulation bugs usually come from missing a rule or a special case.

---

## 💡 Example

### Simulating a Simple Game

Imagine a game where you start at 0 and add numbers from an array one by one.  
You stop as soon as your total reaches or exceeds 10.

Simulation code:

```cpp
int n, total = 0;
cin >> n;
vector<int> arr(n);
for (int i = 0; i < n; i++) cin >> arr[i];
for (int i = 0; i < n; i++) {
    total += arr[i];
    if (total >= 10) break;
}
cout << total << endl;
```

## 📝 Tips
- Use clear variable names (like position, score, day)

- Break the simulation into steps: read input → process → output

- Always test on sample and edge cases

- Sometimes you need to "simulate" several independent things at once

## 💡 Example
See [example.cpp](./example.cpp) for a simulation that rotates elements in an array.

