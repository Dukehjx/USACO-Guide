# Day 6 – Array and String Fundamentals

Today you’ll master the basics of **arrays** and **strings** in C++.  
These are the most common data structures in USACO and a must-know for efficient problem solving!

---

## 📌 What You'll Learn

- How to declare, read, write, and update arrays and strings
- Common operations (insert, remove, update, traverse, search)
- String manipulations and useful standard functions
- Practice with both arrays and strings

---

## 🧮 Arrays in C++

An **array** stores a fixed-size sequence of elements of the same type.

```cpp
int arr[5];             // Fixed-size array of 5 integers
vector<int> v(5);       // C++ vector (dynamic array) with 5 elements (all zero by default)
Access: arr[2] = 10; or v[2] = 10;
```

Input/output:

```cpp
for (int i = 0; i < n; i++) cin >> arr[i];
for (int i = 0; i < n; i++) cout << arr[i] << " ";
```


## 📝 Common Array Operations
- Update an element:  ```arr[i] = value;```

- Sum all elements:

```cpp
int sum = 0;
for (int x : arr) sum += x;
```

- Find a value:

```cpp
bool found = false;
for (int x : arr) if (x == target) found = true;
```

## 🔤 Strings in C++
A string is a sequence of characters.

```cpp
string s;           // Empty string
cin >> s;           // Input a single word (no spaces)
getline(cin, s);    // Input a full line (with spaces)
```

- Access: s[2] = 'a';

- Concatenate: string t = s + "xyz";

- Length: s.length();

- Substring: s.substr(1, 3); // from position 1, take 3 characters

- Compare: if (s == "abc")

## 📝 Tips
Use ```vector<int>``` for flexible arrays. For ```N ≤ 10^5```, ```vector<int> v(N)``` is efficient.

Strings are 0-indexed just like arrays.

Watch out for ```getline()``` after ```cin```—clear the input buffer first if needed.

You can use ```reverse```, ```sort``` for arrays/vectors/strings!

## 💡 Example
See [example.cpp](./example.cpp) for how to reverse an array and count vowels in a string.

