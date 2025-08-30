# Day 23 – Bronze-Level Contest Simulation & Analysis

Today you’ll run a **mock USACO Bronze contest** with three short problems.  
Your goals are to **simulate the real experience**, manage time, and practice a structured **post-contest analysis**.

---

## 🕒 Contest Rules (Recommended)

- **Duration:** 2 hours
- **Problems:** 3 (A – Simulation, B – Greedy, C – Prefix Sums)
- **Scoring:** Each problem worth 100 points (partial: pass sample = 10, basic tests = 30–60, full = 100)
- **I/O:** Standard input/output (no files)
- **Language:** C++

---

## 🧭 How to Run This Day

1. **Timer On:** Set a 120-minute timer. No internet or peeking at solutions.
2. **Order:** Skim all problems in `problem.md`. Pick an easy win first.
3. **Discipline:** Implement, test with samples, then create small extra tests.
4. **Versioning:** If you get stuck, **save** your attempt and try a simpler approach.
5. **Submit Locally:** Print outputs only; no extra text.

> You can use the simple contest template in `example.cpp`.  
> It includes fast I/O and a switch to pick problem A/B/C.

---

## 🧪 After-Contest Analysis (30–45 min)

1. **Self-score:** Which tests would fail? Why?
2. **Complexity check:** Confirm your time/space complexity for each.
3. **Bug diary:** Write 2–3 lines per bug: *root cause → fix → prevention*.
4. **Alternative approach:** Could a different technique be simpler?
5. **Refactor:** Clean your accepted code (names, comments, edge cases).

---

## 🧰 Hints by Problem Type

- **A (Simulation):** Use a fixed-size array (range ≤ 2000). Mark painted segments with a boolean or count array.
- **B (Greedy):** Sort by **end time** and pick non-overlapping intervals.
- **C (Prefix Sums):** Precompute prefix; answer each query in O(1).

---

## ✅ Deliverables

- **During contest:** `a.cpp`, `b.cpp`, `c.cpp` (or one file with switches)
- **After contest:** Short write-up in your notes (what went well / to improve)
