# Complete Data Structures and Algorithms (DSA) Tutorial in C++

## 🚀 The Ultimate DSA Guide - Your Only Resource Needed!

This is a comprehensive, self-contained guide to Data Structures and Algorithms in C++. Designed to be your **complete and only resource** - no videos, no other tutorials needed. Everything is explained in extreme detail with practical examples and practice problems.

---

## 📚 Table of Contents

### Part I: Foundation
1. [C++ Fundamentals for DSA](#cpp-fundamentals)
2. [Complexity Analysis](#complexity-analysis)
3. [Problem Solving Approach](#problem-solving)

### Part II: Linear Data Structures
4. [Arrays and Strings](#arrays-strings)
5. [Linked Lists](#linked-lists)
6. [Stacks](#stacks)
7. [Queues](#queues)

### Part III: Non-Linear Data Structures
8. [Trees](#trees)
9. [Heaps and Priority Queues](#heaps)
10. [Hashing](#hashing)
11. [Graphs](#graphs)

### Part IV: Algorithms
12. [Sorting Algorithms](#sorting)
13. [Searching Algorithms](#searching)
14. [Dynamic Programming](#dynamic-programming)
15. [Greedy Algorithms](#greedy)
16. [Backtracking](#backtracking)
17. [Divide and Conquer](#divide-conquer)

### Part V: Advanced Topics
18. [Advanced Tree Structures](#advanced-trees)
19. [Advanced Graph Algorithms](#advanced-graphs)
20. [String Algorithms](#string-algorithms)
21. [Mathematical Algorithms](#mathematical)

### Part VI: Practice and Interview Preparation
22. [Practice Problems by Topic](#practice-problems)
23. [Interview Preparation Guide](#interview-prep)
24. [Company-Specific Problem Patterns](#company-patterns)

---

## 🎯 How to Use This Tutorial

### Reading Strategy:
1. **Sequential Learning**: Read chapters in order for systematic understanding
2. **Topic-Specific**: Jump to specific topics as needed
3. **Problem-Focused**: Start with practice problems and refer back to theory

### Practice Approach:
1. **Understand the concept** thoroughly
2. **Implement from scratch** without looking at solutions
3. **Analyze complexity** of your solution
4. **Compare with optimal solution**
5. **Practice variations** of the same problem

### Coding Standards:
- All code follows modern C++ standards (C++17/20)
- Consistent naming conventions
- Detailed comments explaining logic
- Both recursive and iterative solutions where applicable

---

## 💡 Key Features of This Tutorial

✅ **Complete Self-Contained Guide** - No external resources needed  
✅ **Detailed Explanations** - Every concept explained from basics  
✅ **Practical Code Examples** - Real implementation in C++  
✅ **Complexity Analysis** - Time and space complexity for every algorithm  
✅ **Practice Problems** - Multiple problems for each topic  
✅ **Interview Focus** - Common interview questions and patterns  
✅ **Progressive Learning** - From beginner to advanced level  
✅ **C++ STL Integration** - Proper use of Standard Template Library  

---

# C++ Fundamentals for DSA {#cpp-fundamentals}

## Why C++ for DSA?

C++ is the preferred language for competitive programming and technical interviews because:

1. **Performance**: Close to hardware, minimal overhead
2. **STL**: Rich Standard Template Library with pre-built data structures
3. **Control**: Manual memory management when needed
4. **Flexibility**: Both high-level and low-level programming
5. **Industry Standard**: Used in most competitive programming contests

## Essential C++ Concepts for DSA

### 1. Headers and Namespace

```cpp path=null start=null
#include <bits/stdc++.h>  // Includes all standard libraries (competitive programming)
// OR specific includes for production code:
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>

using namespace std;
```

**Why `#include <bits/stdc++.h>`?**
- Includes ALL standard C++ libraries
- Saves time in competitive programming
- Not recommended for production code (compilation time)

### 2. Input/Output Optimization

```cpp path=null start=null
// Fast I/O for competitive programming
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

// Standard I/O
int n;
cin >> n;  // Input
cout << n << endl;  // Output with newline
cout << n << "\n";  // Faster than endl
```

**Explanation:**
- `sync_with_stdio(false)`: Unsync C++ streams from C streams
- `cin.tie(NULL)`: Unties cin from cout for faster I/O
- Use `"\n"` instead of `endl` for better performance

### 3. Data Types and Their Ranges

```cpp path=null start=null
// Integer types
int x = 2147483647;        // 32-bit: -2^31 to 2^31-1
long long y = 9223372036854775807LL;  // 64-bit: -2^63 to 2^63-1
unsigned int z = 4294967295U;  // 32-bit: 0 to 2^32-1

// Floating point
float f = 3.14159f;        // 32-bit floating point
double d = 3.14159265359;  // 64-bit floating point

// Character and Boolean
char c = 'A';              // Single character
bool flag = true;          // Boolean value

// String
string s = "Hello World";  // C++ string class
```

**Important Notes:**
- Always use `long long` for large numbers in competitive programming
- Be aware of integer overflow
- Use appropriate data types based on constraints

### 4. STL Containers - The Heart of C++ DSA

#### 4.1 Vector (Dynamic Array)

```cpp path=null start=null
#include <vector>

// Declaration and Initialization
vector<int> v;                    // Empty vector
vector<int> v1(10);              // Vector of size 10, all elements 0
vector<int> v2(10, 5);           // Vector of size 10, all elements 5
vector<int> v3 = {1, 2, 3, 4, 5}; // Initialize with values

// Basic Operations
v.push_back(10);      // Add element at end
v.pop_back();         // Remove last element
v.size();             // Get size
v.empty();            // Check if empty
v.clear();            // Remove all elements

// Access Elements
v[0];                 // Access by index (no bounds checking)
v.at(0);              // Access by index (with bounds checking)
v.front();            // First element
v.back();             // Last element

// Iterators
v.begin();            // Iterator to first element
v.end();              // Iterator to past-the-end
v.rbegin();           // Reverse iterator to last element
v.rend();             // Reverse iterator to before-first

// Capacity
v.capacity();         // Current capacity
v.reserve(100);       // Reserve capacity for 100 elements
v.resize(20);         // Resize to 20 elements
```

**Time Complexities:**
- Access: O(1)
- Push/Pop back: O(1) amortized
- Insert/Delete at arbitrary position: O(n)
- Search: O(n)

#### 4.2 String

```cpp path=null start=null
#include <string>

// Declaration and Initialization
string s1;                    // Empty string
string s2 = "Hello";         // Initialize with literal
string s3(10, 'A');          // String with 10 'A's
string s4 = s2;              // Copy constructor

// Basic Operations
s1 += "World";               // Append
s1 + s2;                     // Concatenate (creates new string)
s1.append(s2);               // Append s2 to s1
s1.length();                 // Get length (same as size())
s1.size();                   // Get size
s1.empty();                  // Check if empty
s1.clear();                  // Clear string

// Access and Modification
s1[0];                       // Access character by index
s1.at(0);                    // Safe access with bounds checking
s1.front();                  // First character
s1.back();                   // Last character

// Substring and Search
s1.substr(2, 5);             // Substring starting at index 2, length 5
s1.find("ell");              // Find first occurrence
s1.find("ell", 3);           // Find starting from index 3
s1.rfind("l");               // Find last occurrence

// Comparison
s1 == s2;                    // Equal
s1 < s2;                     // Lexicographic comparison
s1.compare(s2);              // Returns 0 if equal, <0 if s1<s2, >0 if s1>s2
```

#### 4.3 Pair and Tuple

```cpp path=null start=null
#include <utility>  // for pair
#include <tuple>    // for tuple

// Pair - holds two values
pair<int, string> p1;                    // Default constructor
pair<int, string> p2 = {1, "one"};      // Initialize
pair<int, string> p3 = make_pair(2, "two");  // Using make_pair

// Access pair elements
p2.first;                    // Access first element
p2.second;                   // Access second element

// Tuple - holds multiple values
tuple<int, string, double> t1;           // Default constructor
tuple<int, string, double> t2 = {1, "one", 1.1};  // Initialize
tuple<int, string, double> t3 = make_tuple(2, "two", 2.2);

// Access tuple elements
get<0>(t2);                  // Access first element
get<1>(t2);                  // Access second element
get<2>(t2);                  // Access third element

// Tie for unpacking
int x;
string y;
double z;
tie(x, y, z) = t2;          // Unpack tuple into variables
```

#### 4.4 STL Algorithms

```cpp path=null start=null
#include <algorithm>

vector<int> v = {5, 2, 8, 1, 9};

// Sorting
sort(v.begin(), v.end());              // Ascending order
sort(v.begin(), v.end(), greater<int>()); // Descending order

// Custom comparator
sort(v.begin(), v.end(), [](int a, int b) {
    return a > b;  // Descending order
});

// Searching (on sorted array)
binary_search(v.begin(), v.end(), 5);    // Returns true/false
lower_bound(v.begin(), v.end(), 5);      // Iterator to first >= 5
upper_bound(v.begin(), v.end(), 5);      // Iterator to first > 5

// Finding
find(v.begin(), v.end(), 5);             // Iterator to first occurrence
count(v.begin(), v.end(), 5);            // Count occurrences

// Min/Max
*min_element(v.begin(), v.end());        // Minimum element
*max_element(v.begin(), v.end());        // Maximum element
minmax_element(v.begin(), v.end());      // Returns pair of iterators

// Reverse
reverse(v.begin(), v.end());             // Reverse the vector

// Unique (removes consecutive duplicates)
sort(v.begin(), v.end());
v.erase(unique(v.begin(), v.end()), v.end());

// Next/Previous permutation
next_permutation(v.begin(), v.end());
prev_permutation(v.begin(), v.end());
```

### 5. Pointers and References

```cpp path=null start=null
// Pointers
int x = 10;
int* ptr = &x;        // Pointer to x
*ptr = 20;            // Dereference and modify
cout << *ptr;         // Output: 20

// Dynamic memory allocation
int* arr = new int[10];  // Allocate array of 10 integers
delete[] arr;            // Free the memory

// Smart pointers (modern C++)
#include <memory>
unique_ptr<int> uptr = make_unique<int>(10);  // Unique pointer
shared_ptr<int> sptr = make_shared<int>(10);  // Shared pointer

// References
int y = 30;
int& ref = y;         // Reference to y
ref = 40;             // y becomes 40
```

### 6. Functions and Lambda Expressions

```cpp path=null start=null
// Regular function
int add(int a, int b) {
    return a + b;
}

// Function with default parameters
int multiply(int a, int b = 1) {
    return a * b;
}

// Function templates
template<typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

// Lambda expressions (C++11)
auto lambda1 = [](int x) { return x * 2; };
auto lambda2 = [&](int x) { return x + y; };  // Capture by reference
auto lambda3 = [=](int x) { return x + y; };  // Capture by value
auto lambda4 = [](int a, int b) -> bool { return a < b; };  // Explicit return type

// Using lambdas with STL
vector<int> v = {5, 2, 8, 1, 9};
sort(v.begin(), v.end(), [](int a, int b) { return a < b; });
```

### 7. Classes and Objects for DSA

```cpp path=null start=null
// Basic class structure
class Node {
public:
    int data;
    Node* next;
    
    // Constructor
    Node(int value) : data(value), next(nullptr) {}
    
    // Destructor
    ~Node() {
        // Cleanup if needed
    }
};

// Template class
template<typename T>
class Container {
private:
    T* arr;
    int size;
    int capacity;
    
public:
    Container(int cap) : capacity(cap), size(0) {
        arr = new T[capacity];
    }
    
    ~Container() {
        delete[] arr;
    }
    
    void insert(const T& element) {
        if (size < capacity) {
            arr[size++] = element;
        }
    }
    
    T& operator[](int index) {
        return arr[index];
    }
};
```

### 8. Exception Handling

```cpp path=null start=null
try {
    vector<int> v(10);
    cout << v.at(20);  // This will throw an exception
} catch (const out_of_range& e) {
    cout << "Index out of range: " << e.what() << endl;
} catch (const exception& e) {
    cout << "General exception: " << e.what() << endl;
}
```

### 9. Useful Macros for Competitive Programming

```cpp path=null start=null
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define per(i, a, b) for (int i = (a); i >= (b); i--)

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;
```

### 10. Common Utility Functions

```cpp path=null start=null
// GCD and LCM
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

// Fast power
long long fastPower(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Check if number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

// Generate all prime numbers up to n (Sieve of Eratosthenes)
vector<bool> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}
```

---

# Complexity Analysis {#complexity-analysis}

Understanding complexity is crucial for writing efficient algorithms. This section covers everything you need to know about analyzing algorithms.

## What is Complexity Analysis?

Complexity analysis helps us understand:
1. **How much time** an algorithm takes (Time Complexity)
2. **How much memory** an algorithm uses (Space Complexity)
3. **How the algorithm scales** with input size

## Big O Notation

Big O notation describes the **worst-case scenario** of an algorithm's performance.

### Mathematical Definition

For functions f(n) and g(n):
- f(n) = O(g(n)) if there exist positive constants c and n₀ such that:
- f(n) ≤ c × g(n) for all n ≥ n₀

### Common Time Complexities (Best to Worst)

```cpp path=null start=null
// O(1) - Constant Time
int getFirst(vector<int>& arr) {
    return arr[0];  // Always takes same time regardless of array size
}

// O(log n) - Logarithmic Time
int binarySearch(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

// O(n) - Linear Time
int findMax(vector<int>& arr) {
    int maxVal = arr[0];
    for (int i = 1; i < arr.size(); i++) {  // Visit each element once
        maxVal = max(maxVal, arr[i]);
    }
    return maxVal;
}

// O(n log n) - Linearithmic Time
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);      // T(n/2)
        mergeSort(arr, mid + 1, right); // T(n/2)
        merge(arr, left, mid, right);   // O(n)
    }
    // Total: T(n) = 2T(n/2) + O(n) = O(n log n)
}

// O(n²) - Quadratic Time
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {        // Outer loop: n times
        for (int j = 0; j < n - i - 1; j++) { // Inner loop: n times
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    // Total comparisons: n × n = n²
}

// O(n³) - Cubic Time
void tripleNestedLoop(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {        // n times
        for (int j = 0; j < n; j++) {    // n times
            for (int k = 0; k < n; k++) { // n times
                // Some constant operation
                cout << arr[i] + arr[j] + arr[k] << " ";
            }
        }
    }
    // Total operations: n × n × n = n³
}

// O(2ⁿ) - Exponential Time
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);  // Two recursive calls
}
// Each call branches into 2 calls, creating 2ⁿ total calls

// O(n!) - Factorial Time
void generatePermutations(string s, int index) {
    if (index == s.length()) {
        cout << s << " ";
        return;
    }
    for (int i = index; i < s.length(); i++) {  // For each position
        swap(s[index], s[i]);                   // n choices, then n-1, then n-2...
        generatePermutations(s, index + 1);
        swap(s[index], s[i]);  // backtrack
    }
    // Total permutations: n! = n × (n-1) × (n-2) × ... × 1
}
```

### Complexity Comparison Chart

| Complexity | n=10 | n=100 | n=1000 | n=10000 | Growth Rate |
|------------|------|-------|--------|---------|-------------|
| O(1) | 1 | 1 | 1 | 1 | Constant |
| O(log n) | 3 | 7 | 10 | 13 | Very Slow |
| O(n) | 10 | 100 | 1000 | 10000 | Linear |
| O(n log n) | 33 | 664 | 9966 | 132877 | Moderate |
| O(n²) | 100 | 10000 | 1000000 | 100000000 | Fast |
| O(2ⁿ) | 1024 | 2^100 | 2^1000 | 2^10000 | Very Fast |

## Space Complexity

Space complexity measures the amount of memory an algorithm uses.

### Types of Space Complexity

```cpp path=null start=null
// O(1) - Constant Space
int sum(vector<int>& arr) {
    int total = 0;  // Only using a constant amount of extra space
    for (int x : arr) {
        total += x;
    }
    return total;
}

// O(n) - Linear Space
vector<int> reverseArray(vector<int>& arr) {
    vector<int> reversed(arr.size());  // Creating new array of size n
    for (int i = 0; i < arr.size(); i++) {
        reversed[i] = arr[arr.size() - 1 - i];
    }
    return reversed;
}

// O(n) - Recursive Space (due to call stack)
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);  // Each call uses stack space
}
// Call stack depth: n, so space complexity is O(n)

// O(n²) - Quadratic Space
vector<vector<int>> create2DArray(int n) {
    vector<vector<int>> matrix(n, vector<int>(n, 0));  // n × n matrix
    return matrix;
}
```

## How to Analyze Complexity

### Step-by-Step Process

1. **Identify the basic operations** (comparisons, assignments, arithmetic)
2. **Count how many times** basic operations execute
3. **Express as a function** of input size n
4. **Find the dominant term** (highest order term)
5. **Drop constants and lower-order terms**

### Example Analysis

```cpp path=null start=null
void example(vector<int>& arr) {
    int n = arr.size();
    
    // Step 1: Single loop - O(n)
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    // Step 2: Nested loops - O(n²)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i] + arr[j] << " ";
        }
    }
    
    // Step 3: Another single loop - O(n)
    for (int i = 0; i < n; i++) {
        cout << arr[i] * 2 << " ";
    }
    
    // Total: O(n) + O(n²) + O(n) = O(n²)
    // The dominant term O(n²) determines overall complexity
}
```

### Loop Analysis Patterns

```cpp path=null start=null
// Pattern 1: Simple loop
for (int i = 0; i < n; i++) {
    // O(1) operation
}
// Complexity: O(n)

// Pattern 2: Nested loops with same bounds
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        // O(1) operation
    }
}
// Complexity: O(n²)

// Pattern 3: Nested loops with dependent bounds
for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {  // j starts from i
        // O(1) operation
    }
}
// First iteration: n operations
// Second iteration: n-1 operations
// ...
// Last iteration: 1 operation
// Total: n + (n-1) + ... + 1 = n(n+1)/2 = O(n²)

// Pattern 4: Loop with exponential growth
for (int i = 1; i < n; i *= 2) {
    // O(1) operation
}
// i takes values: 1, 2, 4, 8, ..., up to n
// Number of iterations: log₂(n)
// Complexity: O(log n)

// Pattern 5: Loop with square root
for (int i = 0; i * i < n; i++) {
    // O(1) operation
}
// Loop runs while i² < n, so i < √n
// Complexity: O(√n)
```

### Recursive Complexity Analysis

#### Master Theorem

For recurrences of the form: T(n) = aT(n/b) + f(n)

Where:
- a = number of subproblems
- n/b = size of each subproblem
- f(n) = cost of work done outside recursive calls

**Cases:**
1. If f(n) = O(n^(log_b(a-ε))) for some ε > 0, then T(n) = O(n^log_b(a))
2. If f(n) = O(n^log_b(a)), then T(n) = O(n^log_b(a) × log n)
3. If f(n) = O(n^(log_b(a)+ε)) for some ε > 0, then T(n) = O(f(n))

```cpp path=null start=null
// Example 1: Binary Search
int binarySearch(vector<int>& arr, int target, int left, int right) {
    if (left > right) return -1;
    
    int mid = left + (right - left) / 2;
    if (arr[mid] == target) return mid;
    else if (arr[mid] < target) 
        return binarySearch(arr, target, mid + 1, right);  // T(n/2)
    else 
        return binarySearch(arr, target, left, mid - 1);   // T(n/2)
}
// Recurrence: T(n) = T(n/2) + O(1)
// a=1, b=2, f(n)=O(1)=O(n⁰)
// log₂(1) = 0, so f(n) = O(n^log_b(a))
// By Master Theorem Case 2: T(n) = O(log n)

// Example 2: Merge Sort
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);      // T(n/2)
        mergeSort(arr, mid + 1, right); // T(n/2)
        merge(arr, left, mid, right);   // O(n)
    }
}
// Recurrence: T(n) = 2T(n/2) + O(n)
// a=2, b=2, f(n)=O(n)
// log₂(2) = 1, so f(n) = O(n¹) = O(n^log_b(a))
// By Master Theorem Case 2: T(n) = O(n log n)

// Example 3: Tree Recursion (Fibonacci)
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
// This doesn't fit Master Theorem directly
// Each call makes 2 recursive calls
// Forms a binary tree of height n
// Total nodes ≈ 2ⁿ
// Time Complexity: O(2ⁿ)
```

## Amortized Analysis

Amortized analysis considers the average performance over a sequence of operations.

### Example: Dynamic Array (Vector)

```cpp path=null start=null
class DynamicArray {
private:
    int* arr;
    int size;
    int capacity;
    
public:
    DynamicArray() : size(0), capacity(1) {
        arr = new int[capacity];
    }
    
    void push_back(int x) {
        if (size == capacity) {
            // Resize: O(n) time
            capacity *= 2;
            int* newArr = new int[capacity];
            for (int i = 0; i < size; i++) {
                newArr[i] = arr[i];  // Copy all elements
            }
            delete[] arr;
            arr = newArr;
        }
        arr[size++] = x;  // O(1) time
    }
};

// Analysis:
// - Most push_back operations: O(1)
// - Occasionally (when resizing): O(n)
// - But resizing happens at sizes: 1, 2, 4, 8, 16, ...
// - For n operations, resizing cost: 1 + 2 + 4 + 8 + ... < 2n
// - Total cost for n operations: n × O(1) + O(n) = O(n)
// - Amortized cost per operation: O(n)/n = O(1)
```

## Practical Tips for Complexity Analysis

### 1. Common STL Complexities

```cpp path=null start=null
// Vector
vector<int> v;
v.push_back(x);          // O(1) amortized
v.pop_back();            // O(1)
v.insert(it, x);         // O(n)
v.erase(it);             // O(n)
v[i];                    // O(1)
sort(v.begin(), v.end()); // O(n log n)

// Set/Map (Red-Black Tree)
set<int> s;
s.insert(x);             // O(log n)
s.erase(x);              // O(log n)
s.find(x);               // O(log n)

// Unordered Set/Map (Hash Table)
unordered_set<int> us;
us.insert(x);            // O(1) average, O(n) worst
us.erase(x);             // O(1) average, O(n) worst
us.find(x);              // O(1) average, O(n) worst

// Priority Queue (Heap)
priority_queue<int> pq;
pq.push(x);              // O(log n)
pq.pop();                // O(log n)
pq.top();                // O(1)
```

### 2. When to Use Each Complexity

- **O(1)**: Direct access, hash operations
- **O(log n)**: Binary search, balanced trees
- **O(n)**: Linear search, single pass algorithms
- **O(n log n)**: Efficient sorting, divide and conquer
- **O(n²)**: Acceptable for n ≤ 1000
- **O(n³)**: Acceptable for n ≤ 100
- **O(2ⁿ)**: Only for n ≤ 20
- **O(n!)**: Only for n ≤ 10

### 3. Optimization Strategies

```cpp path=null start=null
// Bad: O(n²) - searching in unsorted array repeatedly
vector<int> arr = {1, 5, 3, 8, 2, 7};
for (int i = 0; i < queries.size(); i++) {
    for (int j = 0; j < arr.size(); j++) {
        if (arr[j] == queries[i]) {
            // found
            break;
        }
    }
}

// Better: O(n + m) - use hash set
unordered_set<int> s(arr.begin(), arr.end());  // O(n)
for (int query : queries) {                    // O(m)
    if (s.find(query) != s.end()) {            // O(1) per query
        // found
    }
}

// Bad: O(n²) - repeated string concatenation
string result = "";
for (int i = 0; i < n; i++) {
    result += strings[i];  // Each += can be O(current length)
}

// Better: O(n) - use StringBuilder or reserve space
vector<string> parts;
for (int i = 0; i < n; i++) {
    parts.push_back(strings[i]);
}
string result = "";
for (const string& part : parts) {
    result += part;
}
// Or even better: estimate total length and reserve
```

# Arrays and Strings {#arrays-strings}

Arrays and strings are the most fundamental data structures in programming. They form the building blocks for more complex data structures and are essential for solving many algorithmic problems.

## Arrays in C++

### What is an Array?

An array is a collection of elements of the same data type, stored in contiguous memory locations. Each element can be accessed using an index.

### Types of Arrays in C++

#### 1. Static Arrays (C-style)

```cpp path=null start=null
// Declaration and Initialization
int arr1[5];                    // Uninitialized array of 5 integers
int arr2[5] = {1, 2, 3, 4, 5}; // Initialize with values
int arr3[] = {1, 2, 3, 4, 5};  // Size automatically determined
int arr4[10] = {0};            // All elements initialized to 0
int arr5[10] = {1};            // First element 1, rest 0

// 2D Arrays
int matrix[3][4];              // 3x4 matrix
int matrix2[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};

// Accessing elements
arr2[0] = 10;                  // Set first element
int x = arr2[0];               // Get first element
matrix2[1][2] = 100;           // Set element at row 1, col 2
```

**Pros:**
- Fast access: O(1)
- Memory efficient
- Cache-friendly due to locality

**Cons:**
- Fixed size (determined at compile time)
- No bounds checking
- Manual memory management for dynamic allocation

#### 2. Dynamic Arrays (std::vector)

```cpp path=null start=null
#include <vector>

// Declaration and Initialization
vector<int> v1;                     // Empty vector
vector<int> v2(10);                 // 10 elements, all 0
vector<int> v3(10, 5);              // 10 elements, all 5
vector<int> v4 = {1, 2, 3, 4, 5};   // Initialize with values
vector<int> v5(v4);                 // Copy constructor

// 2D Vectors
vector<vector<int>> matrix(3, vector<int>(4, 0));  // 3x4 matrix with 0s

// Operations
v1.push_back(10);               // Add element at end
v1.pop_back();                  // Remove last element
int size = v1.size();           // Get current size
bool empty = v1.empty();        // Check if empty
v1.clear();                     // Remove all elements
v1.resize(20);                  // Resize to 20 elements
v1.reserve(100);                // Reserve capacity for 100 elements

// Access
int first = v4[0];              // Direct access (no bounds check)
int first_safe = v4.at(0);      // Safe access (throws exception if out of bounds)
int& front = v4.front();        // Reference to first element
int& back = v4.back();          // Reference to last element
```

### Array Algorithms and Techniques

#### 1. Basic Operations

```cpp path=null start=null
// Find maximum element
int findMax(vector<int>& arr) {
    if (arr.empty()) return INT_MIN;
    
    int maxVal = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        maxVal = max(maxVal, arr[i]);
    }
    return maxVal;
    
    // Or using STL
    // return *max_element(arr.begin(), arr.end());
}
// Time: O(n), Space: O(1)

// Find minimum element
int findMin(vector<int>& arr) {
    if (arr.empty()) return INT_MAX;
    
    int minVal = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        minVal = min(minVal, arr[i]);
    }
    return minVal;
    
    // Or using STL
    // return *min_element(arr.begin(), arr.end());
}
// Time: O(n), Space: O(1)

// Sum of all elements
long long sum(vector<int>& arr) {
    long long total = 0;
    for (int x : arr) {
        total += x;
    }
    return total;
    
    // Or using STL
    // return accumulate(arr.begin(), arr.end(), 0LL);
}
// Time: O(n), Space: O(1)

// Reverse array
void reverseArray(vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    
    // Or using STL
    // reverse(arr.begin(), arr.end());
}
// Time: O(n), Space: O(1)
```

#### 2. Two Pointer Technique

```cpp path=null start=null
// Check if array is palindrome
bool isPalindrome(vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    
    while (left < right) {
        if (arr[left] != arr[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
// Time: O(n), Space: O(1)

// Two Sum - return indices of two numbers that add up to target
vector<int> twoSum(vector<int>& arr, int target) {
    unordered_map<int, int> map;  // value -> index
    
    for (int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];
        if (map.find(complement) != map.end()) {
            return {map[complement], i};
        }
        map[arr[i]] = i;
    }
    return {};  // No solution found
}
// Time: O(n), Space: O(n)

// Two Sum on sorted array - return values
vector<int> twoSumSorted(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return {arr[left], arr[right]};
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return {};  // No solution found
}
// Time: O(n), Space: O(1)
```

#### 3. Sliding Window Technique

```cpp path=null start=null
// Maximum sum of k consecutive elements
int maxSumKElements(vector<int>& arr, int k) {
    if (arr.size() < k) return -1;
    
    // Calculate sum of first window
    int windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }
    
    int maxSum = windowSum;
    
    // Slide the window
    for (int i = k; i < arr.size(); i++) {
        windowSum += arr[i] - arr[i - k];  // Add new, remove old
        maxSum = max(maxSum, windowSum);
    }
    
    return maxSum;
}
// Time: O(n), Space: O(1)

// Longest subarray with at most k distinct characters
int longestSubarrayKDistinct(vector<int>& arr, int k) {
    unordered_map<int, int> count;
    int left = 0, maxLen = 0;
    
    for (int right = 0; right < arr.size(); right++) {
        count[arr[right]]++;
        
        // Shrink window if more than k distinct elements
        while (count.size() > k) {
            count[arr[left]]--;
            if (count[arr[left]] == 0) {
                count.erase(arr[left]);
            }
            left++;
        }
        
        maxLen = max(maxLen, right - left + 1);
    }
    
    return maxLen;
}
// Time: O(n), Space: O(k)
```

#### 4. Prefix Sum Technique

```cpp path=null start=null
// Range sum queries
class PrefixSum {
private:
    vector<long long> prefixSum;
    
public:
    PrefixSum(vector<int>& arr) {
        prefixSum.resize(arr.size() + 1, 0);
        for (int i = 0; i < arr.size(); i++) {
            prefixSum[i + 1] = prefixSum[i] + arr[i];
        }
    }
    
    // Get sum of elements from index left to right (inclusive)
    long long rangeSum(int left, int right) {
        return prefixSum[right + 1] - prefixSum[left];
    }
};
// Construction: O(n), Query: O(1), Space: O(n)

// Subarray sum equals k
int subarraySum(vector<int>& arr, int k) {
    unordered_map<int, int> prefixSums;  // prefixSum -> count
    prefixSums[0] = 1;  // Empty subarray has sum 0
    
    int count = 0, prefixSum = 0;
    for (int num : arr) {
        prefixSum += num;
        
        // If prefixSum - k exists, we found subarrays
        if (prefixSums.find(prefixSum - k) != prefixSums.end()) {
            count += prefixSums[prefixSum - k];
        }
        
        prefixSums[prefixSum]++;
    }
    
    return count;
}
// Time: O(n), Space: O(n)
```

## Strings in C++

### String Basics

```cpp path=null start=null
#include <string>

// Declaration and Initialization
string s1;                      // Empty string
string s2 = "Hello";            // Initialize with literal
string s3("World");             // Constructor with literal
string s4(10, 'A');             // 10 'A' characters
string s5 = s2;                 // Copy constructor
string s6 = s2 + " " + s3;      // Concatenation

// Basic Operations
int len = s2.length();          // Get length
int size = s2.size();           // Same as length()
bool empty = s1.empty();        // Check if empty
s1.clear();                     // Clear string

// Access and Modification
char first = s2[0];             // First character
char last = s2.back();          // Last character
s2[0] = 'h';                    // Modify character

// Append and Insert
s2 += " World";                 // Append
s2.append(" !");                // Append
s2.insert(5, ", ");             // Insert at position 5
s2.push_back('!');

// Substring
string sub = s2.substr(6, 5);   // Starting at index 6, length 5
string sub2 = s2.substr(6);     // From index 6 to end

// Search
size_t pos = s2.find("World");  // Find first occurrence
size_t pos2 = s2.rfind("l");    // Find last occurrence
size_t pos3 = s2.find("xyz");   // Returns string::npos if not found

if (pos != string::npos) {
    cout << "Found at position: " << pos << endl;
}

// Replace
s2.replace(0, 5, "Hi");        // Replace 5 chars starting at 0 with "Hi"

// Erase
s2.erase(2, 3);                // Remove 3 chars starting at index 2
s2.erase(s2.begin() + 2);      // Remove character at index 2
```

### String Algorithms

#### 1. String Reversal

```cpp path=null start=null
// Method 1: Using two pointers
string reverseString(string s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
    return s;
}
// Time: O(n), Space: O(1) - if modifying in place

// Method 2: Using STL
string reverseStringSTL(string s) {
    reverse(s.begin(), s.end());
    return s;
}
// Time: O(n), Space: O(1)

// Method 3: Using recursion
string reverseStringRecursive(string s) {
    if (s.length() <= 1) return s;
    return reverseStringRecursive(s.substr(1)) + s[0];
}
// Time: O(n²), Space: O(n) - due to substring creation
```

#### 2. Palindrome Check

```cpp path=null start=null
// Simple palindrome check
bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1;
    
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
// Time: O(n), Space: O(1)

// Palindrome check ignoring case and non-alphanumeric
bool isPalindromeAlphanumeric(string s) {
    int left = 0, right = s.length() - 1;
    
    while (left < right) {
        // Skip non-alphanumeric from left
        while (left < right && !isalnum(s[left])) {
            left++;
        }
        
        // Skip non-alphanumeric from right
        while (left < right && !isalnum(s[right])) {
            right--;
        }
        
        // Compare characters (case insensitive)
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        
        left++;
        right--;
    }
    return true;
}
// Time: O(n), Space: O(1)
```

#### 3. String Matching Algorithms

```cpp path=null start=null
// Naive string matching
vector<int> naiveSearch(string text, string pattern) {
    vector<int> matches;
    int n = text.length();
    int m = pattern.length();
    
    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && text[i + j] == pattern[j]) {
            j++;
        }
        if (j == m) {
            matches.push_back(i);
        }
    }
    return matches;
}
// Time: O(nm), Space: O(1) - not counting output

// KMP (Knuth-Morris-Pratt) Algorithm
vector<int> computeLPS(string pattern) {
    int m = pattern.length();
    vector<int> lps(m, 0);
    int len = 0;
    int i = 1;
    
    while (i < m) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

vector<int> KMPSearch(string text, string pattern) {
    vector<int> matches;
    int n = text.length();
    int m = pattern.length();
    
    vector<int> lps = computeLPS(pattern);
    
    int i = 0, j = 0;
    while (i < n) {
        if (pattern[j] == text[i]) {
            i++;
            j++;
        }
        
        if (j == m) {
            matches.push_back(i - j);
            j = lps[j - 1];
        } else if (i < n && pattern[j] != text[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
    return matches;
}
// Time: O(n + m), Space: O(m)
```

#### 4. String Transformations

```cpp path=null start=null
// Remove duplicates from string
string removeDuplicates(string s) {
    unordered_set<char> seen;
    string result = "";
    
    for (char c : s) {
        if (seen.find(c) == seen.end()) {
            seen.insert(c);
            result += c;
        }
    }
    return result;
}
// Time: O(n), Space: O(min(n, alphabet_size))

// Remove adjacent duplicates
string removeAdjacentDuplicates(string s) {
    string result = "";
    
    for (char c : s) {
        if (!result.empty() && result.back() == c) {
            result.pop_back();  // Remove the duplicate
        } else {
            result.push_back(c);
        }
    }
    return result;
}
// Time: O(n), Space: O(1) - not counting output

// Longest common subsequence
int longestCommonSubsequence(string text1, string text2) {
    int m = text1.length(), n = text2.length();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (text1[i - 1] == text2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[m][n];
}
// Time: O(mn), Space: O(mn)
```

### Advanced String Techniques

#### 1. Manacher's Algorithm (Longest Palindromic Substring)

```cpp path=null start=null
string longestPalindrome(string s) {
    if (s.empty()) return "";
    
    // Transform string: "abc" -> "^#a#b#c#$"
    string T = "^";
    for (char c : s) {
        T += "#" + string(1, c);
    }
    T += "#$";
    
    int n = T.length();
    vector<int> P(n, 0);
    int C = 0, R = 0;  // Center and Right boundary
    
    for (int i = 1; i < n - 1; i++) {
        int mirror = 2 * C - i;
        
        if (i < R) {
            P[i] = min(R - i, P[mirror]);
        }
        
        // Try to expand palindrome centered at i
        while (T[i + P[i] + 1] == T[i - P[i] - 1]) {
            P[i]++;
        }
        
        // If palindrome centered at i extends past R,
        // adjust center and right boundary
        if (i + P[i] > R) {
            C = i;
            R = i + P[i];
        }
    }
    
    // Find longest palindrome
    int maxLen = 0, centerIndex = 0;
    for (int i = 1; i < n - 1; i++) {
        if (P[i] > maxLen) {
            maxLen = P[i];
            centerIndex = i;
        }
    }
    
    int start = (centerIndex - maxLen) / 2;
    return s.substr(start, maxLen);
}
// Time: O(n), Space: O(n)
```

#### 2. Z Algorithm (Pattern Matching)

```cpp path=null start=null
vector<int> calculateZ(string s) {
    int n = s.length();
    vector<int> Z(n, 0);
    int l = 0, r = 0;
    
    for (int i = 1; i < n; i++) {
        if (i > r) {
            l = r = i;
            while (r < n && s[r - l] == s[r]) {
                r++;
            }
            Z[i] = r - l;
            r--;
        } else {
            int k = i - l;
            if (Z[k] < r - i + 1) {
                Z[i] = Z[k];
            } else {
                l = i;
                while (r < n && s[r - l] == s[r]) {
                    r++;
                }
                Z[i] = r - l;
                r--;
            }
        }
    }
    return Z;
}

vector<int> zAlgorithmSearch(string text, string pattern) {
    string combined = pattern + "$" + text;
    vector<int> Z = calculateZ(combined);
    
    vector<int> matches;
    int patternLen = pattern.length();
    
    for (int i = patternLen + 1; i < combined.length(); i++) {
        if (Z[i] == patternLen) {
            matches.push_back(i - patternLen - 1);
        }
    }
    return matches;
}
// Time: O(n + m), Space: O(n + m)
```

### Practice Problems

#### Easy Problems

```cpp path=null start=null
// Problem 1: Rotate Array
void rotateArray(vector<int>& nums, int k) {
    int n = nums.size();
    k %= n;  // Handle k > n
    
    // Method 1: Using extra space
    vector<int> temp(nums);
    for (int i = 0; i < n; i++) {
        nums[(i + k) % n] = temp[i];
    }
    
    // Method 2: Reverse approach (O(1) space)
    // reverse(nums.begin(), nums.end());
    // reverse(nums.begin(), nums.begin() + k);
    // reverse(nums.begin() + k, nums.end());
}
// Time: O(n), Space: O(n) for method 1, O(1) for method 2

// Problem 2: Valid Anagram
bool isAnagram(string s, string t) {
    if (s.length() != t.length()) return false;
    
    unordered_map<char, int> count;
    
    for (char c : s) {
        count[c]++;
    }
    
    for (char c : t) {
        count[c]--;
        if (count[c] < 0) return false;
    }
    
    return true;
}
// Time: O(n), Space: O(1) - at most 26 characters

// Problem 3: First Non-Repeating Character
int firstUniqChar(string s) {
    unordered_map<char, int> count;
    
    // Count frequency
    for (char c : s) {
        count[c]++;
    }
    
    // Find first non-repeating
    for (int i = 0; i < s.length(); i++) {
        if (count[s[i]] == 1) {
            return i;
        }
    }
    return -1;
}
// Time: O(n), Space: O(1)
```

#### Medium Problems

```cpp path=null start=null
// Problem 4: Longest Substring Without Repeating Characters
int lengthOfLongestSubstring(string s) {
    unordered_set<char> charSet;
    int left = 0, maxLen = 0;
    
    for (int right = 0; right < s.length(); right++) {
        while (charSet.find(s[right]) != charSet.end()) {
            charSet.erase(s[left]);
            left++;
        }
        charSet.insert(s[right]);
        maxLen = max(maxLen, right - left + 1);
    }
    
    return maxLen;
}
// Time: O(n), Space: O(min(m, n)) where m is character set size

// Problem 5: Group Anagrams
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> groups;
    
    for (string s : strs) {
        string key = s;
        sort(key.begin(), key.end());
        groups[key].push_back(s);
    }
    
    vector<vector<string>> result;
    for (auto& pair : groups) {
        result.push_back(pair.second);
    }
    
    return result;
}
// Time: O(n * m * log(m)) where n is number of strings, m is max string length
// Space: O(n * m)

// Problem 6: Container With Most Water
int maxArea(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int maxWater = 0;
    
    while (left < right) {
        int width = right - left;
        int currentHeight = min(height[left], height[right]);
        maxWater = max(maxWater, width * currentHeight);
        
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    
    return maxWater;
}
// Time: O(n), Space: O(1)
```

#### Hard Problems

```cpp path=null start=null
// Problem 7: Minimum Window Substring
string minWindow(string s, string t) {
    unordered_map<char, int> need, window;
    
    for (char c : t) {
        need[c]++;
    }
    
    int left = 0, right = 0;
    int valid = 0;
    int start = 0, len = INT_MAX;
    
    while (right < s.length()) {
        char c = s[right];
        right++;
        
        if (need.count(c)) {
            window[c]++;
            if (window[c] == need[c]) {
                valid++;
            }
        }
        
        while (valid == need.size()) {
            if (right - left < len) {
                start = left;
                len = right - left;
            }
            
            char d = s[left];
            left++;
            
            if (need.count(d)) {
                if (window[d] == need[d]) {
                    valid--;
                }
                window[d]--;
            }
        }
    }
    
    return len == INT_MAX ? "" : s.substr(start, len);
}
// Time: O(|s| + |t|), Space: O(|s| + |t|)

// Problem 8: Trapping Rain Water
int trap(vector<int>& height) {
    if (height.empty()) return 0;
    
    int left = 0, right = height.size() - 1;
    int leftMax = 0, rightMax = 0;
    int water = 0;
    
    while (left < right) {
        if (height[left] < height[right]) {
            if (height[left] >= leftMax) {
                leftMax = height[left];
            } else {
                water += leftMax - height[left];
            }
            left++;
        } else {
            if (height[right] >= rightMax) {
                rightMax = height[right];
            } else {
                water += rightMax - height[right];
            }
            right--;
        }
    }
    
    return water;
}
// Time: O(n), Space: O(1)
```

---

# Linked Lists {#linked-lists}

Linked Lists are linear data structures where elements are stored in nodes, and each node contains data and a pointer/reference to the next node. Unlike arrays, linked list elements are not stored in contiguous memory locations.

## Why Linked Lists?

**Advantages:**
- Dynamic size (grow/shrink during runtime)
- Efficient insertion/deletion at beginning: O(1)
- No memory waste (allocate exactly what you need)
- Easy to implement stacks and queues

**Disadvantages:**
- No random access (must traverse from head)
- Extra memory overhead for pointers
- Not cache-friendly (nodes scattered in memory)
- No backward traversal in singly linked lists

## Types of Linked Lists

### 1. Singly Linked List

Each node contains data and a pointer to the next node.

```cpp path=null start=null
// Node structure
struct ListNode {
    int val;
    ListNode* next;
    
    // Constructors
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

// Singly Linked List implementation
class SinglyLinkedList {
private:
    ListNode* head;
    int size;
    
public:
    // Constructor
    SinglyLinkedList() : head(nullptr), size(0) {}
    
    // Destructor
    ~SinglyLinkedList() {
        clear();
    }
    
    // Insert at beginning
    void insertAtHead(int val) {
        ListNode* newNode = new ListNode(val);
        newNode->next = head;
        head = newNode;
        size++;
    }
    // Time: O(1), Space: O(1)
    
    // Insert at end
    void insertAtTail(int val) {
        ListNode* newNode = new ListNode(val);
        
        if (!head) {
            head = newNode;
        } else {
            ListNode* curr = head;
            while (curr->next) {
                curr = curr->next;
            }
            curr->next = newNode;
        }
        size++;
    }
    // Time: O(n), Space: O(1)
    
    // Insert at specific position
    void insertAtPosition(int pos, int val) {
        if (pos < 0 || pos > size) return;
        
        if (pos == 0) {
            insertAtHead(val);
            return;
        }
        
        ListNode* newNode = new ListNode(val);
        ListNode* curr = head;
        
        for (int i = 0; i < pos - 1; i++) {
            curr = curr->next;
        }
        
        newNode->next = curr->next;
        curr->next = newNode;
        size++;
    }
    // Time: O(n), Space: O(1)
    
    // Delete from beginning
    void deleteFromHead() {
        if (!head) return;
        
        ListNode* temp = head;
        head = head->next;
        delete temp;
        size--;
    }
    // Time: O(1), Space: O(1)
    
    // Delete from end
    void deleteFromTail() {
        if (!head) return;
        
        if (!head->next) {
            delete head;
            head = nullptr;
            size--;
            return;
        }
        
        ListNode* curr = head;
        while (curr->next->next) {
            curr = curr->next;
        }
        
        delete curr->next;
        curr->next = nullptr;
        size--;
    }
    // Time: O(n), Space: O(1)
    
    // Delete specific value
    void deleteValue(int val) {
        if (!head) return;
        
        if (head->val == val) {
            deleteFromHead();
            return;
        }
        
        ListNode* curr = head;
        while (curr->next && curr->next->val != val) {
            curr = curr->next;
        }
        
        if (curr->next) {
            ListNode* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
            size--;
        }
    }
    // Time: O(n), Space: O(1)
    
    // Search for value
    bool search(int val) {
        ListNode* curr = head;
        while (curr) {
            if (curr->val == val) return true;
            curr = curr->next;
        }
        return false;
    }
    // Time: O(n), Space: O(1)
    
    // Get size
    int getSize() const {
        return size;
    }
    
    // Check if empty
    bool isEmpty() const {
        return head == nullptr;
    }
    
    // Display list
    void display() {
        ListNode* curr = head;
        while (curr) {
            cout << curr->val;
            if (curr->next) cout << " -> ";
            curr = curr->next;
        }
        cout << " -> NULL" << endl;
    }
    
    // Clear entire list
    void clear() {
        while (head) {
            deleteFromHead();
        }
    }
    
    // Get head pointer (for algorithms)
    ListNode* getHead() {
        return head;
    }
};
```

### 2. Doubly Linked List

Each node contains data and pointers to both next and previous nodes.

```cpp path=null start=null
// Doubly linked list node
struct DoublyListNode {
    int val;
    DoublyListNode* next;
    DoublyListNode* prev;
    
    DoublyListNode() : val(0), next(nullptr), prev(nullptr) {}
    DoublyListNode(int x) : val(x), next(nullptr), prev(nullptr) {}
};

// Doubly Linked List implementation
class DoublyLinkedList {
private:
    DoublyListNode* head;
    DoublyListNode* tail;
    int size;
    
public:
    DoublyLinkedList() : head(nullptr), tail(nullptr), size(0) {}
    
    ~DoublyLinkedList() {
        clear();
    }
    
    // Insert at beginning
    void insertAtHead(int val) {
        DoublyListNode* newNode = new DoublyListNode(val);
        
        if (!head) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        size++;
    }
    // Time: O(1), Space: O(1)
    
    // Insert at end
    void insertAtTail(int val) {
        DoublyListNode* newNode = new DoublyListNode(val);
        
        if (!tail) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        size++;
    }
    // Time: O(1), Space: O(1)
    
    // Delete from beginning
    void deleteFromHead() {
        if (!head) return;
        
        if (head == tail) {
            delete head;
            head = tail = nullptr;
        } else {
            DoublyListNode* temp = head;
            head = head->next;
            head->prev = nullptr;
            delete temp;
        }
        size--;
    }
    // Time: O(1), Space: O(1)
    
    // Delete from end
    void deleteFromTail() {
        if (!tail) return;
        
        if (head == tail) {
            delete tail;
            head = tail = nullptr;
        } else {
            DoublyListNode* temp = tail;
            tail = tail->prev;
            tail->next = nullptr;
            delete temp;
        }
        size--;
    }
    // Time: O(1), Space: O(1)
    
    // Display forward
    void displayForward() {
        DoublyListNode* curr = head;
        cout << "NULL <-> ";
        while (curr) {
            cout << curr->val;
            if (curr->next) cout << " <-> ";
            curr = curr->next;
        }
        cout << " <-> NULL" << endl;
    }
    
    // Display backward
    void displayBackward() {
        DoublyListNode* curr = tail;
        cout << "NULL <-> ";
        while (curr) {
            cout << curr->val;
            if (curr->prev) cout << " <-> ";
            curr = curr->prev;
        }
        cout << " <-> NULL" << endl;
    }
    
    void clear() {
        while (head) {
            deleteFromHead();
        }
    }
};
```

### 3. Circular Linked List

Last node points back to the first node, forming a circle.

```cpp path=null start=null
class CircularLinkedList {
private:
    ListNode* head;
    int size;
    
public:
    CircularLinkedList() : head(nullptr), size(0) {}
    
    void insertAtHead(int val) {
        ListNode* newNode = new ListNode(val);
        
        if (!head) {
            head = newNode;
            newNode->next = head;  // Point to itself
        } else {
            // Find the last node
            ListNode* tail = head;
            while (tail->next != head) {
                tail = tail->next;
            }
            
            newNode->next = head;
            tail->next = newNode;
            head = newNode;
        }
        size++;
    }
    
    void display() {
        if (!head) return;
        
        ListNode* curr = head;
        do {
            cout << curr->val << " -> ";
            curr = curr->next;
        } while (curr != head);
        cout << "(back to head)" << endl;
    }
};
```

## Essential Linked List Algorithms

### 1. Traversal Algorithms

```cpp path=null start=null
// Print all elements
void printList(ListNode* head) {
    ListNode* curr = head;
    while (curr) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}
// Time: O(n), Space: O(1)

// Count nodes
int countNodes(ListNode* head) {
    int count = 0;
    ListNode* curr = head;
    while (curr) {
        count++;
        curr = curr->next;
    }
    return count;
}
// Time: O(n), Space: O(1)

// Find maximum value
int findMax(ListNode* head) {
    if (!head) return INT_MIN;
    
    int maxVal = head->val;
    ListNode* curr = head->next;
    
    while (curr) {
        maxVal = max(maxVal, curr->val);
        curr = curr->next;
    }
    return maxVal;
}
// Time: O(n), Space: O(1)
```

### 2. Reverse a Linked List

```cpp path=null start=null
// Iterative approach
ListNode* reverseIterative(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    ListNode* next = nullptr;
    
    while (curr) {
        next = curr->next;  // Store next node
        curr->next = prev;  // Reverse the link
        prev = curr;        // Move prev forward
        curr = next;        // Move curr forward
    }
    
    return prev;  // prev is the new head
}
// Time: O(n), Space: O(1)

// Recursive approach
ListNode* reverseRecursive(ListNode* head) {
    // Base case
    if (!head || !head->next) {
        return head;
    }
    
    // Recursively reverse the rest
    ListNode* newHead = reverseRecursive(head->next);
    
    // Reverse the current connection
    head->next->next = head;
    head->next = nullptr;
    
    return newHead;
}
// Time: O(n), Space: O(n) - due to recursion stack
```

### 3. Detect Cycle in Linked List (Floyd's Algorithm)

```cpp path=null start=null
// Detect if cycle exists
bool hasCycle(ListNode* head) {
    if (!head || !head->next) return false;
    
    ListNode* slow = head;
    ListNode* fast = head;
    
    while (fast && fast->next) {
        slow = slow->next;        // Move 1 step
        fast = fast->next->next;  // Move 2 steps
        
        if (slow == fast) {
            return true;  // Cycle detected
        }
    }
    
    return false;  // No cycle
}
// Time: O(n), Space: O(1)

// Find the start of the cycle
ListNode* detectCycle(ListNode* head) {
    if (!head || !head->next) return nullptr;
    
    ListNode* slow = head;
    ListNode* fast = head;
    
    // Phase 1: Detect if cycle exists
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        
        if (slow == fast) {
            break;
        }
    }
    
    // No cycle found
    if (!fast || !fast->next) {
        return nullptr;
    }
    
    // Phase 2: Find the start of cycle
    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    
    return slow;  // Start of cycle
}
// Time: O(n), Space: O(1)
```

### 4. Find Middle of Linked List

```cpp path=null start=null
// Find middle node (slow-fast pointer technique)
ListNode* findMiddle(ListNode* head) {
    if (!head) return nullptr;
    
    ListNode* slow = head;
    ListNode* fast = head;
    
    while (fast && fast->next) {
        slow = slow->next;        // Move 1 step
        fast = fast->next->next;  // Move 2 steps
    }
    
    return slow;  // Middle node
}
// Time: O(n), Space: O(1)

// For even number of nodes, this returns the second middle
// To get first middle for even length:
ListNode* findFirstMiddle(ListNode* head) {
    if (!head) return nullptr;
    
    ListNode* slow = head;
    ListNode* fast = head->next;  // Start fast one step ahead
    
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return slow;
}
// Time: O(n), Space: O(1)
```

### 5. Merge Two Sorted Lists

```cpp path=null start=null
// Iterative approach
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* dummy = new ListNode(0);
    ListNode* curr = dummy;
    
    while (l1 && l2) {
        if (l1->val <= l2->val) {
            curr->next = l1;
            l1 = l1->next;
        } else {
            curr->next = l2;
            l2 = l2->next;
        }
        curr = curr->next;
    }
    
    // Attach remaining nodes
    curr->next = l1 ? l1 : l2;
    
    ListNode* result = dummy->next;
    delete dummy;
    return result;
}
// Time: O(n + m), Space: O(1)

// Recursive approach
ListNode* mergeTwoListsRecursive(ListNode* l1, ListNode* l2) {
    if (!l1) return l2;
    if (!l2) return l1;
    
    if (l1->val <= l2->val) {
        l1->next = mergeTwoListsRecursive(l1->next, l2);
        return l1;
    } else {
        l2->next = mergeTwoListsRecursive(l1, l2->next);
        return l2;
    }
}
// Time: O(n + m), Space: O(n + m) - recursion stack
```

### 6. Remove Nth Node From End

```cpp path=null start=null
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    
    ListNode* first = dummy;
    ListNode* second = dummy;
    
    // Move first n+1 steps ahead
    for (int i = 0; i <= n; i++) {
        first = first->next;
    }
    
    // Move both pointers until first reaches end
    while (first) {
        first = first->next;
        second = second->next;
    }
    
    // Remove the nth node from end
    ListNode* nodeToDelete = second->next;
    second->next = second->next->next;
    delete nodeToDelete;
    
    ListNode* result = dummy->next;
    delete dummy;
    return result;
}
// Time: O(n), Space: O(1)
```

### 7. Check if Palindrome

```cpp path=null start=null
bool isPalindrome(ListNode* head) {
    if (!head || !head->next) return true;
    
    // Step 1: Find middle
    ListNode* slow = head;
    ListNode* fast = head;
    
    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    // Step 2: Reverse second half
    ListNode* secondHalf = reverseIterative(slow->next);
    
    // Step 3: Compare first half with reversed second half
    ListNode* firstHalf = head;
    ListNode* reversedSecond = secondHalf;
    bool result = true;
    
    while (reversedSecond) {
        if (firstHalf->val != reversedSecond->val) {
            result = false;
            break;
        }
        firstHalf = firstHalf->next;
        reversedSecond = reversedSecond->next;
    }
    
    // Step 4: Restore the list (optional)
    slow->next = reverseIterative(secondHalf);
    
    return result;
}
// Time: O(n), Space: O(1)
```

### 8. Intersection of Two Linked Lists

```cpp path=null start=null
ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
    if (!headA || !headB) return nullptr;
    
    ListNode* pA = headA;
    ListNode* pB = headB;
    
    // When pA reaches end, redirect to headB
    // When pB reaches end, redirect to headA
    // If they intersect, they will meet
    // If no intersection, both will be null after 2 iterations
    
    while (pA != pB) {
        pA = pA ? pA->next : headB;
        pB = pB ? pB->next : headA;
    }
    
    return pA;  // Either intersection node or null
}
// Time: O(m + n), Space: O(1)
```

## Advanced Linked List Problems

### 1. Add Two Numbers (Represented as Linked Lists)

```cpp path=null start=null
// Numbers stored in reverse order: 342 -> 2->4->3, 465 -> 5->6->4
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* dummy = new ListNode(0);
    ListNode* curr = dummy;
    int carry = 0;
    
    while (l1 || l2 || carry) {
        int sum = carry;
        
        if (l1) {
            sum += l1->val;
            l1 = l1->next;
        }
        
        if (l2) {
            sum += l2->val;
            l2 = l2->next;
        }
        
        carry = sum / 10;
        curr->next = new ListNode(sum % 10);
        curr = curr->next;
    }
    
    ListNode* result = dummy->next;
    delete dummy;
    return result;
}
// Time: O(max(m, n)), Space: O(max(m, n))
```

### 2. Rotate List

```cpp path=null start=null
ListNode* rotateRight(ListNode* head, int k) {
    if (!head || !head->next || k == 0) return head;
    
    // Step 1: Find length and make it circular
    ListNode* tail = head;
    int length = 1;
    
    while (tail->next) {
        tail = tail->next;
        length++;
    }
    
    tail->next = head;  // Make circular
    
    // Step 2: Find new tail (length - k % length - 1)
    k = k % length;
    int stepsToNewTail = length - k;
    
    ListNode* newTail = head;
    for (int i = 0; i < stepsToNewTail - 1; i++) {
        newTail = newTail->next;
    }
    
    // Step 3: Break the circle
    ListNode* newHead = newTail->next;
    newTail->next = nullptr;
    
    return newHead;
}
// Time: O(n), Space: O(1)
```

### 3. Copy List with Random Pointer

```cpp path=null start=null
struct RandomListNode {
    int val;
    RandomListNode* next;
    RandomListNode* random;
    
    RandomListNode(int x) : val(x), next(nullptr), random(nullptr) {}
};

RandomListNode* copyRandomList(RandomListNode* head) {
    if (!head) return nullptr;
    
    // Step 1: Create new nodes and interweave with original
    RandomListNode* curr = head;
    while (curr) {
        RandomListNode* newNode = new RandomListNode(curr->val);
        newNode->next = curr->next;
        curr->next = newNode;
        curr = newNode->next;
    }
    
    // Step 2: Set random pointers for new nodes
    curr = head;
    while (curr) {
        if (curr->random) {
            curr->next->random = curr->random->next;
        }
        curr = curr->next->next;
    }
    
    // Step 3: Separate the two lists
    RandomListNode* dummy = new RandomListNode(0);
    RandomListNode* copy = dummy;
    curr = head;
    
    while (curr) {
        copy->next = curr->next;
        curr->next = curr->next->next;
        curr = curr->next;
        copy = copy->next;
    }
    
    RandomListNode* result = dummy->next;
    delete dummy;
    return result;
}
// Time: O(n), Space: O(1)
```

## Practice Problems

### Easy Level

```cpp path=null start=null
// Problem 1: Delete Node in Linked List (given only node to delete)
void deleteNode(ListNode* node) {
    // Copy next node's value to current node
    node->val = node->next->val;
    
    // Delete the next node
    ListNode* temp = node->next;
    node->next = node->next->next;
    delete temp;
}
// Time: O(1), Space: O(1)

// Problem 2: Remove Duplicates from Sorted List
ListNode* deleteDuplicates(ListNode* head) {
    ListNode* curr = head;
    
    while (curr && curr->next) {
        if (curr->val == curr->next->val) {
            ListNode* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        } else {
            curr = curr->next;
        }
    }
    
    return head;
}
// Time: O(n), Space: O(1)

// Problem 3: Convert Binary Number in Linked List to Integer
int getDecimalValue(ListNode* head) {
    int result = 0;
    
    while (head) {
        result = result * 2 + head->val;
        head = head->next;
    }
    
    return result;
}
// Time: O(n), Space: O(1)
```

### Medium Level

```cpp path=null start=null
// Problem 4: Remove Duplicates from Sorted List II
ListNode* deleteDuplicatesII(ListNode* head) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* prev = dummy;
    
    while (head) {
        if (head->next && head->val == head->next->val) {
            int duplicateVal = head->val;
            
            // Skip all nodes with duplicate value
            while (head && head->val == duplicateVal) {
                ListNode* temp = head;
                head = head->next;
                delete temp;
            }
            
            prev->next = head;
        } else {
            prev = head;
            head = head->next;
        }
    }
    
    ListNode* result = dummy->next;
    delete dummy;
    return result;
}
// Time: O(n), Space: O(1)

// Problem 5: Partition List
ListNode* partition(ListNode* head, int x) {
    ListNode* beforeHead = new ListNode(0);
    ListNode* afterHead = new ListNode(0);
    
    ListNode* before = beforeHead;
    ListNode* after = afterHead;
    
    while (head) {
        if (head->val < x) {
            before->next = head;
            before = before->next;
        } else {
            after->next = head;
            after = after->next;
        }
        head = head->next;
    }
    
    after->next = nullptr;
    before->next = afterHead->next;
    
    ListNode* result = beforeHead->next;
    delete beforeHead;
    delete afterHead;
    return result;
}
// Time: O(n), Space: O(1)

// Problem 6: Swap Nodes in Pairs
ListNode* swapPairs(ListNode* head) {
    if (!head || !head->next) return head;
    
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* prev = dummy;
    
    while (prev->next && prev->next->next) {
        ListNode* first = prev->next;
        ListNode* second = prev->next->next;
        
        // Perform swap
        prev->next = second;
        first->next = second->next;
        second->next = first;
        
        prev = first;
    }
    
    ListNode* result = dummy->next;
    delete dummy;
    return result;
}
// Time: O(n), Space: O(1)
```

### Hard Level

```cpp path=null start=null
// Problem 7: Reverse Nodes in k-Group
ListNode* reverseKGroup(ListNode* head, int k) {
    if (!head || k == 1) return head;
    
    // Check if we have k nodes
    ListNode* curr = head;
    int count = 0;
    while (curr && count < k) {
        curr = curr->next;
        count++;
    }
    
    if (count == k) {
        // Reverse first k nodes
        curr = reverseKGroup(curr, k);
        
        // Reverse current group
        while (count > 0) {
            ListNode* temp = head->next;
            head->next = curr;
            curr = head;
            head = temp;
            count--;
        }
        head = curr;
    }
    
    return head;
}
// Time: O(n), Space: O(n/k) - recursion stack

// Problem 8: Merge k Sorted Lists
ListNode* mergeKLists(vector<ListNode*>& lists) {
    if (lists.empty()) return nullptr;
    
    while (lists.size() > 1) {
        vector<ListNode*> mergedLists;
        
        for (int i = 0; i < lists.size(); i += 2) {
            ListNode* l1 = lists[i];
            ListNode* l2 = (i + 1 < lists.size()) ? lists[i + 1] : nullptr;
            mergedLists.push_back(mergeTwoLists(l1, l2));
        }
        
        lists = mergedLists;
    }
    
    return lists[0];
}
// Time: O(n * log k), Space: O(1) - where n is total nodes, k is number of lists
```

# Stacks and Queues {#stacks}

Stacks and Queues are fundamental Abstract Data Types (ADTs) that are widely used in programming and computer science. They provide controlled access to elements based on specific ordering principles.

## Stack Data Structure

### What is a Stack?

A stack is a linear data structure that follows the **LIFO (Last In, First Out)** principle. The last element added to the stack is the first one to be removed.

**Key Operations:**
- **Push**: Add element to the top
- **Pop**: Remove element from the top 
- **Top/Peek**: Get the top element without removing it
- **Empty**: Check if stack is empty
- **Size**: Get number of elements

### Stack Implementation

#### 1. Array-based Stack

```cpp path=null start=null
class ArrayStack {
private:
    int* arr;
    int top;
    int capacity;
    
public:
    // Constructor
    ArrayStack(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }
    
    // Destructor
    ~ArrayStack() {
        delete[] arr;
    }
    
    // Push element onto stack
    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = x;
    }
    // Time: O(1), Space: O(1)
    
    // Pop element from stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }
    // Time: O(1), Space: O(1)
    
    // Get top element
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }
    // Time: O(1), Space: O(1)
    
    // Check if stack is empty
    bool isEmpty() {
        return top == -1;
    }
    
    // Check if stack is full
    bool isFull() {
        return top == capacity - 1;
    }
    
    // Get size
    int size() {
        return top + 1;
    }
    
    // Display stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        
        cout << "Stack: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << "<- top" << endl;
    }
};
```

#### 2. Linked List-based Stack

```cpp path=null start=null
class LinkedStack {
private:
    ListNode* top;
    int size;
    
public:
    LinkedStack() : top(nullptr), size(0) {}
    
    ~LinkedStack() {
        while (!isEmpty()) {
            pop();
        }
    }
    
    // Push element
    void push(int x) {
        ListNode* newNode = new ListNode(x);
        newNode->next = top;
        top = newNode;
        size++;
    }
    // Time: O(1), Space: O(1)
    
    // Pop element
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        
        ListNode* temp = top;
        top = top->next;
        delete temp;
        size--;
    }
    // Time: O(1), Space: O(1)
    
    // Get top element
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return top->val;
    }
    // Time: O(1), Space: O(1)
    
    bool isEmpty() {
        return top == nullptr;
    }
    
    int getSize() {
        return size;
    }
};
```

#### 3. STL Stack

```cpp path=null start=null
#include <stack>

void stackSTLExample() {
    stack<int> st;
    
    // Push elements
    st.push(10);
    st.push(20);
    st.push(30);
    
    // Access top element
    cout << "Top: " << st.top() << endl;  // 30
    
    // Pop element
    st.pop();  // Removes 30
    
    // Check size and empty
    cout << "Size: " << st.size() << endl;  // 2
    cout << "Empty: " << st.empty() << endl;  // false
    
    // Display all elements
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
```

### Stack Applications

#### 1. Balanced Parentheses Check

```cpp path=null start=null
bool isValidParentheses(string s) {
    stack<char> st;
    
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else {
            if (st.empty()) return false;
            
            char top = st.top();
            st.pop();
            
            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{')) {
                return false;
            }
        }
    }
    
    return st.empty();
}
// Time: O(n), Space: O(n)
```

#### 2. Infix to Postfix Conversion

```cpp path=null start=null
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

bool isRightAssociative(char op) {
    return op == '^';
}

string infixToPostfix(string infix) {
    stack<char> operators;
    string postfix = "";
    
    for (char c : infix) {
        if (isalnum(c)) {
            postfix += c;
        }
        else if (c == '(') {
            operators.push(c);
        }
        else if (c == ')') {
            while (!operators.empty() && operators.top() != '(') {
                postfix += operators.top();
                operators.pop();
            }
            operators.pop();  // Remove '('
        }
        else {  // Operator
            while (!operators.empty() && 
                   operators.top() != '(' &&
                   (precedence(operators.top()) > precedence(c) ||
                    (precedence(operators.top()) == precedence(c) && !isRightAssociative(c)))) {
                postfix += operators.top();
                operators.pop();
            }
            operators.push(c);
        }
    }
    
    while (!operators.empty()) {
        postfix += operators.top();
        operators.pop();
    }
    
    return postfix;
}
// Time: O(n), Space: O(n)
```

#### 3. Evaluate Postfix Expression

```cpp path=null start=null
int evaluatePostfix(string postfix) {
    stack<int> operands;
    
    for (char c : postfix) {
        if (isdigit(c)) {
            operands.push(c - '0');
        } else {
            int operand2 = operands.top(); operands.pop();
            int operand1 = operands.top(); operands.pop();
            
            int result;
            switch (c) {
                case '+': result = operand1 + operand2; break;
                case '-': result = operand1 - operand2; break;
                case '*': result = operand1 * operand2; break;
                case '/': result = operand1 / operand2; break;
                default: result = 0;
            }
            
            operands.push(result);
        }
    }
    
    return operands.top();
}
// Time: O(n), Space: O(n)
```

#### 4. Next Greater Element

```cpp path=null start=null
vector<int> nextGreaterElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, -1);
    stack<int> st;  // Stack to store indices
    
    for (int i = 0; i < n; i++) {
        while (!st.empty() && nums[st.top()] < nums[i]) {
            result[st.top()] = nums[i];
            st.pop();
        }
        st.push(i);
    }
    
    return result;
}
// Time: O(n), Space: O(n)
```

#### 5. Largest Rectangle in Histogram

```cpp path=null start=null
int largestRectangleArea(vector<int>& heights) {
    stack<int> st;
    int maxArea = 0;
    int n = heights.size();
    
    for (int i = 0; i <= n; i++) {
        int currentHeight = (i == n) ? 0 : heights[i];
        
        while (!st.empty() && heights[st.top()] > currentHeight) {
            int height = heights[st.top()];
            st.pop();
            
            int width = st.empty() ? i : i - st.top() - 1;
            maxArea = max(maxArea, height * width);
        }
        
        st.push(i);
    }
    
    return maxArea;
}
// Time: O(n), Space: O(n)
```

## Queue Data Structure

### What is a Queue?

A queue is a linear data structure that follows the **FIFO (First In, First Out)** principle. The first element added to the queue is the first one to be removed.

**Key Operations:**
- **Enqueue**: Add element to the rear
- **Dequeue**: Remove element from the front
- **Front**: Get the front element without removing it
- **Rear**: Get the rear element without removing it
- **Empty**: Check if queue is empty
- **Size**: Get number of elements

### Queue Implementation

#### 1. Array-based Queue (Circular)

```cpp path=null start=null
class CircularQueue {
private:
    int* arr;
    int front;
    int rear;
    int capacity;
    int size;
    
public:
    CircularQueue(int k) {
        capacity = k;
        arr = new int[capacity];
        front = 0;
        rear = -1;
        size = 0;
    }
    
    ~CircularQueue() {
        delete[] arr;
    }
    
    // Add element to rear
    bool enqueue(int value) {
        if (isFull()) {
            return false;
        }
        
        rear = (rear + 1) % capacity;
        arr[rear] = value;
        size++;
        return true;
    }
    // Time: O(1), Space: O(1)
    
    // Remove element from front
    bool dequeue() {
        if (isEmpty()) {
            return false;
        }
        
        front = (front + 1) % capacity;
        size--;
        return true;
    }
    // Time: O(1), Space: O(1)
    
    // Get front element
    int Front() {
        if (isEmpty()) {
            return -1;
        }
        return arr[front];
    }
    
    // Get rear element
    int Rear() {
        if (isEmpty()) {
            return -1;
        }
        return arr[rear];
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == capacity;
    }
    
    int getSize() {
        return size;
    }
};
```

#### 2. Linked List-based Queue

```cpp path=null start=null
class LinkedQueue {
private:
    ListNode* front;
    ListNode* rear;
    int size;
    
public:
    LinkedQueue() : front(nullptr), rear(nullptr), size(0) {}
    
    ~LinkedQueue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
    
    // Add element to rear
    void enqueue(int x) {
        ListNode* newNode = new ListNode(x);
        
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        size++;
    }
    // Time: O(1), Space: O(1)
    
    // Remove element from front
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        
        ListNode* temp = front;
        front = front->next;
        
        if (front == nullptr) {
            rear = nullptr;
        }
        
        delete temp;
        size--;
    }
    // Time: O(1), Space: O(1)
    
    int frontElement() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return front->val;
    }
    
    int rearElement() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return rear->val;
    }
    
    bool isEmpty() {
        return front == nullptr;
    }
    
    int getSize() {
        return size;
    }
};
```

#### 3. STL Queue

```cpp path=null start=null
#include <queue>

void queueSTLExample() {
    queue<int> q;
    
    // Enqueue elements
    q.push(10);
    q.push(20);
    q.push(30);
    
    // Access front and back
    cout << "Front: " << q.front() << endl;  // 10
    cout << "Back: " << q.back() << endl;    // 30
    
    // Dequeue element
    q.pop();  // Removes 10
    
    // Check size and empty
    cout << "Size: " << q.size() << endl;   // 2
    cout << "Empty: " << q.empty() << endl; // false
    
    // Process all elements
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
```

### Special Types of Queues

#### 1. Deque (Double-ended Queue)

```cpp path=null start=null
#include <deque>

void dequeExample() {
    deque<int> dq;
    
    // Add to front and back
    dq.push_back(10);
    dq.push_front(5);
    dq.push_back(20);
    
    // Access elements
    cout << "Front: " << dq.front() << endl;  // 5
    cout << "Back: " << dq.back() << endl;    // 20
    cout << "At index 1: " << dq[1] << endl;  // 10
    
    // Remove from front and back
    dq.pop_front();
    dq.pop_back();
    
    cout << "Size: " << dq.size() << endl;   // 1
}
```

#### 2. Priority Queue (Max Heap by default)

```cpp path=null start=null
#include <queue>

void priorityQueueExample() {
    // Max heap (default)
    priority_queue<int> maxHeap;
    maxHeap.push(30);
    maxHeap.push(10);
    maxHeap.push(20);
    
    cout << "Max heap top: " << maxHeap.top() << endl;  // 30
    
    // Min heap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(30);
    minHeap.push(10);
    minHeap.push(20);
    
    cout << "Min heap top: " << minHeap.top() << endl;  // 10
    
    // Custom comparator
    auto cmp = [](int a, int b) { return a > b; };
    priority_queue<int, vector<int>, decltype(cmp)> customPQ(cmp);
}
```

### Queue Applications

#### 1. Level Order Traversal (BFS)

```cpp path=null start=null
vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> result;
    if (!root) return result;
    
    queue<TreeNode*> q;
    q.push(root);
    
    while (!q.empty()) {
        int levelSize = q.size();
        vector<int> currentLevel;
        
        for (int i = 0; i < levelSize; i++) {
            TreeNode* node = q.front();
            q.pop();
            
            currentLevel.push_back(node->val);
            
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        
        result.push_back(currentLevel);
    }
    
    return result;
}
// Time: O(n), Space: O(w) where w is maximum width
```

#### 2. Sliding Window Maximum

```cpp path=null start=null
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    deque<int> dq;  // Store indices
    vector<int> result;
    
    for (int i = 0; i < nums.size(); i++) {
        // Remove elements outside current window
        while (!dq.empty() && dq.front() < i - k + 1) {
            dq.pop_front();
        }
        
        // Remove elements smaller than current element
        while (!dq.empty() && nums[dq.back()] < nums[i]) {
            dq.pop_back();
        }
        
        dq.push_back(i);
        
        // Add to result when window is complete
        if (i >= k - 1) {
            result.push_back(nums[dq.front()]);
        }
    }
    
    return result;
}
// Time: O(n), Space: O(k)
```

#### 3. First Non-Repeating Character in Stream

```cpp path=null start=null
class FirstNonRepeating {
private:
    queue<char> q;
    unordered_map<char, int> freq;
    
public:
    char firstNonRepeatingChar(char ch) {
        // Update frequency
        freq[ch]++;
        q.push(ch);
        
        // Remove characters from front that are repeating
        while (!q.empty() && freq[q.front()] > 1) {
            q.pop();
        }
        
        return q.empty() ? '#' : q.front();
    }
};
// Time: O(1) per operation, Space: O(n)
```

#### 4. Implement Stack using Queues

```cpp path=null start=null
class MyStack {
private:
    queue<int> q1, q2;
    
public:
    void push(int x) {
        q2.push(x);
        
        // Move all elements from q1 to q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        
        // Swap q1 and q2
        swap(q1, q2);
    }
    // Time: O(n), Space: O(1)
    
    int pop() {
        if (q1.empty()) return -1;
        
        int top = q1.front();
        q1.pop();
        return top;
    }
    // Time: O(1), Space: O(1)
    
    int top() {
        return q1.empty() ? -1 : q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};
```

#### 5. Implement Queue using Stacks

```cpp path=null start=null
class MyQueue {
private:
    stack<int> inStack, outStack;
    
public:
    void push(int x) {
        inStack.push(x);
    }
    // Time: O(1), Space: O(1)
    
    int pop() {
        peek();  // Ensure outStack has elements
        if (outStack.empty()) return -1;
        
        int front = outStack.top();
        outStack.pop();
        return front;
    }
    // Time: O(1) amortized, Space: O(1)
    
    int peek() {
        if (outStack.empty()) {
            while (!inStack.empty()) {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
        return outStack.empty() ? -1 : outStack.top();
    }
    // Time: O(1) amortized, Space: O(1)
    
    bool empty() {
        return inStack.empty() && outStack.empty();
    }
};
```

### Advanced Queue Problems

#### 1. LRU Cache Implementation

```cpp path=null start=null
class LRUCache {
private:
    int capacity;
    list<pair<int, int>> cache;  // key, value pairs
    unordered_map<int, list<pair<int, int>>::iterator> map;
    
public:
    LRUCache(int capacity) : capacity(capacity) {}
    
    int get(int key) {
        if (map.find(key) == map.end()) {
            return -1;
        }
        
        // Move to front (most recently used)
        auto it = map[key];
        int value = it->second;
        cache.erase(it);
        cache.push_front({key, value});
        map[key] = cache.begin();
        
        return value;
    }
    
    void put(int key, int value) {
        if (map.find(key) != map.end()) {
            // Update existing key
            cache.erase(map[key]);
            cache.push_front({key, value});
            map[key] = cache.begin();
        } else {
            // Add new key
            if (cache.size() >= capacity) {
                // Remove least recently used
                auto last = cache.back();
                map.erase(last.first);
                cache.pop_back();
            }
            
            cache.push_front({key, value});
            map[key] = cache.begin();
        }
    }
};
// Time: O(1) for both operations, Space: O(capacity)
```

#### 2. Design Circular Queue

```cpp path=null start=null
class MyCircularQueue {
private:
    vector<int> data;
    int head;
    int tail;
    int size;
    
public:
    MyCircularQueue(int k) {
        data.resize(k);
        head = -1;
        tail = -1;
        size = k;
    }
    
    bool enQueue(int value) {
        if (isFull()) return false;
        
        if (isEmpty()) {
            head = 0;
        }
        tail = (tail + 1) % size;
        data[tail] = value;
        return true;
    }
    
    bool deQueue() {
        if (isEmpty()) return false;
        
        if (head == tail) {
            head = -1;
            tail = -1;
        } else {
            head = (head + 1) % size;
        }
        return true;
    }
    
    int Front() {
        return isEmpty() ? -1 : data[head];
    }
    
    int Rear() {
        return isEmpty() ? -1 : data[tail];
    }
    
    bool isEmpty() {
        return head == -1;
    }
    
    bool isFull() {
        return ((tail + 1) % size) == head;
    }
};
```

## Practice Problems

### Easy Level

```cpp path=null start=null
// Problem 1: Min Stack
class MinStack {
private:
    stack<int> st;
    stack<int> minSt;
    
public:
    void push(int val) {
        st.push(val);
        if (minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        }
    }
    
    void pop() {
        if (!st.empty()) {
            if (st.top() == minSt.top()) {
                minSt.pop();
            }
            st.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};
// Time: O(1) for all operations, Space: O(n)

// Problem 2: Remove All Adjacent Duplicates
string removeDuplicates(string s) {
    stack<char> st;
    
    for (char c : s) {
        if (!st.empty() && st.top() == c) {
            st.pop();
        } else {
            st.push(c);
        }
    }
    
    string result = "";
    while (!st.empty()) {
        result = st.top() + result;
        st.pop();
    }
    
    return result;
}
// Time: O(n), Space: O(n)

// Problem 3: Baseball Game
int calPoints(vector<string>& ops) {
    stack<int> scores;
    
    for (string op : ops) {
        if (op == "+") {
            int top = scores.top();
            scores.pop();
            int newScore = top + scores.top();
            scores.push(top);  // Put back
            scores.push(newScore);
        } else if (op == "D") {
            scores.push(2 * scores.top());
        } else if (op == "C") {
            scores.pop();
        } else {
            scores.push(stoi(op));
        }
    }
    
    int sum = 0;
    while (!scores.empty()) {
        sum += scores.top();
        scores.pop();
    }
    
    return sum;
}
// Time: O(n), Space: O(n)
```

### Medium Level

```cpp path=null start=null
// Problem 4: Daily Temperatures
vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n = temperatures.size();
    vector<int> result(n, 0);
    stack<int> st;  // Stack of indices
    
    for (int i = 0; i < n; i++) {
        while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
            int index = st.top();
            st.pop();
            result[index] = i - index;
        }
        st.push(i);
    }
    
    return result;
}
// Time: O(n), Space: O(n)

// Problem 5: Decode String
string decodeString(string s) {
    stack<int> nums;
    stack<string> strs;
    string currentStr = "";
    int currentNum = 0;
    
    for (char c : s) {
        if (isdigit(c)) {
            currentNum = currentNum * 10 + (c - '0');
        } else if (c == '[') {
            nums.push(currentNum);
            strs.push(currentStr);
            currentNum = 0;
            currentStr = "";
        } else if (c == ']') {
            int num = nums.top(); nums.pop();
            string prevStr = strs.top(); strs.pop();
            
            string temp = "";
            for (int i = 0; i < num; i++) {
                temp += currentStr;
            }
            currentStr = prevStr + temp;
        } else {
            currentStr += c;
        }
    }
    
    return currentStr;
}
// Time: O(n * m) where m is max repeat count, Space: O(n)

// Problem 6: Asteroid Collision
vector<int> asteroidCollision(vector<int>& asteroids) {
    stack<int> st;
    
    for (int asteroid : asteroids) {
        bool destroyed = false;
        
        while (!st.empty() && st.top() > 0 && asteroid < 0) {
            if (st.top() < -asteroid) {
                st.pop();
            } else if (st.top() == -asteroid) {
                st.pop();
                destroyed = true;
                break;
            } else {
                destroyed = true;
                break;
            }
        }
        
        if (!destroyed) {
            st.push(asteroid);
        }
    }
    
    vector<int> result;
    while (!st.empty()) {
        result.push_back(st.top());
        st.pop();
    }
    
    reverse(result.begin(), result.end());
    return result;
}
// Time: O(n), Space: O(n)
```

### Hard Level

```cpp path=null start=null
// Problem 7: Longest Valid Parentheses
int longestValidParentheses(string s) {
    stack<int> st;
    st.push(-1);
    int maxLen = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            st.push(i);
        } else {
            st.pop();
            if (st.empty()) {
                st.push(i);
            } else {
                maxLen = max(maxLen, i - st.top());
            }
        }
    }
    
    return maxLen;
}
// Time: O(n), Space: O(n)

// Problem 8: Basic Calculator
int calculate(string s) {
    stack<int> st;
    int num = 0;
    char op = '+';
    
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        
        if (isdigit(c)) {
            num = num * 10 + (c - '0');
        }
        
        if (c == '+' || c == '-' || c == '*' || c == '/' || i == s.length() - 1) {
            if (op == '+') {
                st.push(num);
            } else if (op == '-') {
                st.push(-num);
            } else if (op == '*') {
                int top = st.top(); st.pop();
                st.push(top * num);
            } else if (op == '/') {
                int top = st.top(); st.pop();
                st.push(top / num);
            }
            
            op = c;
            num = 0;
        }
    }
    
    int result = 0;
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
    
    return result;
}
// Time: O(n), Space: O(n)
```

---

# Trees {#trees}

Trees are hierarchical data structures consisting of nodes connected by edges. They are fundamental in computer science and form the basis for many advanced data structures and algorithms.

## Tree Terminology

**Essential Terms:**
- **Node**: Basic unit containing data
- **Root**: Topmost node (no parent)
- **Parent**: Node with children
- **Child**: Node with a parent
- **Leaf**: Node with no children
- **Subtree**: Tree formed by a node and its descendants
- **Depth**: Distance from root to a node
- **Height**: Maximum depth in the tree
- **Level**: All nodes at same depth

## Binary Trees

### What is a Binary Tree?

A binary tree is a tree where each node has **at most two children**, called left child and right child.

### Binary Tree Node Structure

```cpp path=null start=null
// Binary Tree Node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    
    // Constructors
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};
```

### Binary Tree Implementation

```cpp path=null start=null
class BinaryTree {
private:
    TreeNode* root;
    
public:
    BinaryTree() : root(nullptr) {}
    
    ~BinaryTree() {
        deleteTree(root);
    }
    
    // Helper function to delete entire tree
    void deleteTree(TreeNode* node) {
        if (!node) return;
        deleteTree(node->left);
        deleteTree(node->right);
        delete node;
    }
    
    // Insert node (level order insertion)
    void insert(int val) {
        if (!root) {
            root = new TreeNode(val);
            return;
        }
        
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();
            
            if (!curr->left) {
                curr->left = new TreeNode(val);
                return;
            } else if (!curr->right) {
                curr->right = new TreeNode(val);
                return;
            } else {
                q.push(curr->left);
                q.push(curr->right);
            }
        }
    }
    
    TreeNode* getRoot() {
        return root;
    }
};
```

### Tree Traversals

#### 1. Depth-First Traversals

```cpp path=null start=null
// Preorder Traversal (Root -> Left -> Right)
void preorderTraversal(TreeNode* root) {
    if (!root) return;
    
    cout << root->val << " ";  // Process root
    preorderTraversal(root->left);   // Traverse left
    preorderTraversal(root->right);  // Traverse right
}
// Time: O(n), Space: O(h) where h is height

// Inorder Traversal (Left -> Root -> Right)
void inorderTraversal(TreeNode* root) {
    if (!root) return;
    
    inorderTraversal(root->left);   // Traverse left
    cout << root->val << " ";       // Process root
    inorderTraversal(root->right);  // Traverse right
}
// Time: O(n), Space: O(h)

// Postorder Traversal (Left -> Right -> Root)
void postorderTraversal(TreeNode* root) {
    if (!root) return;
    
    postorderTraversal(root->left);   // Traverse left
    postorderTraversal(root->right);  // Traverse right
    cout << root->val << " ";        // Process root
}
// Time: O(n), Space: O(h)
```

#### 2. Iterative Traversals

```cpp path=null start=null
// Iterative Preorder
vector<int> preorderIterative(TreeNode* root) {
    vector<int> result;
    if (!root) return result;
    
    stack<TreeNode*> st;
    st.push(root);
    
    while (!st.empty()) {
        TreeNode* curr = st.top();
        st.pop();
        
        result.push_back(curr->val);
        
        // Push right first, then left (stack is LIFO)
        if (curr->right) st.push(curr->right);
        if (curr->left) st.push(curr->left);
    }
    
    return result;
}
// Time: O(n), Space: O(h)

// Iterative Inorder
vector<int> inorderIterative(TreeNode* root) {
    vector<int> result;
    stack<TreeNode*> st;
    TreeNode* curr = root;
    
    while (curr || !st.empty()) {
        // Go to leftmost node
        while (curr) {
            st.push(curr);
            curr = curr->left;
        }
        
        // Process current node
        curr = st.top();
        st.pop();
        result.push_back(curr->val);
        
        // Move to right subtree
        curr = curr->right;
    }
    
    return result;
}
// Time: O(n), Space: O(h)

// Iterative Postorder (Two Stack Method)
vector<int> postorderIterative(TreeNode* root) {
    vector<int> result;
    if (!root) return result;
    
    stack<TreeNode*> st1, st2;
    st1.push(root);
    
    while (!st1.empty()) {
        TreeNode* curr = st1.top();
        st1.pop();
        st2.push(curr);
        
        if (curr->left) st1.push(curr->left);
        if (curr->right) st1.push(curr->right);
    }
    
    while (!st2.empty()) {
        result.push_back(st2.top()->val);
        st2.pop();
    }
    
    return result;
}
// Time: O(n), Space: O(h)
```

#### 3. Level Order Traversal (BFS)

```cpp path=null start=null
// Level Order Traversal
vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> result;
    if (!root) return result;
    
    queue<TreeNode*> q;
    q.push(root);
    
    while (!q.empty()) {
        int levelSize = q.size();
        vector<int> currentLevel;
        
        for (int i = 0; i < levelSize; i++) {
            TreeNode* node = q.front();
            q.pop();
            
            currentLevel.push_back(node->val);
            
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        
        result.push_back(currentLevel);
    }
    
    return result;
}
// Time: O(n), Space: O(w) where w is maximum width

// Zigzag Level Order
vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> result;
    if (!root) return result;
    
    queue<TreeNode*> q;
    q.push(root);
    bool leftToRight = true;
    
    while (!q.empty()) {
        int levelSize = q.size();
        vector<int> currentLevel(levelSize);
        
        for (int i = 0; i < levelSize; i++) {
            TreeNode* node = q.front();
            q.pop();
            
            int index = leftToRight ? i : (levelSize - 1 - i);
            currentLevel[index] = node->val;
            
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        
        result.push_back(currentLevel);
        leftToRight = !leftToRight;
    }
    
    return result;
}
// Time: O(n), Space: O(w)
```

### Binary Tree Properties and Algorithms

#### 1. Tree Properties

```cpp path=null start=null
// Calculate height of tree
int height(TreeNode* root) {
    if (!root) return 0;
    
    return 1 + max(height(root->left), height(root->right));
}
// Time: O(n), Space: O(h)

// Count total nodes
int countNodes(TreeNode* root) {
    if (!root) return 0;
    
    return 1 + countNodes(root->left) + countNodes(root->right);
}
// Time: O(n), Space: O(h)

// Count leaf nodes
int countLeaves(TreeNode* root) {
    if (!root) return 0;
    
    if (!root->left && !root->right) {
        return 1;
    }
    
    return countLeaves(root->left) + countLeaves(root->right);
}
// Time: O(n), Space: O(h)

// Calculate diameter (longest path between any two nodes)
int diameter(TreeNode* root) {
    int maxDiameter = 0;
    
    function<int(TreeNode*)> dfs = [&](TreeNode* node) -> int {
        if (!node) return 0;
        
        int left = dfs(node->left);
        int right = dfs(node->right);
        
        maxDiameter = max(maxDiameter, left + right);
        
        return 1 + max(left, right);
    };
    
    dfs(root);
    return maxDiameter;
}
// Time: O(n), Space: O(h)
```

#### 2. Tree Validation

```cpp path=null start=null
// Check if tree is balanced
bool isBalanced(TreeNode* root) {
    function<int(TreeNode*)> checkHeight = [&](TreeNode* node) -> int {
        if (!node) return 0;
        
        int left = checkHeight(node->left);
        if (left == -1) return -1;
        
        int right = checkHeight(node->right);
        if (right == -1) return -1;
        
        if (abs(left - right) > 1) return -1;
        
        return 1 + max(left, right);
    };
    
    return checkHeight(root) != -1;
}
// Time: O(n), Space: O(h)

// Check if tree is symmetric
bool isSymmetric(TreeNode* root) {
    if (!root) return true;
    
    function<bool(TreeNode*, TreeNode*)> isMirror = [&](TreeNode* left, TreeNode* right) -> bool {
        if (!left && !right) return true;
        if (!left || !right) return false;
        
        return (left->val == right->val) &&
               isMirror(left->left, right->right) &&
               isMirror(left->right, right->left);
    };
    
    return isMirror(root->left, root->right);
}
// Time: O(n), Space: O(h)

// Check if two trees are identical
bool isSameTree(TreeNode* p, TreeNode* q) {
    if (!p && !q) return true;
    if (!p || !q) return false;
    
    return (p->val == q->val) &&
           isSameTree(p->left, q->left) &&
           isSameTree(p->right, q->right);
}
// Time: O(min(m,n)), Space: O(min(m,n))
```

## Binary Search Tree (BST)

### What is a BST?

A Binary Search Tree is a binary tree where:
- Left subtree contains only nodes with values **less than** the parent
- Right subtree contains only nodes with values **greater than** the parent
- Both left and right subtrees are also BSTs

### BST Implementation

```cpp path=null start=null
class BinarySearchTree {
private:
    TreeNode* root;
    
    TreeNode* insertHelper(TreeNode* node, int val) {
        if (!node) {
            return new TreeNode(val);
        }
        
        if (val < node->val) {
            node->left = insertHelper(node->left, val);
        } else if (val > node->val) {
            node->right = insertHelper(node->right, val);
        }
        
        return node;
    }
    
    TreeNode* deleteHelper(TreeNode* node, int val) {
        if (!node) return node;
        
        if (val < node->val) {
            node->left = deleteHelper(node->left, val);
        } else if (val > node->val) {
            node->right = deleteHelper(node->right, val);
        } else {
            // Node to be deleted found
            if (!node->left) {
                TreeNode* temp = node->right;
                delete node;
                return temp;
            } else if (!node->right) {
                TreeNode* temp = node->left;
                delete node;
                return temp;
            }
            
            // Node with two children
            TreeNode* temp = findMin(node->right);
            node->val = temp->val;
            node->right = deleteHelper(node->right, temp->val);
        }
        
        return node;
    }
    
    TreeNode* findMin(TreeNode* node) {
        while (node->left) {
            node = node->left;
        }
        return node;
    }
    
    bool searchHelper(TreeNode* node, int val) {
        if (!node) return false;
        
        if (val == node->val) return true;
        else if (val < node->val) return searchHelper(node->left, val);
        else return searchHelper(node->right, val);
    }
    
public:
    BinarySearchTree() : root(nullptr) {}
    
    void insert(int val) {
        root = insertHelper(root, val);
    }
    // Average: O(log n), Worst: O(n), Space: O(h)
    
    void deleteNode(int val) {
        root = deleteHelper(root, val);
    }
    // Average: O(log n), Worst: O(n), Space: O(h)
    
    bool search(int val) {
        return searchHelper(root, val);
    }
    // Average: O(log n), Worst: O(n), Space: O(h)
    
    TreeNode* getRoot() {
        return root;
    }
};
```

### BST Validation

```cpp path=null start=null
// Validate if tree is a valid BST
bool isValidBST(TreeNode* root) {
    function<bool(TreeNode*, long, long)> validate = [&](TreeNode* node, long minVal, long maxVal) -> bool {
        if (!node) return true;
        
        if (node->val <= minVal || node->val >= maxVal) {
            return false;
        }
        
        return validate(node->left, minVal, node->val) &&
               validate(node->right, node->val, maxVal);
    };
    
    return validate(root, LONG_MIN, LONG_MAX);
}
// Time: O(n), Space: O(h)

// Find kth smallest element in BST
int kthSmallest(TreeNode* root, int k) {
    stack<TreeNode*> st;
    TreeNode* curr = root;
    
    while (curr || !st.empty()) {
        while (curr) {
            st.push(curr);
            curr = curr->left;
        }
        
        curr = st.top();
        st.pop();
        
        k--;
        if (k == 0) {
            return curr->val;
        }
        
        curr = curr->right;
    }
    
    return -1;
}
// Time: O(h + k), Space: O(h)
```

### BST to Other Conversions

```cpp path=null start=null
// Convert BST to sorted array
vector<int> bstToSortedArray(TreeNode* root) {
    vector<int> result;
    
    function<void(TreeNode*)> inorder = [&](TreeNode* node) {
        if (!node) return;
        
        inorder(node->left);
        result.push_back(node->val);
        inorder(node->right);
    };
    
    inorder(root);
    return result;
}
// Time: O(n), Space: O(n)

// Convert sorted array to balanced BST
TreeNode* sortedArrayToBST(vector<int>& nums) {
    function<TreeNode*(int, int)> buildTree = [&](int left, int right) -> TreeNode* {
        if (left > right) return nullptr;
        
        int mid = left + (right - left) / 2;
        TreeNode* node = new TreeNode(nums[mid]);
        
        node->left = buildTree(left, mid - 1);
        node->right = buildTree(mid + 1, right);
        
        return node;
    };
    
    return buildTree(0, nums.size() - 1);
}
// Time: O(n), Space: O(log n)
```

## AVL Trees (Self-Balancing BST)

### What is an AVL Tree?

AVL tree is a self-balancing BST where the height difference between left and right subtrees is at most 1.

### AVL Node Structure

```cpp path=null start=null
struct AVLNode {
    int val;
    AVLNode* left;
    AVLNode* right;
    int height;
    
    AVLNode(int x) : val(x), left(nullptr), right(nullptr), height(1) {}
};
```

### AVL Tree Implementation

```cpp path=null start=null
class AVLTree {
private:
    AVLNode* root;
    
    int getHeight(AVLNode* node) {
        return node ? node->height : 0;
    }
    
    int getBalance(AVLNode* node) {
        return node ? getHeight(node->left) - getHeight(node->right) : 0;
    }
    
    void updateHeight(AVLNode* node) {
        if (node) {
            node->height = 1 + max(getHeight(node->left), getHeight(node->right));
        }
    }
    
    // Right rotate
    AVLNode* rotateRight(AVLNode* y) {
        AVLNode* x = y->left;
        AVLNode* T2 = x->right;
        
        // Perform rotation
        x->right = y;
        y->left = T2;
        
        // Update heights
        updateHeight(y);
        updateHeight(x);
        
        return x;
    }
    
    // Left rotate
    AVLNode* rotateLeft(AVLNode* x) {
        AVLNode* y = x->right;
        AVLNode* T2 = y->left;
        
        // Perform rotation
        y->left = x;
        x->right = T2;
        
        // Update heights
        updateHeight(x);
        updateHeight(y);
        
        return y;
    }
    
    AVLNode* insertHelper(AVLNode* node, int val) {
        // Step 1: Perform normal BST insertion
        if (!node) {
            return new AVLNode(val);
        }
        
        if (val < node->val) {
            node->left = insertHelper(node->left, val);
        } else if (val > node->val) {
            node->right = insertHelper(node->right, val);
        } else {
            return node;  // Duplicate values not allowed
        }
        
        // Step 2: Update height
        updateHeight(node);
        
        // Step 3: Get balance factor
        int balance = getBalance(node);
        
        // Step 4: If unbalanced, there are 4 cases
        
        // Left Left Case
        if (balance > 1 && val < node->left->val) {
            return rotateRight(node);
        }
        
        // Right Right Case
        if (balance < -1 && val > node->right->val) {
            return rotateLeft(node);
        }
        
        // Left Right Case
        if (balance > 1 && val > node->left->val) {
            node->left = rotateLeft(node->left);
            return rotateRight(node);
        }
        
        // Right Left Case
        if (balance < -1 && val < node->right->val) {
            node->right = rotateRight(node->right);
            return rotateLeft(node);
        }
        
        return node;
    }
    
    AVLNode* findMin(AVLNode* node) {
        while (node->left) {
            node = node->left;
        }
        return node;
    }
    
    AVLNode* deleteHelper(AVLNode* node, int val) {
        // Step 1: Perform normal BST deletion
        if (!node) return node;
        
        if (val < node->val) {
            node->left = deleteHelper(node->left, val);
        } else if (val > node->val) {
            node->right = deleteHelper(node->right, val);
        } else {
            if (!node->left || !node->right) {
                AVLNode* temp = node->left ? node->left : node->right;
                
                if (!temp) {
                    temp = node;
                    node = nullptr;
                } else {
                    *node = *temp;
                }
                delete temp;
            } else {
                AVLNode* temp = findMin(node->right);
                node->val = temp->val;
                node->right = deleteHelper(node->right, temp->val);
            }
        }
        
        if (!node) return node;
        
        // Step 2: Update height
        updateHeight(node);
        
        // Step 3: Get balance factor
        int balance = getBalance(node);
        
        // Step 4: If unbalanced, there are 4 cases
        
        // Left Left Case
        if (balance > 1 && getBalance(node->left) >= 0) {
            return rotateRight(node);
        }
        
        // Left Right Case
        if (balance > 1 && getBalance(node->left) < 0) {
            node->left = rotateLeft(node->left);
            return rotateRight(node);
        }
        
        // Right Right Case
        if (balance < -1 && getBalance(node->right) <= 0) {
            return rotateLeft(node);
        }
        
        // Right Left Case
        if (balance < -1 && getBalance(node->right) > 0) {
            node->right = rotateRight(node->right);
            return rotateLeft(node);
        }
        
        return node;
    }
    
public:
    AVLTree() : root(nullptr) {}
    
    void insert(int val) {
        root = insertHelper(root, val);
    }
    // Time: O(log n), Space: O(log n)
    
    void deleteNode(int val) {
        root = deleteHelper(root, val);
    }
    // Time: O(log n), Space: O(log n)
    
    AVLNode* getRoot() {
        return root;
    }
};
```

## Segment Trees

### What is a Segment Tree?

A Segment Tree is a binary tree used for storing intervals or segments. It allows querying and updating array ranges efficiently.

### Segment Tree Implementation

```cpp path=null start=null
class SegmentTree {
private:
    vector<int> tree;
    int n;
    
    void buildHelper(vector<int>& arr, int node, int start, int end) {
        if (start == end) {
            tree[node] = arr[start];
        } else {
            int mid = (start + end) / 2;
            buildHelper(arr, 2 * node, start, mid);
            buildHelper(arr, 2 * node + 1, mid + 1, end);
            tree[node] = tree[2 * node] + tree[2 * node + 1];
        }
    }
    
    void updateHelper(int node, int start, int end, int idx, int val) {
        if (start == end) {
            tree[node] = val;
        } else {
            int mid = (start + end) / 2;
            if (idx <= mid) {
                updateHelper(2 * node, start, mid, idx, val);
            } else {
                updateHelper(2 * node + 1, mid + 1, end, idx, val);
            }
            tree[node] = tree[2 * node] + tree[2 * node + 1];
        }
    }
    
    int queryHelper(int node, int start, int end, int l, int r) {
        if (r < start || end < l) {
            return 0;  // Out of range
        }
        if (l <= start && end <= r) {
            return tree[node];  // Complete overlap
        }
        
        // Partial overlap
        int mid = (start + end) / 2;
        int p1 = queryHelper(2 * node, start, mid, l, r);
        int p2 = queryHelper(2 * node + 1, mid + 1, end, l, r);
        return p1 + p2;
    }
    
public:
    SegmentTree(vector<int>& arr) {
        n = arr.size();
        tree.resize(4 * n);
        buildHelper(arr, 1, 0, n - 1);
    }
    
    void update(int idx, int val) {
        updateHelper(1, 0, n - 1, idx, val);
    }
    // Time: O(log n), Space: O(1)
    
    int query(int l, int r) {
        return queryHelper(1, 0, n - 1, l, r);
    }
    // Time: O(log n), Space: O(1)
};
```

## Tree Practice Problems

### Easy Level

```cpp path=null start=null
// Problem 1: Maximum Depth of Binary Tree
int maxDepth(TreeNode* root) {
    if (!root) return 0;
    
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}
// Time: O(n), Space: O(h)

// Problem 2: Invert Binary Tree
TreeNode* invertTree(TreeNode* root) {
    if (!root) return nullptr;
    
    swap(root->left, root->right);
    invertTree(root->left);
    invertTree(root->right);
    
    return root;
}
// Time: O(n), Space: O(h)

// Problem 3: Minimum Depth of Binary Tree
int minDepth(TreeNode* root) {
    if (!root) return 0;
    
    if (!root->left) return 1 + minDepth(root->right);
    if (!root->right) return 1 + minDepth(root->left);
    
    return 1 + min(minDepth(root->left), minDepth(root->right));
}
// Time: O(n), Space: O(h)

// Problem 4: Path Sum
bool hasPathSum(TreeNode* root, int targetSum) {
    if (!root) return false;
    
    if (!root->left && !root->right) {
        return targetSum == root->val;
    }
    
    return hasPathSum(root->left, targetSum - root->val) ||
           hasPathSum(root->right, targetSum - root->val);
}
// Time: O(n), Space: O(h)
```

### Medium Level

```cpp path=null start=null
// Problem 5: Binary Tree Right Side View
vector<int> rightSideView(TreeNode* root) {
    vector<int> result;
    if (!root) return result;
    
    queue<TreeNode*> q;
    q.push(root);
    
    while (!q.empty()) {
        int size = q.size();
        
        for (int i = 0; i < size; i++) {
            TreeNode* node = q.front();
            q.pop();
            
            if (i == size - 1) {
                result.push_back(node->val);
            }
            
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
    }
    
    return result;
}
// Time: O(n), Space: O(w)

// Problem 6: Construct Binary Tree from Preorder and Inorder
TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    unordered_map<int, int> inorderMap;
    for (int i = 0; i < inorder.size(); i++) {
        inorderMap[inorder[i]] = i;
    }
    
    int preorderIndex = 0;
    
    function<TreeNode*(int, int)> build = [&](int inStart, int inEnd) -> TreeNode* {
        if (inStart > inEnd) return nullptr;
        
        int rootVal = preorder[preorderIndex++];
        TreeNode* root = new TreeNode(rootVal);
        
        int inRoot = inorderMap[rootVal];
        
        root->left = build(inStart, inRoot - 1);
        root->right = build(inRoot + 1, inEnd);
        
        return root;
    };
    
    return build(0, inorder.size() - 1);
}
// Time: O(n), Space: O(n)

// Problem 7: Lowest Common Ancestor of BST
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (!root) return nullptr;
    
    if (p->val < root->val && q->val < root->val) {
        return lowestCommonAncestor(root->left, p, q);
    } else if (p->val > root->val && q->val > root->val) {
        return lowestCommonAncestor(root->right, p, q);
    } else {
        return root;
    }
}
// Time: O(h), Space: O(h)

// Problem 8: Binary Tree Paths
vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> result;
    if (!root) return result;
    
    function<void(TreeNode*, string)> dfs = [&](TreeNode* node, string path) {
        if (!node->left && !node->right) {
            result.push_back(path);
            return;
        }
        
        if (node->left) {
            dfs(node->left, path + "->" + to_string(node->left->val));
        }
        if (node->right) {
            dfs(node->right, path + "->" + to_string(node->right->val));
        }
    };
    
    dfs(root, to_string(root->val));
    return result;
}
// Time: O(n * h), Space: O(n * h)
```

### Hard Level

```cpp path=null start=null
// Problem 9: Binary Tree Maximum Path Sum
int maxPathSum(TreeNode* root) {
    int maxSum = INT_MIN;
    
    function<int(TreeNode*)> maxGain = [&](TreeNode* node) -> int {
        if (!node) return 0;
        
        int leftGain = max(maxGain(node->left), 0);
        int rightGain = max(maxGain(node->right), 0);
        
        int priceNewPath = node->val + leftGain + rightGain;
        maxSum = max(maxSum, priceNewPath);
        
        return node->val + max(leftGain, rightGain);
    };
    
    maxGain(root);
    return maxSum;
}
// Time: O(n), Space: O(h)

// Problem 10: Serialize and Deserialize Binary Tree
class Codec {
public:
    string serialize(TreeNode* root) {
        string result = "";
        
        function<void(TreeNode*)> preorder = [&](TreeNode* node) {
            if (!node) {
                result += "null,";
                return;
            }
            
            result += to_string(node->val) + ",";
            preorder(node->left);
            preorder(node->right);
        };
        
        preorder(root);
        return result;
    }
    
    TreeNode* deserialize(string data) {
        queue<string> nodes;
        stringstream ss(data);
        string item;
        
        while (getline(ss, item, ',')) {
            nodes.push(item);
        }
        
        function<TreeNode*()> buildTree = [&]() -> TreeNode* {
            string val = nodes.front();
            nodes.pop();
            
            if (val == "null") {
                return nullptr;
            }
            
            TreeNode* node = new TreeNode(stoi(val));
            node->left = buildTree();
            node->right = buildTree();
            
            return node;
        };
        
        return buildTree();
    }
};
// Time: O(n), Space: O(n)
```

# Dynamic Programming {#dynamic-programming}

Dynamic Programming (DP) is an algorithmic paradigm that solves complex problems by breaking them down into simpler subproblems. It's one of the most important topics for technical interviews.

## What is Dynamic Programming?

Dynamic Programming is an optimization technique that:
- **Breaks down** complex problems into simpler subproblems
- **Stores solutions** to subproblems to avoid redundant computation
- **Builds up** solutions to larger problems from smaller ones

### When to Use DP?

Use DP when a problem has:
1. **Overlapping Subproblems** - Same subproblems are solved multiple times
2. **Optimal Substructure** - Optimal solution contains optimal solutions to subproblems

### DP vs Recursion vs Greedy

```cpp path=null start=null
// Naive Recursion (Fibonacci) - O(2^n)
int fibRecursive(int n) {
    if (n <= 1) return n;
    return fibRecursive(n-1) + fibRecursive(n-2);
}

// DP with Memoization - O(n)
int fibMemo(int n, vector<int>& memo) {
    if (n <= 1) return n;
    if (memo[n] != -1) return memo[n];
    
    memo[n] = fibMemo(n-1, memo) + fibMemo(n-2, memo);
    return memo[n];
}

// DP with Tabulation - O(n)
int fibDP(int n) {
    if (n <= 1) return n;
    
    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;
    
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    
    return dp[n];
}

// Space Optimized DP - O(1) space
int fibOptimized(int n) {
    if (n <= 1) return n;
    
    int prev2 = 0, prev1 = 1;
    
    for (int i = 2; i <= n; i++) {
        int current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    
    return prev1;
}
```

## DP Approaches

### 1. Memoization (Top-Down)

**Characteristics:**
- Recursive approach
- Cache results of subproblems
- Solves subproblems as needed
- Uses recursion stack

```cpp path=null start=null
// Template for Memoization
int solve(int params, vector<int>& memo) {
    // Base case
    if (base_condition) {
        return base_value;
    }
    
    // Check if already computed
    if (memo[params] != -1) {
        return memo[params];
    }
    
    // Compute result
    int result = /* recursive calls with smaller params */;
    
    // Store and return
    memo[params] = result;
    return result;
}
```

### 2. Tabulation (Bottom-Up)

**Characteristics:**
- Iterative approach
- Fill DP table systematically
- No recursion overhead
- Usually more space efficient

```cpp path=null start=null
// Template for Tabulation
int solve(int n) {
    vector<int> dp(n + 1);
    
    // Base cases
    dp[0] = base_value_0;
    dp[1] = base_value_1;
    
    // Fill table bottom-up
    for (int i = 2; i <= n; i++) {
        dp[i] = /* compute using dp[smaller_indices] */;
    }
    
    return dp[n];
}
```

## Classic DP Problems

### 1. Climbing Stairs

**Problem:** You can climb 1 or 2 steps at a time. How many ways to reach the top?

```cpp path=null start=null
// Memoization
int climbStairsMemo(int n, vector<int>& memo) {
    if (n <= 1) return 1;
    if (memo[n] != -1) return memo[n];
    
    memo[n] = climbStairsMemo(n-1, memo) + climbStairsMemo(n-2, memo);
    return memo[n];
}

// Tabulation
int climbStairsDP(int n) {
    if (n <= 1) return 1;
    
    vector<int> dp(n + 1);
    dp[0] = 1;
    dp[1] = 1;
    
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    
    return dp[n];
}

// Space Optimized
int climbStairsOptimized(int n) {
    if (n <= 1) return 1;
    
    int prev2 = 1, prev1 = 1;
    
    for (int i = 2; i <= n; i++) {
        int current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    
    return prev1;
}
// Time: O(n), Space: O(1)
```

### 2. House Robber

**Problem:** Rob houses, but can't rob two adjacent houses.

```cpp path=null start=null
int rob(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    if (n == 1) return nums[0];
    
    // dp[i] = maximum money robbed up to house i
    vector<int> dp(n);
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);
    
    for (int i = 2; i < n; i++) {
        dp[i] = max(dp[i-1], dp[i-2] + nums[i]);
    }
    
    return dp[n-1];
}

// Space Optimized
int robOptimized(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    if (n == 1) return nums[0];
    
    int prev2 = nums[0];
    int prev1 = max(nums[0], nums[1]);
    
    for (int i = 2; i < n; i++) {
        int current = max(prev1, prev2 + nums[i]);
        prev2 = prev1;
        prev1 = current;
    }
    
    return prev1;
}
// Time: O(n), Space: O(1)
```

### 3. Coin Change Problem

**Problem:** Find minimum coins needed to make a target amount.

```cpp path=null start=null
int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount + 1, INT_MAX);
    dp[0] = 0;
    
    for (int i = 1; i <= amount; i++) {
        for (int coin : coins) {
            if (i >= coin && dp[i - coin] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }
    
    return dp[amount] == INT_MAX ? -1 : dp[amount];
}
// Time: O(amount * coins), Space: O(amount)

// Count ways to make amount
int coinChangeWays(vector<int>& coins, int amount) {
    vector<int> dp(amount + 1, 0);
    dp[0] = 1;
    
    for (int coin : coins) {
        for (int i = coin; i <= amount; i++) {
            dp[i] += dp[i - coin];
        }
    }
    
    return dp[amount];
}
// Time: O(amount * coins), Space: O(amount)
```

### 4. Longest Increasing Subsequence (LIS)

```cpp path=null start=null
// DP Approach - O(n²)
int lengthOfLIS(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    
    vector<int> dp(n, 1);  // dp[i] = length of LIS ending at i
    
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[j] < nums[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    
    return *max_element(dp.begin(), dp.end());
}

// Binary Search Approach - O(n log n)
int lengthOfLISOptimal(vector<int>& nums) {
    vector<int> lis;
    
    for (int num : nums) {
        auto it = lower_bound(lis.begin(), lis.end(), num);
        if (it == lis.end()) {
            lis.push_back(num);
        } else {
            *it = num;
        }
    }
    
    return lis.size();
}
// Time: O(n log n), Space: O(n)
```

## String DP Problems

### 1. Edit Distance (Levenshtein Distance)

**Problem:** Minimum operations (insert, delete, replace) to convert string1 to string2.

```cpp path=null start=null
int minDistance(string word1, string word2) {
    int m = word1.length(), n = word2.length();
    
    // dp[i][j] = min operations to convert word1[0..i-1] to word2[0..j-1]
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));
    
    // Base cases
    for (int i = 0; i <= m; i++) dp[i][0] = i;  // Delete all
    for (int j = 0; j <= n; j++) dp[0][j] = j;  // Insert all
    
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (word1[i-1] == word2[j-1]) {
                dp[i][j] = dp[i-1][j-1];  // No operation needed
            } else {
                dp[i][j] = 1 + min({
                    dp[i-1][j],     // Delete
                    dp[i][j-1],     // Insert
                    dp[i-1][j-1]    // Replace
                });
            }
        }
    }
    
    return dp[m][n];
}
// Time: O(m * n), Space: O(m * n)
```

### 2. Longest Common Subsequence (LCS)

```cpp path=null start=null
int longestCommonSubsequence(string text1, string text2) {
    int m = text1.length(), n = text2.length();
    
    // dp[i][j] = LCS length for text1[0..i-1] and text2[0..j-1]
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (text1[i-1] == text2[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    
    return dp[m][n];
}
// Time: O(m * n), Space: O(m * n)

// Space Optimized - O(min(m, n))
int longestCommonSubsequenceOptimized(string text1, string text2) {
    int m = text1.length(), n = text2.length();
    
    // Make sure text1 is the shorter string
    if (m > n) {
        swap(text1, text2);
        swap(m, n);
    }
    
    vector<int> prev(m + 1, 0), curr(m + 1, 0);
    
    for (int j = 1; j <= n; j++) {
        for (int i = 1; i <= m; i++) {
            if (text1[i-1] == text2[j-1]) {
                curr[i] = prev[i-1] + 1;
            } else {
                curr[i] = max(prev[i], curr[i-1]);
            }
        }
        prev = curr;
    }
    
    return prev[m];
}
// Time: O(m * n), Space: O(min(m, n))
```

### 3. Palindromic Subsequences

```cpp path=null start=null
// Longest Palindromic Subsequence
int longestPalindromeSubseq(string s) {
    int n = s.length();
    
    // dp[i][j] = length of longest palindromic subsequence in s[i..j]
    vector<vector<int>> dp(n, vector<int>(n, 0));
    
    // Every single character is a palindrome of length 1
    for (int i = 0; i < n; i++) {
        dp[i][i] = 1;
    }
    
    // Fill for substrings of length 2 to n
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            
            if (s[i] == s[j]) {
                dp[i][j] = dp[i+1][j-1] + 2;
            } else {
                dp[i][j] = max(dp[i+1][j], dp[i][j-1]);
            }
        }
    }
    
    return dp[0][n-1];
}
// Time: O(n²), Space: O(n²)

// Count Palindromic Substrings
int countSubstrings(string s) {
    int n = s.length();
    
    // dp[i][j] = true if s[i..j] is palindrome
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    int count = 0;
    
    // Single characters
    for (int i = 0; i < n; i++) {
        dp[i][i] = true;
        count++;
    }
    
    // Two characters
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = true;
            count++;
        }
    }
    
    // Three or more characters
    for (int len = 3; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            
            if (s[i] == s[j] && dp[i + 1][j - 1]) {
                dp[i][j] = true;
                count++;
            }
        }
    }
    
    return count;
}
// Time: O(n²), Space: O(n²)
```

## Knapsack Problems

### 1. 0/1 Knapsack

**Problem:** Given weights, values, and capacity, maximize value without exceeding capacity.

```cpp path=null start=null
int knapsack01(vector<int>& weights, vector<int>& values, int capacity) {
    int n = weights.size();
    
    // dp[i][w] = max value using first i items with weight limit w
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));
    
    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= capacity; w++) {
            // Don't include current item
            dp[i][w] = dp[i-1][w];
            
            // Include current item if it fits
            if (weights[i-1] <= w) {
                dp[i][w] = max(dp[i][w], dp[i-1][w - weights[i-1]] + values[i-1]);
            }
        }
    }
    
    return dp[n][capacity];
}
// Time: O(n * capacity), Space: O(n * capacity)

// Space Optimized
int knapsack01Optimized(vector<int>& weights, vector<int>& values, int capacity) {
    vector<int> dp(capacity + 1, 0);
    
    for (int i = 0; i < weights.size(); i++) {
        for (int w = capacity; w >= weights[i]; w--) {
            dp[w] = max(dp[w], dp[w - weights[i]] + values[i]);
        }
    }
    
    return dp[capacity];
}
// Time: O(n * capacity), Space: O(capacity)
```

### 2. Unbounded Knapsack

**Problem:** Items can be used multiple times.

```cpp path=null start=null
int unboundedKnapsack(vector<int>& weights, vector<int>& values, int capacity) {
    vector<int> dp(capacity + 1, 0);
    
    for (int w = 1; w <= capacity; w++) {
        for (int i = 0; i < weights.size(); i++) {
            if (weights[i] <= w) {
                dp[w] = max(dp[w], dp[w - weights[i]] + values[i]);
            }
        }
    }
    
    return dp[capacity];
}
// Time: O(n * capacity), Space: O(capacity)
```

## Matrix DP Problems

### 1. Unique Paths

```cpp path=null start=null
// Unique paths in grid (can only move right or down)
int uniquePaths(int m, int n) {
    vector<vector<int>> dp(m, vector<int>(n, 1));
    
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    
    return dp[m-1][n-1];
}
// Time: O(m * n), Space: O(m * n)

// Space Optimized
int uniquePathsOptimized(int m, int n) {
    vector<int> dp(n, 1);
    
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            dp[j] += dp[j-1];
        }
    }
    
    return dp[n-1];
}
// Time: O(m * n), Space: O(n)

// Unique Paths with Obstacles
int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int m = obstacleGrid.size(), n = obstacleGrid[0].size();
    
    if (obstacleGrid[0][0] == 1 || obstacleGrid[m-1][n-1] == 1) {
        return 0;
    }
    
    vector<vector<int>> dp(m, vector<int>(n, 0));
    dp[0][0] = 1;
    
    // Fill first row
    for (int j = 1; j < n; j++) {
        dp[0][j] = (obstacleGrid[0][j] == 1) ? 0 : dp[0][j-1];
    }
    
    // Fill first column
    for (int i = 1; i < m; i++) {
        dp[i][0] = (obstacleGrid[i][0] == 1) ? 0 : dp[i-1][0];
    }
    
    // Fill rest of the grid
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (obstacleGrid[i][j] == 1) {
                dp[i][j] = 0;
            } else {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
    }
    
    return dp[m-1][n-1];
}
// Time: O(m * n), Space: O(m * n)
```

### 2. Minimum Path Sum

```cpp path=null start=null
int minPathSum(vector<vector<int>>& grid) {
    int m = grid.size(), n = grid[0].size();
    
    vector<vector<int>> dp(m, vector<int>(n));
    dp[0][0] = grid[0][0];
    
    // Fill first row
    for (int j = 1; j < n; j++) {
        dp[0][j] = dp[0][j-1] + grid[0][j];
    }
    
    // Fill first column
    for (int i = 1; i < m; i++) {
        dp[i][0] = dp[i-1][0] + grid[i][0];
    }
    
    // Fill rest of the grid
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            dp[i][j] = grid[i][j] + min(dp[i-1][j], dp[i][j-1]);
        }
    }
    
    return dp[m-1][n-1];
}
// Time: O(m * n), Space: O(m * n)

// Space Optimized (modify input)
int minPathSumOptimized(vector<vector<int>>& grid) {
    int m = grid.size(), n = grid[0].size();
    
    // Fill first row
    for (int j = 1; j < n; j++) {
        grid[0][j] += grid[0][j-1];
    }
    
    // Fill first column
    for (int i = 1; i < m; i++) {
        grid[i][0] += grid[i-1][0];
    }
    
    // Fill rest of the grid
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            grid[i][j] += min(grid[i-1][j], grid[i][j-1]);
        }
    }
    
    return grid[m-1][n-1];
}
// Time: O(m * n), Space: O(1)
```

## Advanced DP Patterns

### 1. DP on Trees

```cpp path=null start=null
// House Robber III - Can't rob adjacent nodes in tree
int rob(TreeNode* root) {
    function<pair<int, int>(TreeNode*)> dfs = [&](TreeNode* node) -> pair<int, int> {
        if (!node) return {0, 0};
        
        auto left = dfs(node->left);
        auto right = dfs(node->right);
        
        // {rob_current, not_rob_current}
        int robCurrent = node->val + left.second + right.second;
        int notRobCurrent = max(left.first, left.second) + max(right.first, right.second);
        
        return {robCurrent, notRobCurrent};
    };
    
    auto result = dfs(root);
    return max(result.first, result.second);
}
// Time: O(n), Space: O(h)
```

### 2. Digit DP

```cpp path=null start=null
// Count numbers with no adjacent equal digits
int countNumbersWithNoAdjacentEquals(int n) {
    string s = to_string(n);
    int len = s.length();
    
    // dp[pos][prev_digit][tight][started]
    function<int(int, int, bool, bool)> solve = [&](int pos, int prevDigit, bool tight, bool started) -> int {
        if (pos == len) return started ? 1 : 0;
        
        int limit = tight ? (s[pos] - '0') : 9;
        int result = 0;
        
        for (int digit = 0; digit <= limit; digit++) {
            if (started && digit == prevDigit) continue;
            
            bool newTight = tight && (digit == limit);
            bool newStarted = started || (digit > 0);
            
            result += solve(pos + 1, digit, newTight, newStarted);
        }
        
        return result;
    };
    
    return solve(0, -1, true, false);
}
```

### 3. Bitmask DP

```cpp path=null start=null
// Traveling Salesman Problem
int tsp(vector<vector<int>>& dist) {
    int n = dist.size();
    
    // dp[mask][i] = min cost to visit cities in mask ending at city i
    vector<vector<int>> dp(1 << n, vector<int>(n, INT_MAX));
    
    // Start at city 0
    dp[1][0] = 0;
    
    for (int mask = 1; mask < (1 << n); mask++) {
        for (int i = 0; i < n; i++) {
            if (!(mask & (1 << i)) || dp[mask][i] == INT_MAX) continue;
            
            for (int j = 0; j < n; j++) {
                if (mask & (1 << j)) continue;
                
                int newMask = mask | (1 << j);
                dp[newMask][j] = min(dp[newMask][j], dp[mask][i] + dist[i][j]);
            }
        }
    }
    
    int result = INT_MAX;
    int finalMask = (1 << n) - 1;
    
    for (int i = 1; i < n; i++) {
        if (dp[finalMask][i] != INT_MAX) {
            result = min(result, dp[finalMask][i] + dist[i][0]);
        }
    }
    
    return result;
}
// Time: O(n² * 2ⁿ), Space: O(n * 2ⁿ)
```

## DP Optimization Techniques

### 1. Space Optimization

```cpp path=null start=null
// Usually we can reduce space by keeping only necessary previous states

// Before: O(n²) space
vector<vector<int>> dp(n, vector<int>(n));

// After: O(n) space
vector<int> prev(n), curr(n);

// Or even: O(1) space for some problems
int prev2, prev1, current;
```

### 2. Matrix Chain Multiplication

```cpp path=null start=null
int matrixChainMultiplication(vector<int>& dimensions) {
    int n = dimensions.size() - 1;  // number of matrices
    
    // dp[i][j] = min scalar multiplications to multiply matrices from i to j
    vector<vector<int>> dp(n, vector<int>(n, 0));
    
    // length of chain
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            dp[i][j] = INT_MAX;
            
            for (int k = i; k < j; k++) {
                int cost = dp[i][k] + dp[k+1][j] + 
                          dimensions[i] * dimensions[k+1] * dimensions[j+1];
                dp[i][j] = min(dp[i][j], cost);
            }
        }
    }
    
    return dp[0][n-1];
}
// Time: O(n³), Space: O(n²)
```

## Practice Problems by Difficulty

### Easy Level

```cpp path=null start=null
// Problem 1: Min Cost Climbing Stairs
int minCostClimbingStairs(vector<int>& cost) {
    int n = cost.size();
    
    int prev2 = 0, prev1 = 0;
    
    for (int i = 0; i < n; i++) {
        int current = cost[i] + min(prev1, prev2);
        prev2 = prev1;
        prev1 = current;
    }
    
    return min(prev1, prev2);
}
// Time: O(n), Space: O(1)

// Problem 2: Range Sum Query - Immutable
class NumArray {
private:
    vector<int> prefixSum;
    
public:
    NumArray(vector<int>& nums) {
        prefixSum.resize(nums.size() + 1, 0);
        for (int i = 0; i < nums.size(); i++) {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return prefixSum[right + 1] - prefixSum[left];
    }
};
// Time: O(1) per query, Space: O(n)

// Problem 3: Pascal's Triangle
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> triangle;
    
    for (int i = 0; i < numRows; i++) {
        vector<int> row(i + 1, 1);
        
        for (int j = 1; j < i; j++) {
            row[j] = triangle[i-1][j-1] + triangle[i-1][j];
        }
        
        triangle.push_back(row);
    }
    
    return triangle;
}
// Time: O(numRows²), Space: O(numRows²)
```

### Medium Level

```cpp path=null start=null
// Problem 4: Maximum Product Subarray
int maxProduct(vector<int>& nums) {
    int maxProd = nums[0];
    int minProd = nums[0];
    int result = nums[0];
    
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] < 0) {
            swap(maxProd, minProd);
        }
        
        maxProd = max(nums[i], maxProd * nums[i]);
        minProd = min(nums[i], minProd * nums[i]);
        
        result = max(result, maxProd);
    }
    
    return result;
}
// Time: O(n), Space: O(1)

// Problem 5: Word Break
bool wordBreak(string s, vector<string>& wordDict) {
    unordered_set<string> wordSet(wordDict.begin(), wordDict.end());
    int n = s.length();
    
    vector<bool> dp(n + 1, false);
    dp[0] = true;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            if (dp[j] && wordSet.count(s.substr(j, i - j))) {
                dp[i] = true;
                break;
            }
        }
    }
    
    return dp[n];
}
// Time: O(n² * m), Space: O(n)

// Problem 6: Decode Ways
int numDecodings(string s) {
    int n = s.length();
    if (n == 0 || s[0] == '0') return 0;
    
    int prev2 = 1, prev1 = 1;
    
    for (int i = 2; i <= n; i++) {
        int current = 0;
        
        // Single digit
        if (s[i-1] != '0') {
            current += prev1;
        }
        
        // Two digits
        int twoDigit = (s[i-2] - '0') * 10 + (s[i-1] - '0');
        if (twoDigit >= 10 && twoDigit <= 26) {
            current += prev2;
        }
        
        prev2 = prev1;
        prev1 = current;
    }
    
    return prev1;
}
// Time: O(n), Space: O(1)
```

### Hard Level

```cpp path=null start=null
// Problem 7: Regular Expression Matching
bool isMatch(string s, string p) {
    int m = s.length(), n = p.length();
    
    // dp[i][j] = true if s[0..i-1] matches p[0..j-1]
    vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
    
    dp[0][0] = true;
    
    // Handle patterns like a*, a*b*, a*b*c*
    for (int j = 2; j <= n; j += 2) {
        if (p[j-1] == '*') {
            dp[0][j] = true;
        } else {
            break;
        }
    }
    
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (p[j-1] == '*') {
                // Two choices: don't use * or use *
                dp[i][j] = dp[i][j-2] || 
                          (matches(s[i-1], p[j-2]) && dp[i-1][j]);
            } else {
                dp[i][j] = matches(s[i-1], p[j-1]) && dp[i-1][j-1];
            }
        }
    }
    
    return dp[m][n];
}

bool matches(char s, char p) {
    return s == p || p == '.';
}
// Time: O(m * n), Space: O(m * n)

// Problem 8: Wildcard Matching
bool isMatchWildcard(string s, string p) {
    int m = s.length(), n = p.length();
    
    vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
    
    dp[0][0] = true;
    
    // Handle leading *
    for (int j = 1; j <= n; j++) {
        if (p[j-1] == '*') {
            dp[0][j] = dp[0][j-1];
        }
    }
    
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (p[j-1] == '*') {
                dp[i][j] = dp[i-1][j] || dp[i][j-1];
            } else if (p[j-1] == '?' || s[i-1] == p[j-1]) {
                dp[i][j] = dp[i-1][j-1];
            }
        }
    }
    
    return dp[m][n];
}
// Time: O(m * n), Space: O(m * n)
```

## DP Problem-Solving Strategy

### Step-by-Step Approach

1. **Identify DP Problem**
   - Optimal substructure?
   - Overlapping subproblems?
   - Optimization or counting problem?

2. **Define DP State**
   - What does dp[i] or dp[i][j] represent?
   - What are the dimensions?

3. **Write Recurrence Relation**
   - How to compute current state from previous states?
   - What are the choices at each step?

4. **Handle Base Cases**
   - What are the simplest cases?
   - Initialize DP array correctly

5. **Implement and Optimize**
   - Start with memoization
   - Convert to tabulation
   - Optimize space if possible

### Common DP Patterns

1. **Linear DP**: dp[i] depends on dp[i-1], dp[i-2], etc.
2. **Grid DP**: dp[i][j] depends on dp[i-1][j], dp[i][j-1], etc.
3. **Interval DP**: dp[i][j] represents optimal solution for interval [i, j]
4. **Tree DP**: DP on tree structures
5. **Bitmask DP**: Use bitmask to represent states
6. **Digit DP**: DP on digit representation of numbers

---

# Heaps and Priority Queues {#heaps}

Heaps are complete binary trees that satisfy the heap property. They are the foundation for priority queues and many efficient algorithms like heap sort.

## What is a Heap?

A heap is a specialized tree-based data structure that satisfies the **heap property**:
- **Max Heap**: Parent node is greater than or equal to its children
- **Min Heap**: Parent node is less than or equal to its children

### Key Properties:
1. **Complete Binary Tree**: All levels filled except possibly the last
2. **Heap Property**: Parent-child relationship maintained
3. **Array Representation**: Can be stored efficiently in arrays
4. **No Ordering Between Siblings**: Only parent-child relationships matter

## Array Representation of Heaps

```cpp path=null start=null
// For 0-indexed array:
// Parent of node i: (i-1)/2
// Left child of i: 2*i + 1
// Right child of i: 2*i + 2

// For 1-indexed array (often easier):
// Parent of node i: i/2
// Left child of i: 2*i
// Right child of i: 2*i + 1

class HeapUtility {
public:
    static int parent(int i) { return (i - 1) / 2; }
    static int leftChild(int i) { return 2 * i + 1; }
    static int rightChild(int i) { return 2 * i + 2; }
    
    // 1-indexed versions
    static int parent1(int i) { return i / 2; }
    static int leftChild1(int i) { return 2 * i; }
    static int rightChild1(int i) { return 2 * i + 1; }
};
```

## Max Heap Implementation

```cpp path=null start=null
class MaxHeap {
private:
    vector<int> heap;
    
    void heapifyUp(int index) {
        if (index == 0) return;
        
        int parentIndex = (index - 1) / 2;
        
        if (heap[index] > heap[parentIndex]) {
            swap(heap[index], heap[parentIndex]);
            heapifyUp(parentIndex);
        }
    }
    
    void heapifyDown(int index) {
        int largest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        
        // Find largest among root, left child, and right child
        if (left < heap.size() && heap[left] > heap[largest]) {
            largest = left;
        }
        
        if (right < heap.size() && heap[right] > heap[largest]) {
            largest = right;
        }
        
        // If largest is not root, swap and continue heapifying
        if (largest != index) {
            swap(heap[index], heap[largest]);
            heapifyDown(largest);
        }
    }
    
public:
    MaxHeap() {}
    
    MaxHeap(vector<int>& arr) {
        heap = arr;
        buildHeap();
    }
    
    void insert(int val) {
        heap.push_back(val);
        heapifyUp(heap.size() - 1);
    }
    // Time: O(log n), Space: O(1)
    
    int extractMax() {
        if (heap.empty()) {
            throw runtime_error("Heap is empty");
        }
        
        int maxVal = heap[0];
        
        // Move last element to root and remove last
        heap[0] = heap.back();
        heap.pop_back();
        
        if (!heap.empty()) {
            heapifyDown(0);
        }
        
        return maxVal;
    }
    // Time: O(log n), Space: O(1)
    
    int peekMax() {
        if (heap.empty()) {
            throw runtime_error("Heap is empty");
        }
        return heap[0];
    }
    // Time: O(1), Space: O(1)
    
    void buildHeap() {
        // Start from last non-leaf node and heapify down
        for (int i = (heap.size() / 2) - 1; i >= 0; i--) {
            heapifyDown(i);
        }
    }
    // Time: O(n), Space: O(1)
    
    bool isEmpty() {
        return heap.empty();
    }
    
    int size() {
        return heap.size();
    }
    
    void display() {
        cout << "Max Heap: ";
        for (int val : heap) {
            cout << val << " ";
        }
        cout << endl;
    }
};
```

## Min Heap Implementation

```cpp path=null start=null
class MinHeap {
private:
    vector<int> heap;
    
    void heapifyUp(int index) {
        if (index == 0) return;
        
        int parentIndex = (index - 1) / 2;
        
        if (heap[index] < heap[parentIndex]) {
            swap(heap[index], heap[parentIndex]);
            heapifyUp(parentIndex);
        }
    }
    
    void heapifyDown(int index) {
        int smallest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        
        // Find smallest among root, left child, and right child
        if (left < heap.size() && heap[left] < heap[smallest]) {
            smallest = left;
        }
        
        if (right < heap.size() && heap[right] < heap[smallest]) {
            smallest = right;
        }
        
        // If smallest is not root, swap and continue heapifying
        if (smallest != index) {
            swap(heap[index], heap[smallest]);
            heapifyDown(smallest);
        }
    }
    
public:
    MinHeap() {}
    
    MinHeap(vector<int>& arr) {
        heap = arr;
        buildHeap();
    }
    
    void insert(int val) {
        heap.push_back(val);
        heapifyUp(heap.size() - 1);
    }
    // Time: O(log n), Space: O(1)
    
    int extractMin() {
        if (heap.empty()) {
            throw runtime_error("Heap is empty");
        }
        
        int minVal = heap[0];
        
        heap[0] = heap.back();
        heap.pop_back();
        
        if (!heap.empty()) {
            heapifyDown(0);
        }
        
        return minVal;
    }
    // Time: O(log n), Space: O(1)
    
    int peekMin() {
        if (heap.empty()) {
            throw runtime_error("Heap is empty");
        }
        return heap[0];
    }
    // Time: O(1), Space: O(1)
    
    void buildHeap() {
        for (int i = (heap.size() / 2) - 1; i >= 0; i--) {
            heapifyDown(i);
        }
    }
    // Time: O(n), Space: O(1)
    
    bool isEmpty() {
        return heap.empty();
    }
    
    int size() {
        return heap.size();
    }
};
```

## STL Priority Queue

```cpp path=null start=null
#include <queue>

void priorityQueueExamples() {
    // Max heap (default)
    priority_queue<int> maxHeap;
    maxHeap.push(10);
    maxHeap.push(30);
    maxHeap.push(20);
    
    cout << "Max heap top: " << maxHeap.top() << endl;  // 30
    maxHeap.pop();
    cout << "After pop: " << maxHeap.top() << endl;     // 20
    
    // Min heap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(20);
    
    cout << "Min heap top: " << minHeap.top() << endl;  // 10
    
    // Custom comparator
    auto cmp = [](int a, int b) { return a > b; };  // Min heap
    priority_queue<int, vector<int>, decltype(cmp)> customHeap(cmp);
    
    // Pair priority queue (sort by first element by default)
    priority_queue<pair<int, int>> pairHeap;
    pairHeap.push({10, 1});
    pairHeap.push({30, 2});
    pairHeap.push({20, 3});
    
    cout << "Pair heap top: " << pairHeap.top().first << endl;  // 30
}
```

## Heap Sort Algorithm

```cpp path=null start=null
void heapSort(vector<int>& arr) {
    int n = arr.size();
    
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapifyForSort(arr, n, i);
    }
    
    // Extract elements from heap one by one
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);  // Move current root to end
        heapifyForSort(arr, i, 0);  // Heapify reduced heap
    }
}

void heapifyForSort(vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }
    
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapifyForSort(arr, n, largest);
    }
}
// Time: O(n log n), Space: O(1)
```

## Advanced Heap Applications

### 1. Kth Largest/Smallest Element

```cpp path=null start=null
// Kth largest element using min heap
int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap;
    
    for (int num : nums) {
        minHeap.push(num);
        
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }
    
    return minHeap.top();
}
// Time: O(n log k), Space: O(k)

// Kth smallest element using max heap
int findKthSmallest(vector<int>& nums, int k) {
    priority_queue<int> maxHeap;
    
    for (int num : nums) {
        maxHeap.push(num);
        
        if (maxHeap.size() > k) {
            maxHeap.pop();
        }
    }
    
    return maxHeap.top();
}
// Time: O(n log k), Space: O(k)

// Quick Select approach for Kth largest
int quickSelect(vector<int>& nums, int k) {
    k = nums.size() - k;  // Convert to kth smallest
    
    function<int(int, int)> partition = [&](int left, int right) -> int {
        int pivot = nums[right];
        int i = left;
        
        for (int j = left; j < right; j++) {
            if (nums[j] <= pivot) {
                swap(nums[i], nums[j]);
                i++;
            }
        }
        swap(nums[i], nums[right]);
        return i;
    };
    
    function<int(int, int)> quickSelectHelper = [&](int left, int right) -> int {
        int pivotIndex = partition(left, right);
        
        if (pivotIndex == k) {
            return nums[pivotIndex];
        } else if (pivotIndex < k) {
            return quickSelectHelper(pivotIndex + 1, right);
        } else {
            return quickSelectHelper(left, pivotIndex - 1);
        }
    };
    
    return quickSelectHelper(0, nums.size() - 1);
}
// Time: O(n) average, O(n²) worst, Space: O(1)
```

### 2. Top K Frequent Elements

```cpp path=null start=null
vector<int> topKFrequent(vector<int>& nums, int k) {
    // Count frequencies
    unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++;
    }
    
    // Min heap based on frequency
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
    
    for (auto& p : freq) {
        minHeap.push({p.second, p.first});  // {frequency, value}
        
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }
    
    vector<int> result;
    while (!minHeap.empty()) {
        result.push_back(minHeap.top().second);
        minHeap.pop();
    }
    
    return result;
}
// Time: O(n log k), Space: O(n)

// Bucket sort approach
vector<int> topKFrequentBucket(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++;
    }
    
    vector<vector<int>> buckets(nums.size() + 1);
    for (auto& p : freq) {
        buckets[p.second].push_back(p.first);
    }
    
    vector<int> result;
    for (int i = buckets.size() - 1; i >= 0 && result.size() < k; i--) {
        for (int num : buckets[i]) {
            result.push_back(num);
            if (result.size() == k) break;
        }
    }
    
    return result;
}
// Time: O(n), Space: O(n)
```

### 3. Merge K Sorted Lists

```cpp path=null start=null
struct ListNodeComparator {
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val;  // Min heap
    }
};

ListNode* mergeKLists(vector<ListNode*>& lists) {
    priority_queue<ListNode*, vector<ListNode*>, ListNodeComparator> minHeap;
    
    // Add first node of each list to heap
    for (ListNode* list : lists) {
        if (list) {
            minHeap.push(list);
        }
    }
    
    ListNode* dummy = new ListNode(0);
    ListNode* curr = dummy;
    
    while (!minHeap.empty()) {
        ListNode* node = minHeap.top();
        minHeap.pop();
        
        curr->next = node;
        curr = curr->next;
        
        if (node->next) {
            minHeap.push(node->next);
        }
    }
    
    ListNode* result = dummy->next;
    delete dummy;
    return result;
}
// Time: O(n log k), Space: O(k) where n is total nodes, k is number of lists
```

### 4. Median from Data Stream

```cpp path=null start=null
class MedianFinder {
private:
    priority_queue<int> maxHeap;  // Left half (smaller elements)
    priority_queue<int, vector<int>, greater<int>> minHeap;  // Right half (larger elements)
    
public:
    MedianFinder() {}
    
    void addNum(int num) {
        // Add to max heap first
        maxHeap.push(num);
        
        // Balance: move max from maxHeap to minHeap
        minHeap.push(maxHeap.top());
        maxHeap.pop();
        
        // If minHeap has more elements, move one back
        if (minHeap.size() > maxHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }
    // Time: O(log n), Space: O(1)
    
    double findMedian() {
        if (maxHeap.size() > minHeap.size()) {
            return maxHeap.top();
        } else {
            return (maxHeap.top() + minHeap.top()) / 2.0;
        }
    }
    // Time: O(1), Space: O(1)
};
```

### 5. Sliding Window Maximum

```cpp path=null start=null
// Using deque (optimal)
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    deque<int> dq;  // Store indices
    vector<int> result;
    
    for (int i = 0; i < nums.size(); i++) {
        // Remove elements outside current window
        while (!dq.empty() && dq.front() < i - k + 1) {
            dq.pop_front();
        }
        
        // Remove elements smaller than current element
        while (!dq.empty() && nums[dq.back()] < nums[i]) {
            dq.pop_back();
        }
        
        dq.push_back(i);
        
        if (i >= k - 1) {
            result.push_back(nums[dq.front()]);
        }
    }
    
    return result;
}
// Time: O(n), Space: O(k)

// Using priority queue
vector<int> maxSlidingWindowHeap(vector<int>& nums, int k) {
    priority_queue<pair<int, int>> maxHeap;  // {value, index}
    vector<int> result;
    
    for (int i = 0; i < nums.size(); i++) {
        maxHeap.push({nums[i], i});
        
        // Remove elements outside current window
        while (!maxHeap.empty() && maxHeap.top().second < i - k + 1) {
            maxHeap.pop();
        }
        
        if (i >= k - 1) {
            result.push_back(maxHeap.top().first);
        }
    }
    
    return result;
}
// Time: O(n log n), Space: O(n)
```

### 6. Task Scheduler

```cpp path=null start=null
int leastInterval(vector<char>& tasks, int n) {
    // Count frequencies
    unordered_map<char, int> freq;
    for (char task : tasks) {
        freq[task]++;
    }
    
    // Max heap based on frequency
    priority_queue<int> maxHeap;
    for (auto& p : freq) {
        maxHeap.push(p.second);
    }
    
    int time = 0;
    
    while (!maxHeap.empty()) {
        vector<int> temp;
        
        // Execute tasks for current cycle
        for (int i = 0; i <= n; i++) {
            if (!maxHeap.empty()) {
                int taskCount = maxHeap.top();
                maxHeap.pop();
                
                if (taskCount > 1) {
                    temp.push_back(taskCount - 1);
                }
            }
            
            time++;
            
            if (maxHeap.empty() && temp.empty()) {
                break;
            }
        }
        
        // Add back remaining tasks
        for (int count : temp) {
            maxHeap.push(count);
        }
    }
    
    return time;
}
// Time: O(n), Space: O(1) - at most 26 different tasks
```

## Specialized Heaps

### 1. Binary Indexed Tree (Fenwick Tree)

```cpp path=null start=null
class FenwickTree {
private:
    vector<int> tree;
    int n;
    
public:
    FenwickTree(int size) {
        n = size;
        tree.assign(n + 1, 0);
    }
    
    FenwickTree(vector<int>& arr) {
        n = arr.size();
        tree.assign(n + 1, 0);
        for (int i = 0; i < n; i++) {
            update(i, arr[i]);
        }
    }
    
    void update(int idx, int val) {
        for (idx++; idx <= n; idx += idx & (-idx)) {
            tree[idx] += val;
        }
    }
    // Time: O(log n), Space: O(1)
    
    int query(int idx) {
        int sum = 0;
        for (idx++; idx > 0; idx -= idx & (-idx)) {
            sum += tree[idx];
        }
        return sum;
    }
    // Time: O(log n), Space: O(1)
    
    int rangeQuery(int left, int right) {
        return query(right) - (left > 0 ? query(left - 1) : 0);
    }
    // Time: O(log n), Space: O(1)
};
```

### 2. Indexed Priority Queue

```cpp path=null start=null
class IndexedPriorityQueue {
private:
    vector<int> heap;      // Heap array (stores keys)
    vector<int> position;  // position[i] = position of key i in heap
    vector<int> inverse;   // inverse[i] = key at position i in heap
    int size;
    int maxSize;
    
    void swim(int k) {
        while (k > 1 && heap[inverse[k/2]] < heap[inverse[k]]) {
            swap(k, k/2);
            k /= 2;
        }
    }
    
    void sink(int k) {
        while (2*k <= size) {
            int j = 2*k;
            if (j < size && heap[inverse[j]] < heap[inverse[j+1]]) j++;
            if (heap[inverse[k]] >= heap[inverse[j]]) break;
            swap(k, j);
            k = j;
        }
    }
    
    void swap(int i, int j) {
        int temp = inverse[i];
        inverse[i] = inverse[j];
        inverse[j] = temp;
        position[inverse[i]] = i;
        position[inverse[j]] = j;
    }
    
public:
    IndexedPriorityQueue(int maxSize) : maxSize(maxSize), size(0) {
        heap.resize(maxSize + 1);
        position.resize(maxSize + 1, -1);
        inverse.resize(maxSize + 1);
    }
    
    bool contains(int i) {
        return position[i] != -1;
    }
    
    void insert(int i, int key) {
        if (contains(i)) return;
        
        size++;
        position[i] = size;
        inverse[size] = i;
        heap[i] = key;
        swim(size);
    }
    
    int extractMax() {
        int max = inverse[1];
        swap(1, size--);
        sink(1);
        position[max] = -1;
        return max;
    }
    
    void changeKey(int i, int key) {
        if (!contains(i)) return;
        
        int oldKey = heap[i];
        heap[i] = key;
        
        if (key > oldKey) {
            swim(position[i]);
        } else {
            sink(position[i]);
        }
    }
};
```

## Heap-based Algorithms

### 1. Dijkstra's Algorithm with Priority Queue

```cpp path=null start=null
vector<int> dijkstra(vector<vector<pair<int, int>>>& graph, int start) {
    int n = graph.size();
    vector<int> dist(n, INT_MAX);
    
    // Min heap: {distance, vertex}
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    dist[start] = 0;
    pq.push({0, start});
    
    while (!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();
        
        if (d > dist[u]) continue;
        
        for (auto& edge : graph[u]) {
            int v = edge.first;
            int weight = edge.second;
            
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
    
    return dist;
}
// Time: O((V + E) log V), Space: O(V)
```

### 2. Prim's Algorithm for MST

```cpp path=null start=null
int primMST(vector<vector<pair<int, int>>>& graph) {
    int n = graph.size();
    vector<bool> inMST(n, false);
    
    // Min heap: {weight, vertex}
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    int mstWeight = 0;
    pq.push({0, 0});  // Start from vertex 0
    
    while (!pq.empty()) {
        int weight = pq.top().first;
        int u = pq.top().second;
        pq.pop();
        
        if (inMST[u]) continue;
        
        inMST[u] = true;
        mstWeight += weight;
        
        for (auto& edge : graph[u]) {
            int v = edge.first;
            int w = edge.second;
            
            if (!inMST[v]) {
                pq.push({w, v});
            }
        }
    }
    
    return mstWeight;
}
// Time: O(E log V), Space: O(V)
```

## Practice Problems

### Easy Level

```cpp path=null start=null
// Problem 1: Last Stone Weight
int lastStoneWeight(vector<int>& stones) {
    priority_queue<int> maxHeap(stones.begin(), stones.end());
    
    while (maxHeap.size() > 1) {
        int first = maxHeap.top(); maxHeap.pop();
        int second = maxHeap.top(); maxHeap.pop();
        
        if (first != second) {
            maxHeap.push(first - second);
        }
    }
    
    return maxHeap.empty() ? 0 : maxHeap.top();
}
// Time: O(n log n), Space: O(1)

// Problem 2: Kth Largest Element in Array
int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap;
    
    for (int num : nums) {
        minHeap.push(num);
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }
    
    return minHeap.top();
}
// Time: O(n log k), Space: O(k)

// Problem 3: Relative Ranks
vector<string> findRelativeRanks(vector<int>& score) {
    priority_queue<pair<int, int>> maxHeap;  // {score, index}
    
    for (int i = 0; i < score.size(); i++) {
        maxHeap.push({score[i], i});
    }
    
    vector<string> result(score.size());
    int rank = 1;
    
    while (!maxHeap.empty()) {
        int index = maxHeap.top().second;
        maxHeap.pop();
        
        if (rank == 1) {
            result[index] = "Gold Medal";
        } else if (rank == 2) {
            result[index] = "Silver Medal";
        } else if (rank == 3) {
            result[index] = "Bronze Medal";
        } else {
            result[index] = to_string(rank);
        }
        
        rank++;
    }
    
    return result;
}
// Time: O(n log n), Space: O(n)
```

### Medium Level

```cpp path=null start=null
// Problem 4: Reorganize String
string reorganizeString(string s) {
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }
    
    priority_queue<pair<int, char>> maxHeap;
    for (auto& p : freq) {
        maxHeap.push({p.second, p.first});
    }
    
    string result = "";
    pair<int, char> prev = {-1, '#'};
    
    while (!maxHeap.empty() || prev.first > 0) {
        if (prev.first > 0 && maxHeap.empty()) {
            return "";  // Cannot reorganize
        }
        
        auto curr = maxHeap.top();
        maxHeap.pop();
        
        result += curr.second;
        curr.first--;
        
        if (prev.first > 0) {
            maxHeap.push(prev);
        }
        
        prev = curr;
    }
    
    return result;
}
// Time: O(n log k), Space: O(k) where k is number of unique characters

// Problem 5: Ugly Number II
int nthUglyNumber(int n) {
    priority_queue<long, vector<long>, greater<long>> minHeap;
    unordered_set<long> seen;
    
    minHeap.push(1);
    seen.insert(1);
    
    long ugly = 1;
    vector<int> primes = {2, 3, 5};
    
    for (int i = 0; i < n; i++) {
        ugly = minHeap.top();
        minHeap.pop();
        
        for (int prime : primes) {
            long next = ugly * prime;
            if (seen.find(next) == seen.end()) {
                minHeap.push(next);
                seen.insert(next);
            }
        }
    }
    
    return ugly;
}
// Time: O(n log n), Space: O(n)

// Problem 6: Maximum Performance of a Team
int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
    vector<pair<int, int>> engineers;
    for (int i = 0; i < n; i++) {
        engineers.push_back({efficiency[i], speed[i]});
    }
    
    sort(engineers.rbegin(), engineers.rend());  // Sort by efficiency desc
    
    priority_queue<int, vector<int>, greater<int>> minHeap;  // Min heap for speeds
    long speedSum = 0;
    long maxPerf = 0;
    const int MOD = 1e9 + 7;
    
    for (auto& engineer : engineers) {
        int eff = engineer.first;
        int spd = engineer.second;
        
        minHeap.push(spd);
        speedSum += spd;
        
        if (minHeap.size() > k) {
            speedSum -= minHeap.top();
            minHeap.pop();
        }
        
        maxPerf = max(maxPerf, speedSum * eff);
    }
    
    return maxPerf % MOD;
}
// Time: O(n log n + n log k), Space: O(n)
```

### Hard Level

```cpp path=null start=null
// Problem 7: Smallest Range Covering Elements from K Lists
vector<int> smallestRange(vector<vector<int>>& nums) {
    // Min heap: {value, list_index, element_index}
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> minHeap;
    
    int maxVal = INT_MIN;
    
    // Initialize heap with first element from each list
    for (int i = 0; i < nums.size(); i++) {
        minHeap.push({nums[i][0], i, 0});
        maxVal = max(maxVal, nums[i][0]);
    }
    
    vector<int> result = {0, INT_MAX};
    
    while (minHeap.size() == nums.size()) {
        auto curr = minHeap.top();
        minHeap.pop();
        
        int minVal = curr[0];
        int listIdx = curr[1];
        int elemIdx = curr[2];
        
        // Update result if current range is smaller
        if (maxVal - minVal < result[1] - result[0]) {
            result = {minVal, maxVal};
        }
        
        // Move to next element in the same list
        if (elemIdx + 1 < nums[listIdx].size()) {
            int nextVal = nums[listIdx][elemIdx + 1];
            minHeap.push({nextVal, listIdx, elemIdx + 1});
            maxVal = max(maxVal, nextVal);
        }
    }
    
    return result;
}
// Time: O(n log k), Space: O(k) where n is total elements, k is number of lists

// Problem 8: Trapping Rain Water II
int trapRainWater(vector<vector<int>>& heightMap) {
    if (heightMap.empty()) return 0;
    
    int m = heightMap.size(), n = heightMap[0].size();
    
    // Min heap: {height, row, col}
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> minHeap;
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    
    // Add all boundary cells to heap
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == m-1 || j == 0 || j == n-1) {
                minHeap.push({heightMap[i][j], i, j});
                visited[i][j] = true;
            }
        }
    }
    
    int water = 0;
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    
    while (!minHeap.empty()) {
        auto curr = minHeap.top();
        minHeap.pop();
        
        int height = curr[0];
        int row = curr[1];
        int col = curr[2];
        
        for (auto& dir : directions) {
            int newRow = row + dir.first;
            int newCol = col + dir.second;
            
            if (newRow >= 0 && newRow < m && newCol >= 0 && newCol < n && !visited[newRow][newCol]) {
                water += max(0, height - heightMap[newRow][newCol]);
                minHeap.push({max(height, heightMap[newRow][newCol]), newRow, newCol});
                visited[newRow][newCol] = true;
            }
        }
    }
    
    return water;
}
// Time: O(mn log(mn)), Space: O(mn)
```

---

# Hashing and Hash Tables {#hashing}

Hashing is a technique used to map data to fixed-size values (hash codes) for efficient storage and retrieval. Hash tables are one of the most important data structures in computer science.

## What is Hashing?

Hashing transforms input data (keys) into fixed-size hash codes using a hash function. The hash code determines where to store the data in a hash table.

### Key Components:
1. **Hash Function**: Maps keys to hash codes
2. **Hash Table**: Array that stores key-value pairs
3. **Collision Handling**: Manages when multiple keys hash to same index
4. **Load Factor**: Ratio of filled slots to total slots

### Hash Function Properties:
1. **Deterministic**: Same input always produces same output
2. **Uniform Distribution**: Distributes keys evenly across table
3. **Fast Computation**: Should be computed quickly
4. **Avalanche Effect**: Small input changes cause large output changes

## Hash Functions

### 1. Division Method

```cpp path=null start=null
class DivisionHash {
private:
    int tableSize;
    
public:
    DivisionHash(int size) : tableSize(size) {}
    
    int hash(int key) {
        return key % tableSize;
    }
    
    int hash(const string& key) {
        int hashValue = 0;
        for (char c : key) {
            hashValue += c;
        }
        return hashValue % tableSize;
    }
};
// Simple but can cause clustering if tableSize is not prime
```

### 2. Multiplication Method

```cpp path=null start=null
class MultiplicationHash {
private:
    int tableSize;
    double A = 0.6180339887;  // (sqrt(5) - 1) / 2
    
public:
    MultiplicationHash(int size) : tableSize(size) {}
    
    int hash(int key) {
        double product = key * A;
        double fractionalPart = product - floor(product);
        return floor(tableSize * fractionalPart);
    }
};
// Better distribution but slightly more expensive
```

### 3. Universal Hashing

```cpp path=null start=null
class UniversalHash {
private:
    int tableSize;
    int a, b, p;
    
public:
    UniversalHash(int size) : tableSize(size) {
        p = 1000000007;  // Large prime
        a = rand() % (p - 1) + 1;  // Random coefficient
        b = rand() % p;            // Random coefficient
    }
    
    int hash(int key) {
        return ((long long)a * key + b) % p % tableSize;
    }
};
// Provides theoretical guarantees about collision probability
```

### 4. String Hashing

```cpp path=null start=null
class StringHash {
private:
    int base = 31;
    int mod = 1000000007;
    
public:
    // Polynomial rolling hash
    int hash(const string& s) {
        long long hashValue = 0;
        long long basepower = 1;
        
        for (char c : s) {
            hashValue = (hashValue + (c - 'a' + 1) * basepower) % mod;
            basepower = (basepower * base) % mod;
        }
        
        return hashValue;
    }
    
    // Rolling hash for substrings
    vector<int> rollingHash(const string& s) {
        int n = s.length();
        vector<int> prefixHash(n + 1, 0);
        vector<int> basePower(n + 1, 1);
        
        for (int i = 0; i < n; i++) {
            prefixHash[i + 1] = (prefixHash[i] + (long long)(s[i] - 'a' + 1) * basePower[i]) % mod;
            basePower[i + 1] = (basePower[i] * base) % mod;
        }
        
        return prefixHash;
    }
    
    // Get hash of substring [l, r]
    int substringHash(vector<int>& prefixHash, vector<int>& basePower, int l, int r) {
        int result = (prefixHash[r + 1] - prefixHash[l] + mod) % mod;
        result = (result * modInverse(basePower[l])) % mod;
        return result;
    }
    
private:
    int modInverse(int a) {
        return power(a, mod - 2, mod);
    }
    
    int power(int base, int exp, int mod) {
        int result = 1;
        while (exp > 0) {
            if (exp % 2 == 1) {
                result = (result * base) % mod;
            }
            base = (base * base) % mod;
            exp /= 2;
        }
        return result;
    }
};
```

## Collision Resolution

### 1. Separate Chaining

```cpp path=null start=null
template<typename K, typename V>
class SeparateChainingHashTable {
private:
    struct HashNode {
        K key;
        V value;
        HashNode* next;
        
        HashNode(K k, V v) : key(k), value(v), next(nullptr) {}
    };
    
    vector<HashNode*> table;
    int tableSize;
    int numElements;
    
    int hash(const K& key) {
        return std::hash<K>{}(key) % tableSize;
    }
    
    void resize() {
        if ((double)numElements / tableSize > 0.75) {  // Load factor > 0.75
            vector<HashNode*> oldTable = table;
            int oldSize = tableSize;
            
            tableSize *= 2;
            table.assign(tableSize, nullptr);
            numElements = 0;
            
            // Rehash all elements
            for (int i = 0; i < oldSize; i++) {
                HashNode* current = oldTable[i];
                while (current) {
                    HashNode* next = current->next;
                    insert(current->key, current->value);
                    delete current;
                    current = next;
                }
            }
        }
    }
    
public:
    SeparateChainingHashTable(int size = 16) : tableSize(size), numElements(0) {
        table.assign(tableSize, nullptr);
    }
    
    ~SeparateChainingHashTable() {
        clear();
    }
    
    void insert(const K& key, const V& value) {
        int index = hash(key);
        HashNode* current = table[index];
        
        // Check if key already exists
        while (current) {
            if (current->key == key) {
                current->value = value;  // Update existing
                return;
            }
            current = current->next;
        }
        
        // Insert new node at beginning of chain
        HashNode* newNode = new HashNode(key, value);
        newNode->next = table[index];
        table[index] = newNode;
        numElements++;
        
        resize();
    }
    // Time: O(1) average, O(n) worst case
    
    bool search(const K& key, V& value) {
        int index = hash(key);
        HashNode* current = table[index];
        
        while (current) {
            if (current->key == key) {
                value = current->value;
                return true;
            }
            current = current->next;
        }
        
        return false;
    }
    // Time: O(1) average, O(n) worst case
    
    bool remove(const K& key) {
        int index = hash(key);
        HashNode* current = table[index];
        HashNode* prev = nullptr;
        
        while (current) {
            if (current->key == key) {
                if (prev) {
                    prev->next = current->next;
                } else {
                    table[index] = current->next;
                }
                delete current;
                numElements--;
                return true;
            }
            prev = current;
            current = current->next;
        }
        
        return false;
    }
    // Time: O(1) average, O(n) worst case
    
    void clear() {
        for (int i = 0; i < tableSize; i++) {
            HashNode* current = table[i];
            while (current) {
                HashNode* next = current->next;
                delete current;
                current = next;
            }
            table[i] = nullptr;
        }
        numElements = 0;
    }
    
    double loadFactor() {
        return (double)numElements / tableSize;
    }
    
    int size() {
        return numElements;
    }
};
```

### 2. Open Addressing

#### Linear Probing

```cpp path=null start=null
template<typename K, typename V>
class LinearProbingHashTable {
private:
    struct HashNode {
        K key;
        V value;
        bool isDeleted;
        bool isEmpty;
        
        HashNode() : isDeleted(false), isEmpty(true) {}
        HashNode(K k, V v) : key(k), value(v), isDeleted(false), isEmpty(false) {}
    };
    
    vector<HashNode> table;
    int tableSize;
    int numElements;
    
    int hash(const K& key) {
        return std::hash<K>{}(key) % tableSize;
    }
    
    int probe(const K& key) {
        int index = hash(key);
        int originalIndex = index;
        
        while (!table[index].isEmpty && table[index].key != key) {
            index = (index + 1) % tableSize;
            if (index == originalIndex) {
                return -1;  // Table is full
            }
        }
        
        return index;
    }
    
    void resize() {
        if ((double)numElements / tableSize > 0.75) {
            vector<HashNode> oldTable = table;
            int oldSize = tableSize;
            
            tableSize *= 2;
            table.assign(tableSize, HashNode());
            numElements = 0;
            
            // Rehash all elements
            for (int i = 0; i < oldSize; i++) {
                if (!oldTable[i].isEmpty && !oldTable[i].isDeleted) {
                    insert(oldTable[i].key, oldTable[i].value);
                }
            }
        }
    }
    
public:
    LinearProbingHashTable(int size = 16) : tableSize(size), numElements(0) {
        table.assign(tableSize, HashNode());
    }
    
    void insert(const K& key, const V& value) {
        int index = probe(key);
        if (index == -1) {
            resize();
            index = probe(key);
        }
        
        if (table[index].isEmpty || table[index].isDeleted) {
            numElements++;
        }
        
        table[index] = HashNode(key, value);
        resize();
    }
    // Time: O(1) average, O(n) worst case
    
    bool search(const K& key, V& value) {
        int index = probe(key);
        if (index != -1 && !table[index].isEmpty && !table[index].isDeleted && table[index].key == key) {
            value = table[index].value;
            return true;
        }
        return false;
    }
    // Time: O(1) average, O(n) worst case
    
    bool remove(const K& key) {
        int index = probe(key);
        if (index != -1 && !table[index].isEmpty && !table[index].isDeleted && table[index].key == key) {
            table[index].isDeleted = true;
            numElements--;
            return true;
        }
        return false;
    }
    // Time: O(1) average, O(n) worst case
};
```

#### Quadratic Probing

```cpp path=null start=null
class QuadraticProbing {
private:
    int tableSize;
    
    int hash(int key) {
        return key % tableSize;
    }
    
    int quadraticProbe(int key, int attempt) {
        int index = hash(key);
        return (index + attempt * attempt) % tableSize;
    }
    
public:
    QuadraticProbing(int size) : tableSize(size) {}
    
    int findSlot(int key) {
        for (int i = 0; i < tableSize; i++) {
            int index = quadraticProbe(key, i);
            // Check if slot is available
            // Return index if available
        }
        return -1;  // Table full or no slot found
    }
};
// Reduces clustering compared to linear probing
```

#### Double Hashing

```cpp path=null start=null
class DoubleHashing {
private:
    int tableSize;
    
    int hash1(int key) {
        return key % tableSize;
    }
    
    int hash2(int key) {
        return 7 - (key % 7);  // Secondary hash function
    }
    
    int doubleHashProbe(int key, int attempt) {
        return (hash1(key) + attempt * hash2(key)) % tableSize;
    }
    
public:
    DoubleHashing(int size) : tableSize(size) {}
    
    int findSlot(int key) {
        for (int i = 0; i < tableSize; i++) {
            int index = doubleHashProbe(key, i);
            // Check if slot is available
            // Return index if available
        }
        return -1;
    }
};
// Best open addressing method - minimizes clustering
```

## STL Hash Containers

### 1. std::unordered_map

```cpp path=null start=null
#include <unordered_map>

void unorderedMapExample() {
    unordered_map<string, int> map;
    
    // Insert
    map["apple"] = 5;
    map.insert({"banana", 3});
    map.emplace("cherry", 8);
    
    // Search
    if (map.find("apple") != map.end()) {
        cout << "Apple found: " << map["apple"] << endl;
    }
    
    // Count occurrences
    cout << "Banana count: " << map.count("banana") << endl;
    
    // Iterate
    for (const auto& pair : map) {
        cout << pair.first << ": " << pair.second << endl;
    }
    
    // Remove
    map.erase("banana");
    
    // Size and capacity info
    cout << "Size: " << map.size() << endl;
    cout << "Bucket count: " << map.bucket_count() << endl;
    cout << "Load factor: " << map.load_factor() << endl;
    cout << "Max load factor: " << map.max_load_factor() << endl;
}

// Time Complexities:
// Average: O(1) for insert, search, delete
// Worst: O(n) for insert, search, delete
// Space: O(n)
```

### 2. std::unordered_set

```cpp path=null start=null
#include <unordered_set>

void unorderedSetExample() {
    unordered_set<int> set;
    
    // Insert
    set.insert(10);
    set.insert(20);
    set.insert(30);
    set.emplace(40);
    
    // Search
    if (set.find(20) != set.end()) {
        cout << "20 found in set" << endl;
    }
    
    // Count
    cout << "Count of 20: " << set.count(20) << endl;
    
    // Remove
    set.erase(30);
    
    // Iterate
    for (int val : set) {
        cout << val << " ";
    }
    cout << endl;
}
```

### 3. Custom Hash Functions

```cpp path=null start=null
// Custom hash for user-defined types
struct Point {
    int x, y;
    
    Point(int x, int y) : x(x), y(y) {}
    
    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
};

// Custom hash function
struct PointHash {
    size_t operator()(const Point& p) const {
        return hash<int>()(p.x) ^ (hash<int>()(p.y) << 1);
    }
};

void customHashExample() {
    unordered_set<Point, PointHash> pointSet;
    unordered_map<Point, string, PointHash> pointMap;
    
    Point p1(1, 2);
    Point p2(3, 4);
    
    pointSet.insert(p1);
    pointSet.insert(p2);
    
    pointMap[p1] = "First point";
    pointMap[p2] = "Second point";
}

// Hash function for pairs
struct PairHash {
    template<typename T1, typename T2>
    size_t operator()(const pair<T1, T2>& p) const {
        auto h1 = hash<T1>()(p.first);
        auto h2 = hash<T2>()(p.second);
        return h1 ^ (h2 << 1);
    }
};
```

## Hash Table Applications

### 1. Caching (LRU Cache)

```cpp path=null start=null
class LRUCache {
private:
    struct Node {
        int key, value;
        Node* prev;
        Node* next;
        
        Node(int k = 0, int v = 0) : key(k), value(v), prev(nullptr), next(nullptr) {}
    };
    
    int capacity;
    unordered_map<int, Node*> cache;
    Node* head;
    Node* tail;
    
    void addNode(Node* node) {
        // Add node right after head
        node->prev = head;
        node->next = head->next;
        
        head->next->prev = node;
        head->next = node;
    }
    
    void removeNode(Node* node) {
        // Remove an existing node
        Node* prevNode = node->prev;
        Node* nextNode = node->next;
        
        prevNode->next = nextNode;
        nextNode->prev = prevNode;
    }
    
    void moveToHead(Node* node) {
        // Move node to head (mark as recently used)
        removeNode(node);
        addNode(node);
    }
    
    Node* popTail() {
        // Remove last node (least recently used)
        Node* lastNode = tail->prev;
        removeNode(lastNode);
        return lastNode;
    }
    
public:
    LRUCache(int capacity) : capacity(capacity) {
        head = new Node();
        tail = new Node();
        
        head->next = tail;
        tail->prev = head;
    }
    
    ~LRUCache() {
        Node* current = head;
        while (current) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
    
    int get(int key) {
        if (cache.find(key) != cache.end()) {
            Node* node = cache[key];
            moveToHead(node);
            return node->value;
        }
        return -1;
    }
    // Time: O(1), Space: O(1)
    
    void put(int key, int value) {
        if (cache.find(key) != cache.end()) {
            // Update existing key
            Node* node = cache[key];
            node->value = value;
            moveToHead(node);
        } else {
            // Add new key
            Node* newNode = new Node(key, value);
            
            if (cache.size() >= capacity) {
                // Remove least recently used
                Node* tail = popTail();
                cache.erase(tail->key);
                delete tail;
            }
            
            cache[key] = newNode;
            addNode(newNode);
        }
    }
    // Time: O(1), Space: O(1)
};
```

### 2. Frequency Counter

```cpp path=null start=null
class FrequencyCounter {
private:
    unordered_map<string, int> freq;
    
public:
    void addWord(const string& word) {
        freq[word]++;
    }
    
    int getFrequency(const string& word) {
        return freq[word];  // Returns 0 if word doesn't exist
    }
    
    vector<pair<string, int>> getTopK(int k) {
        // Convert to vector for sorting
        vector<pair<string, int>> words(freq.begin(), freq.end());
        
        // Sort by frequency (descending)
        sort(words.begin(), words.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });
        
        // Return top k
        if (words.size() > k) {
            words.resize(k);
        }
        
        return words;
    }
    
    void removeWord(const string& word) {
        freq.erase(word);
    }
};
```

### 3. Two Sum Problem

```cpp path=null start=null
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;  // value -> index
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        
        if (map.find(complement) != map.end()) {
            return {map[complement], i};
        }
        
        map[nums[i]] = i;
    }
    
    return {};  // No solution
}
// Time: O(n), Space: O(n)

// Three Sum
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    
    for (int i = 0; i < nums.size() - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;  // Skip duplicates
        
        unordered_set<int> seen;
        int target = -nums[i];
        
        for (int j = i + 1; j < nums.size(); j++) {
            int complement = target - nums[j];
            
            if (seen.find(complement) != seen.end()) {
                result.push_back({nums[i], complement, nums[j]});
                
                // Skip duplicates
                while (j + 1 < nums.size() && nums[j] == nums[j + 1]) j++;
            }
            
            seen.insert(nums[j]);
        }
    }
    
    return result;
}
// Time: O(n²), Space: O(n)
```

### 4. Group Anagrams

```cpp path=null start=null
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> anagramGroups;
    
    for (const string& str : strs) {
        string key = str;
        sort(key.begin(), key.end());
        anagramGroups[key].push_back(str);
    }
    
    vector<vector<string>> result;
    for (const auto& group : anagramGroups) {
        result.push_back(group.second);
    }
    
    return result;
}
// Time: O(n * m log m), Space: O(n * m)
// where n = number of strings, m = average string length

// Alternative using character frequency as key
vector<vector<string>> groupAnagramsFreq(vector<string>& strs) {
    unordered_map<string, vector<string>> anagramGroups;
    
    for (const string& str : strs) {
        vector<int> freq(26, 0);
        for (char c : str) {
            freq[c - 'a']++;
        }
        
        string key = "";
        for (int i = 0; i < 26; i++) {
            key += to_string(freq[i]) + ",";
        }
        
        anagramGroups[key].push_back(str);
    }
    
    vector<vector<string>> result;
    for (const auto& group : anagramGroups) {
        result.push_back(group.second);
    }
    
    return result;
}
// Time: O(n * m), Space: O(n * m)
```

### 5. Longest Consecutive Sequence

```cpp path=null start=null
int longestConsecutive(vector<int>& nums) {
    unordered_set<int> numSet(nums.begin(), nums.end());
    int maxLength = 0;
    
    for (int num : numSet) {
        // Only start counting if this is the beginning of a sequence
        if (numSet.find(num - 1) == numSet.end()) {
            int currentNum = num;
            int currentLength = 1;
            
            // Count consecutive numbers
            while (numSet.find(currentNum + 1) != numSet.end()) {
                currentNum++;
                currentLength++;
            }
            
            maxLength = max(maxLength, currentLength);
        }
    }
    
    return maxLength;
}
// Time: O(n), Space: O(n)
```

## Advanced Hashing Techniques

### 1. Consistent Hashing

```cpp path=null start=null
class ConsistentHashing {
private:
    map<int, string> ring;  // Hash ring
    int virtualNodes;
    
    int hash(const string& key) {
        // Simple hash function (use better one in practice)
        int hashValue = 0;
        for (char c : key) {
            hashValue = hashValue * 31 + c;
        }
        return abs(hashValue);
    }
    
public:
    ConsistentHashing(int virtualNodes = 100) : virtualNodes(virtualNodes) {}
    
    void addServer(const string& server) {
        for (int i = 0; i < virtualNodes; i++) {
            string virtualKey = server + "#" + to_string(i);
            int hashValue = hash(virtualKey);
            ring[hashValue] = server;
        }
    }
    
    void removeServer(const string& server) {
        for (int i = 0; i < virtualNodes; i++) {
            string virtualKey = server + "#" + to_string(i);
            int hashValue = hash(virtualKey);
            ring.erase(hashValue);
        }
    }
    
    string getServer(const string& key) {
        if (ring.empty()) return "";
        
        int hashValue = hash(key);
        auto it = ring.lower_bound(hashValue);
        
        if (it == ring.end()) {
            it = ring.begin();  // Wrap around
        }
        
        return it->second;
    }
};
```

### 2. Bloom Filter

```cpp path=null start=null
class BloomFilter {
private:
    vector<bool> bitArray;
    int size;
    int numHashes;
    
    int hash1(const string& key) {
        int hash = 0;
        for (char c : key) {
            hash = hash * 31 + c;
        }
        return abs(hash) % size;
    }
    
    int hash2(const string& key) {
        int hash = 0;
        for (char c : key) {
            hash = hash * 37 + c;
        }
        return abs(hash) % size;
    }
    
    int hash3(const string& key) {
        int hash = 0;
        for (char c : key) {
            hash = hash * 41 + c;
        }
        return abs(hash) % size;
    }
    
public:
    BloomFilter(int size) : size(size), numHashes(3) {
        bitArray.assign(size, false);
    }
    
    void insert(const string& key) {
        bitArray[hash1(key)] = true;
        bitArray[hash2(key)] = true;
        bitArray[hash3(key)] = true;
    }
    
    bool mightContain(const string& key) {
        return bitArray[hash1(key)] && 
               bitArray[hash2(key)] && 
               bitArray[hash3(key)];
    }
    
    // Note: Bloom filters can have false positives but never false negatives
};
```

### 3. Cuckoo Hashing

```cpp path=null start=null
class CuckooHashing {
private:
    vector<int> table1, table2;
    int size;
    int maxLoops;
    
    int hash1(int key) {
        return key % size;
    }
    
    int hash2(int key) {
        return (key / size) % size;
    }
    
    bool insertHelper(int key, int table) {
        for (int i = 0; i < maxLoops; i++) {
            if (table == 1) {
                int pos = hash1(key);
                if (table1[pos] == -1) {
                    table1[pos] = key;
                    return true;
                }
                swap(key, table1[pos]);
                table = 2;
            } else {
                int pos = hash2(key);
                if (table2[pos] == -1) {
                    table2[pos] = key;
                    return true;
                }
                swap(key, table2[pos]);
                table = 1;
            }
        }
        return false;  // Need to rehash
    }
    
public:
    CuckooHashing(int size) : size(size), maxLoops(8) {
        table1.assign(size, -1);
        table2.assign(size, -1);
    }
    
    bool insert(int key) {
        return insertHelper(key, 1);
    }
    
    bool search(int key) {
        return table1[hash1(key)] == key || table2[hash2(key)] == key;
    }
    
    bool remove(int key) {
        int pos1 = hash1(key);
        int pos2 = hash2(key);
        
        if (table1[pos1] == key) {
            table1[pos1] = -1;
            return true;
        }
        
        if (table2[pos2] == key) {
            table2[pos2] = -1;
            return true;
        }
        
        return false;
    }
};
// Guarantees O(1) worst-case lookup time
```

## Practice Problems

### Easy Level

```cpp path=null start=null
// Problem 1: Contains Duplicate
bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;
    
    for (int num : nums) {
        if (seen.find(num) != seen.end()) {
            return true;
        }
        seen.insert(num);
    }
    
    return false;
}
// Time: O(n), Space: O(n)

// Problem 2: Valid Anagram
bool isAnagram(string s, string t) {
    if (s.length() != t.length()) return false;
    
    unordered_map<char, int> freq;
    
    for (char c : s) {
        freq[c]++;
    }
    
    for (char c : t) {
        freq[c]--;
        if (freq[c] < 0) return false;
    }
    
    return true;
}
// Time: O(n), Space: O(1) - at most 26 characters

// Problem 3: First Unique Character
int firstUniqChar(string s) {
    unordered_map<char, int> freq;
    
    // Count frequencies
    for (char c : s) {
        freq[c]++;
    }
    
    // Find first unique
    for (int i = 0; i < s.length(); i++) {
        if (freq[s[i]] == 1) {
            return i;
        }
    }
    
    return -1;
}
// Time: O(n), Space: O(1)
```

### Medium Level

```cpp path=null start=null
// Problem 4: Top K Frequent Elements
vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++;
    }
    
    // Use bucket sort
    vector<vector<int>> buckets(nums.size() + 1);
    for (auto& p : freq) {
        buckets[p.second].push_back(p.first);
    }
    
    vector<int> result;
    for (int i = buckets.size() - 1; i >= 0 && result.size() < k; i--) {
        for (int num : buckets[i]) {
            result.push_back(num);
            if (result.size() == k) return result;
        }
    }
    
    return result;
}
// Time: O(n), Space: O(n)

// Problem 5: Subarray Sum Equals K
int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prefixSumCount;
    prefixSumCount[0] = 1;  // Empty subarray
    
    int prefixSum = 0;
    int count = 0;
    
    for (int num : nums) {
        prefixSum += num;
        
        if (prefixSumCount.find(prefixSum - k) != prefixSumCount.end()) {
            count += prefixSumCount[prefixSum - k];
        }
        
        prefixSumCount[prefixSum]++;
    }
    
    return count;
}
// Time: O(n), Space: O(n)

// Problem 6: 4Sum II
int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
    unordered_map<int, int> sumCount;
    
    // Count all possible sums of nums1 and nums2
    for (int a : nums1) {
        for (int b : nums2) {
            sumCount[a + b]++;
        }
    }
    
    int count = 0;
    
    // For each sum of nums3 and nums4, check if complement exists
    for (int c : nums3) {
        for (int d : nums4) {
            int target = -(c + d);
            if (sumCount.find(target) != sumCount.end()) {
                count += sumCount[target];
            }
        }
    }
    
    return count;
}
// Time: O(n²), Space: O(n²)
```

### Hard Level

```cpp path=null start=null
// Problem 7: Substring with Concatenation of All Words
vector<int> findSubstring(string s, vector<string>& words) {
    if (words.empty() || s.empty()) return {};
    
    int wordLen = words[0].length();
    int wordCount = words.size();
    int totalLen = wordLen * wordCount;
    
    if (s.length() < totalLen) return {};
    
    // Count frequency of words
    unordered_map<string, int> wordFreq;
    for (const string& word : words) {
        wordFreq[word]++;
    }
    
    vector<int> result;
    
    for (int i = 0; i <= s.length() - totalLen; i++) {
        unordered_map<string, int> seen;
        int j = 0;
        
        while (j < wordCount) {
            string word = s.substr(i + j * wordLen, wordLen);
            
            if (wordFreq.find(word) == wordFreq.end()) {
                break;
            }
            
            seen[word]++;
            if (seen[word] > wordFreq[word]) {
                break;
            }
            
            j++;
        }
        
        if (j == wordCount) {
            result.push_back(i);
        }
    }
    
    return result;
}
// Time: O(n * m * k), Space: O(m) where n = s.length(), m = words.size(), k = word length

// Problem 8: Longest Substring with At Most K Distinct Characters
int lengthOfLongestSubstringKDistinct(string s, int k) {
    if (k == 0) return 0;
    
    unordered_map<char, int> charCount;
    int left = 0, maxLen = 0;
    
    for (int right = 0; right < s.length(); right++) {
        charCount[s[right]]++;
        
        while (charCount.size() > k) {
            charCount[s[left]]--;
            if (charCount[s[left]] == 0) {
                charCount.erase(s[left]);
            }
            left++;
        }
        
        maxLen = max(maxLen, right - left + 1);
    }
    
    return maxLen;
}
// Time: O(n), Space: O(min(k, alphabet_size))
```

---

# Graphs {#graphs}

Graphs are one of the most versatile and important data structures in computer science. They model relationships between objects and are used in countless applications from social networks to routing algorithms.

## What is a Graph?

A graph G = (V, E) consists of:
- **V**: Set of vertices (nodes)
- **E**: Set of edges connecting vertices

### Types of Graphs:

1. **Directed Graph (Digraph)**: Edges have direction
2. **Undirected Graph**: Edges are bidirectional
3. **Weighted Graph**: Edges have weights/costs
4. **Unweighted Graph**: All edges have equal weight
5. **Cyclic Graph**: Contains cycles
6. **Acyclic Graph**: No cycles (DAG for directed)
7. **Connected Graph**: Path exists between any two vertices
8. **Disconnected Graph**: Some vertices are not reachable

## Graph Representation

### 1. Adjacency Matrix

```cpp path=null start=null
class AdjacencyMatrix {
private:
    vector<vector<int>> matrix;
    int numVertices;
    bool isDirected;
    
public:
    AdjacencyMatrix(int vertices, bool directed = false) 
        : numVertices(vertices), isDirected(directed) {
        matrix.assign(vertices, vector<int>(vertices, 0));
    }
    
    void addEdge(int u, int v, int weight = 1) {
        if (u >= 0 && u < numVertices && v >= 0 && v < numVertices) {
            matrix[u][v] = weight;
            if (!isDirected) {
                matrix[v][u] = weight;
            }
        }
    }
    
    void removeEdge(int u, int v) {
        if (u >= 0 && u < numVertices && v >= 0 && v < numVertices) {
            matrix[u][v] = 0;
            if (!isDirected) {
                matrix[v][u] = 0;
            }
        }
    }
    
    bool hasEdge(int u, int v) {
        if (u >= 0 && u < numVertices && v >= 0 && v < numVertices) {
            return matrix[u][v] != 0;
        }
        return false;
    }
    
    int getWeight(int u, int v) {
        if (u >= 0 && u < numVertices && v >= 0 && v < numVertices) {
            return matrix[u][v];
        }
        return 0;
    }
    
    vector<int> getNeighbors(int vertex) {
        vector<int> neighbors;
        if (vertex >= 0 && vertex < numVertices) {
            for (int i = 0; i < numVertices; i++) {
                if (matrix[vertex][i] != 0) {
                    neighbors.push_back(i);
                }
            }
        }
        return neighbors;
    }
    
    void printGraph() {
        cout << "Adjacency Matrix:" << endl;
        for (int i = 0; i < numVertices; i++) {
            for (int j = 0; j < numVertices; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

// Time Complexities:
// Add Edge: O(1)
// Remove Edge: O(1)
// Has Edge: O(1)
// Get Neighbors: O(V)
// Space: O(V²)
```

### 2. Adjacency List

```cpp path=null start=null
class AdjacencyList {
private:
    vector<vector<pair<int, int>>> adjList;  // {neighbor, weight}
    int numVertices;
    bool isDirected;
    
public:
    AdjacencyList(int vertices, bool directed = false) 
        : numVertices(vertices), isDirected(directed) {
        adjList.resize(vertices);
    }
    
    void addEdge(int u, int v, int weight = 1) {
        if (u >= 0 && u < numVertices && v >= 0 && v < numVertices) {
            adjList[u].push_back({v, weight});
            if (!isDirected) {
                adjList[v].push_back({u, weight});
            }
        }
    }
    
    void removeEdge(int u, int v) {
        if (u >= 0 && u < numVertices && v >= 0 && v < numVertices) {
            adjList[u].erase(
                remove_if(adjList[u].begin(), adjList[u].end(),
                         [v](const pair<int, int>& p) { return p.first == v; }),
                adjList[u].end());
            
            if (!isDirected) {
                adjList[v].erase(
                    remove_if(adjList[v].begin(), adjList[v].end(),
                             [u](const pair<int, int>& p) { return p.first == u; }),
                    adjList[v].end());
            }
        }
    }
    
    bool hasEdge(int u, int v) {
        if (u >= 0 && u < numVertices && v >= 0 && v < numVertices) {
            for (const auto& neighbor : adjList[u]) {
                if (neighbor.first == v) {
                    return true;
                }
            }
        }
        return false;
    }
    
    int getWeight(int u, int v) {
        if (u >= 0 && u < numVertices && v >= 0 && v < numVertices) {
            for (const auto& neighbor : adjList[u]) {
                if (neighbor.first == v) {
                    return neighbor.second;
                }
            }
        }
        return -1;  // Edge not found
    }
    
    vector<pair<int, int>> getNeighbors(int vertex) {
        if (vertex >= 0 && vertex < numVertices) {
            return adjList[vertex];
        }
        return {};
    }
    
    void printGraph() {
        cout << "Adjacency List:" << endl;
        for (int i = 0; i < numVertices; i++) {
            cout << i << ": ";
            for (const auto& neighbor : adjList[i]) {
                cout << "(" << neighbor.first << "," << neighbor.second << ") ";
            }
            cout << endl;
        }
    }
    
    int getVertexCount() const { return numVertices; }
    const vector<vector<pair<int, int>>>& getAdjList() const { return adjList; }
};

// Time Complexities:
// Add Edge: O(1)
// Remove Edge: O(degree of vertex)
// Has Edge: O(degree of vertex)
// Get Neighbors: O(1)
// Space: O(V + E)
```

### 3. Edge List

```cpp path=null start=null
struct Edge {
    int from, to, weight;
    
    Edge(int f, int t, int w = 1) : from(f), to(t), weight(w) {}
    
    bool operator<(const Edge& other) const {
        return weight < other.weight;
    }
};

class EdgeList {
private:
    vector<Edge> edges;
    int numVertices;
    bool isDirected;
    
public:
    EdgeList(int vertices, bool directed = false) 
        : numVertices(vertices), isDirected(directed) {}
    
    void addEdge(int u, int v, int weight = 1) {
        edges.push_back(Edge(u, v, weight));
        if (!isDirected) {
            edges.push_back(Edge(v, u, weight));
        }
    }
    
    bool hasEdge(int u, int v) {
        for (const Edge& edge : edges) {
            if (edge.from == u && edge.to == v) {
                return true;
            }
        }
        return false;
    }
    
    vector<Edge> getAllEdges() const {
        return edges;
    }
    
    void printGraph() {
        cout << "Edge List:" << endl;
        for (const Edge& edge : edges) {
            cout << edge.from << " -> " << edge.to 
                 << " (weight: " << edge.weight << ")" << endl;
        }
    }
};

// Time Complexities:
// Add Edge: O(1)
// Has Edge: O(E)
// Space: O(E)
```

## Graph Traversal Algorithms

### 1. Depth-First Search (DFS)

```cpp path=null start=null
class DFS {
public:
    // Recursive DFS
    static void dfsRecursive(const AdjacencyList& graph, int vertex, vector<bool>& visited) {
        visited[vertex] = true;
        cout << vertex << " ";
        
        for (const auto& neighbor : graph.getNeighbors(vertex)) {
            if (!visited[neighbor.first]) {
                dfsRecursive(graph, neighbor.first, visited);
            }
        }
    }
    
    // Iterative DFS using stack
    static void dfsIterative(const AdjacencyList& graph, int start) {
        int numVertices = graph.getVertexCount();
        vector<bool> visited(numVertices, false);
        stack<int> st;
        
        st.push(start);
        
        while (!st.empty()) {
            int vertex = st.top();
            st.pop();
            
            if (!visited[vertex]) {
                visited[vertex] = true;
                cout << vertex << " ";
                
                // Add neighbors to stack (in reverse order for consistent traversal)
                vector<pair<int, int>> neighbors = graph.getNeighbors(vertex);
                for (int i = neighbors.size() - 1; i >= 0; i--) {
                    if (!visited[neighbors[i].first]) {
                        st.push(neighbors[i].first);
                    }
                }
            }
        }
    }
    
    // DFS for all components (handles disconnected graphs)
    static void dfsAll(const AdjacencyList& graph) {
        int numVertices = graph.getVertexCount();
        vector<bool> visited(numVertices, false);
        
        for (int i = 0; i < numVertices; i++) {
            if (!visited[i]) {
                cout << "Component: ";
                dfsRecursive(graph, i, visited);
                cout << endl;
            }
        }
    }
    
    // Check if path exists between two vertices
    static bool hasPath(const AdjacencyList& graph, int start, int end) {
        if (start == end) return true;
        
        int numVertices = graph.getVertexCount();
        vector<bool> visited(numVertices, false);
        stack<int> st;
        
        st.push(start);
        
        while (!st.empty()) {
            int vertex = st.top();
            st.pop();
            
            if (vertex == end) return true;
            
            if (!visited[vertex]) {
                visited[vertex] = true;
                
                for (const auto& neighbor : graph.getNeighbors(vertex)) {
                    if (!visited[neighbor.first]) {
                        st.push(neighbor.first);
                    }
                }
            }
        }
        
        return false;
    }
};

// Time: O(V + E), Space: O(V)
```

### 2. Breadth-First Search (BFS)

```cpp path=null start=null
class BFS {
public:
    // Standard BFS
    static void bfs(const AdjacencyList& graph, int start) {
        int numVertices = graph.getVertexCount();
        vector<bool> visited(numVertices, false);
        queue<int> q;
        
        visited[start] = true;
        q.push(start);
        
        while (!q.empty()) {
            int vertex = q.front();
            q.pop();
            cout << vertex << " ";
            
            for (const auto& neighbor : graph.getNeighbors(vertex)) {
                if (!visited[neighbor.first]) {
                    visited[neighbor.first] = true;
                    q.push(neighbor.first);
                }
            }
        }
    }
    
    // BFS with level tracking
    static void bfsLevels(const AdjacencyList& graph, int start) {
        int numVertices = graph.getVertexCount();
        vector<bool> visited(numVertices, false);
        vector<int> level(numVertices, -1);
        queue<int> q;
        
        visited[start] = true;
        level[start] = 0;
        q.push(start);
        
        while (!q.empty()) {
            int vertex = q.front();
            q.pop();
            cout << "Vertex " << vertex << " at level " << level[vertex] << endl;
            
            for (const auto& neighbor : graph.getNeighbors(vertex)) {
                if (!visited[neighbor.first]) {
                    visited[neighbor.first] = true;
                    level[neighbor.first] = level[vertex] + 1;
                    q.push(neighbor.first);
                }
            }
        }
    }
    
    // Shortest path in unweighted graph
    static vector<int> shortestPath(const AdjacencyList& graph, int start, int end) {
        int numVertices = graph.getVertexCount();
        vector<bool> visited(numVertices, false);
        vector<int> parent(numVertices, -1);
        queue<int> q;
        
        visited[start] = true;
        q.push(start);
        
        while (!q.empty()) {
            int vertex = q.front();
            q.pop();
            
            if (vertex == end) {
                // Reconstruct path
                vector<int> path;
                int current = end;
                while (current != -1) {
                    path.push_back(current);
                    current = parent[current];
                }
                reverse(path.begin(), path.end());
                return path;
            }
            
            for (const auto& neighbor : graph.getNeighbors(vertex)) {
                if (!visited[neighbor.first]) {
                    visited[neighbor.first] = true;
                    parent[neighbor.first] = vertex;
                    q.push(neighbor.first);
                }
            }
        }
        
        return {};  // No path found
    }
    
    // BFS for all components
    static void bfsAll(const AdjacencyList& graph) {
        int numVertices = graph.getVertexCount();
        vector<bool> visited(numVertices, false);
        
        for (int i = 0; i < numVertices; i++) {
            if (!visited[i]) {
                cout << "Component: ";
                
                queue<int> q;
                visited[i] = true;
                q.push(i);
                
                while (!q.empty()) {
                    int vertex = q.front();
                    q.pop();
                    cout << vertex << " ";
                    
                    for (const auto& neighbor : graph.getNeighbors(vertex)) {
                        if (!visited[neighbor.first]) {
                            visited[neighbor.first] = true;
                            q.push(neighbor.first);
                        }
                    }
                }
                cout << endl;
            }
        }
    }
};

// Time: O(V + E), Space: O(V)
```

## Cycle Detection

### 1. Cycle Detection in Undirected Graph

```cpp path=null start=null
class CycleDetectionUndirected {
public:
    // DFS-based cycle detection
    static bool hasCycleDFS(const AdjacencyList& graph) {
        int numVertices = graph.getVertexCount();
        vector<bool> visited(numVertices, false);
        
        for (int i = 0; i < numVertices; i++) {
            if (!visited[i]) {
                if (hasCycleUtil(graph, i, visited, -1)) {
                    return true;
                }
            }
        }
        return false;
    }
    
private:
    static bool hasCycleUtil(const AdjacencyList& graph, int vertex, 
                           vector<bool>& visited, int parent) {
        visited[vertex] = true;
        
        for (const auto& neighbor : graph.getNeighbors(vertex)) {
            int adj = neighbor.first;
            
            if (!visited[adj]) {
                if (hasCycleUtil(graph, adj, visited, vertex)) {
                    return true;
                }
            } else if (adj != parent) {
                return true;  // Back edge found
            }
        }
        return false;
    }
};
```

### 2. Cycle Detection in Directed Graph

```cpp path=null start=null
class CycleDetectionDirected {
public:
    // DFS-based cycle detection (using colors)
    static bool hasCycleDFS(const AdjacencyList& graph) {
        int numVertices = graph.getVertexCount();
        vector<int> color(numVertices, 0);  // 0: white, 1: gray, 2: black
        
        for (int i = 0; i < numVertices; i++) {
            if (color[i] == 0) {
                if (hasCycleUtil(graph, i, color)) {
                    return true;
                }
            }
        }
        return false;
    }
    
private:
    static bool hasCycleUtil(const AdjacencyList& graph, int vertex, vector<int>& color) {
        color[vertex] = 1;  // Mark as gray (being processed)
        
        for (const auto& neighbor : graph.getNeighbors(vertex)) {
            int adj = neighbor.first;
            
            if (color[adj] == 1) {
                return true;  // Back edge to gray vertex
            }
            
            if (color[adj] == 0 && hasCycleUtil(graph, adj, color)) {
                return true;
            }
        }
        
        color[vertex] = 2;  // Mark as black (completely processed)
        return false;
    }
};
```

## Topological Sorting

```cpp path=null start=null
class TopologicalSort {
public:
    // Kahn's Algorithm (BFS-based)
    static vector<int> kahnAlgorithm(const AdjacencyList& graph) {
        int numVertices = graph.getVertexCount();
        vector<int> indegree(numVertices, 0);
        vector<int> result;
        
        // Calculate indegrees
        for (int i = 0; i < numVertices; i++) {
            for (const auto& neighbor : graph.getNeighbors(i)) {
                indegree[neighbor.first]++;
            }
        }
        
        // Find vertices with indegree 0
        queue<int> q;
        for (int i = 0; i < numVertices; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }
        
        while (!q.empty()) {
            int vertex = q.front();
            q.pop();
            result.push_back(vertex);
            
            // Reduce indegree of neighbors
            for (const auto& neighbor : graph.getNeighbors(vertex)) {
                indegree[neighbor.first]--;
                if (indegree[neighbor.first] == 0) {
                    q.push(neighbor.first);
                }
            }
        }
        
        // Check if graph has cycle
        if (result.size() != numVertices) {
            return {};  // Graph has cycle
        }
        
        return result;
    }
    
    // DFS-based topological sort
    static vector<int> dfsTopSort(const AdjacencyList& graph) {
        int numVertices = graph.getVertexCount();
        vector<bool> visited(numVertices, false);
        stack<int> Stack;
        
        for (int i = 0; i < numVertices; i++) {
            if (!visited[i]) {
                dfsUtil(graph, i, visited, Stack);
            }
        }
        
        vector<int> result;
        while (!Stack.empty()) {
            result.push_back(Stack.top());
            Stack.pop();
        }
        
        return result;
    }
    
private:
    static void dfsUtil(const AdjacencyList& graph, int vertex, 
                       vector<bool>& visited, stack<int>& Stack) {
        visited[vertex] = true;
        
        for (const auto& neighbor : graph.getNeighbors(vertex)) {
            if (!visited[neighbor.first]) {
                dfsUtil(graph, neighbor.first, visited, Stack);
            }
        }
        
        Stack.push(vertex);
    }
};

// Time: O(V + E), Space: O(V)
```

## Connected Components

```cpp path=null start=null
class ConnectedComponents {
public:
    // Find all connected components using DFS
    static vector<vector<int>> findComponents(const AdjacencyList& graph) {
        int numVertices = graph.getVertexCount();
        vector<bool> visited(numVertices, false);
        vector<vector<int>> components;
        
        for (int i = 0; i < numVertices; i++) {
            if (!visited[i]) {
                vector<int> component;
                dfs(graph, i, visited, component);
                components.push_back(component);
            }
        }
        
        return components;
    }
    
    // Count number of connected components
    static int countComponents(const AdjacencyList& graph) {
        int numVertices = graph.getVertexCount();
        vector<bool> visited(numVertices, false);
        int count = 0;
        
        for (int i = 0; i < numVertices; i++) {
            if (!visited[i]) {
                dfs(graph, i, visited);
                count++;
            }
        }
        
        return count;
    }
    
private:
    static void dfs(const AdjacencyList& graph, int vertex, vector<bool>& visited) {
        visited[vertex] = true;
        
        for (const auto& neighbor : graph.getNeighbors(vertex)) {
            if (!visited[neighbor.first]) {
                dfs(graph, neighbor.first, visited);
            }
        }
    }
    
    static void dfs(const AdjacencyList& graph, int vertex, 
                   vector<bool>& visited, vector<int>& component) {
        visited[vertex] = true;
        component.push_back(vertex);
        
        for (const auto& neighbor : graph.getNeighbors(vertex)) {
            if (!visited[neighbor.first]) {
                dfs(graph, neighbor.first, visited, component);
            }
        }
    }
};
```

## Shortest Path Algorithms

### 1. Dijkstra's Algorithm

```cpp path=null start=null
class DijkstraAlgorithm {
public:
    // Single source shortest path for non-negative weights
    static pair<vector<int>, vector<int>> dijkstra(const AdjacencyList& graph, int source) {
        int numVertices = graph.getVertexCount();
        vector<int> dist(numVertices, INT_MAX);
        vector<int> parent(numVertices, -1);
        
        // Min-heap: {distance, vertex}
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        dist[source] = 0;
        pq.push({0, source});
        
        while (!pq.empty()) {
            int u = pq.top().second;
            int d = pq.top().first;
            pq.pop();
            
            // Skip if we've found a better path already
            if (d > dist[u]) continue;
            
            for (const auto& edge : graph.getNeighbors(u)) {
                int v = edge.first;
                int weight = edge.second;
                
                if (dist[u] + weight < dist[v]) {
                    dist[v] = dist[u] + weight;
                    parent[v] = u;
                    pq.push({dist[v], v});
                }
            }
        }
        
        return {dist, parent};
    }
    
    // Get shortest path from source to destination
    static vector<int> getPath(const vector<int>& parent, int source, int dest) {
        vector<int> path;
        if (parent[dest] == -1 && dest != source) {
            return path;  // No path exists
        }
        
        int current = dest;
        while (current != -1) {
            path.push_back(current);
            current = parent[current];
        }
        
        reverse(path.begin(), path.end());
        return path;
    }
    
    // Print all shortest paths from source
    static void printPaths(const AdjacencyList& graph, int source) {
        auto [dist, parent] = dijkstra(graph, source);
        
        cout << "Shortest distances from vertex " << source << ":" << endl;
        for (int i = 0; i < graph.getVertexCount(); i++) {
            cout << "To " << i << ": ";
            if (dist[i] == INT_MAX) {
                cout << "No path" << endl;
            } else {
                cout << "Distance = " << dist[i] << ", Path: ";
                vector<int> path = getPath(parent, source, i);
                for (int j = 0; j < path.size(); j++) {
                    cout << path[j];
                    if (j < path.size() - 1) cout << " -> ";
                }
                cout << endl;
            }
        }
    }
};

// Time: O((V + E) log V), Space: O(V)
```

### 2. Bellman-Ford Algorithm

```cpp path=null start=null
class BellmanFordAlgorithm {
public:
    // Single source shortest path (handles negative weights)
    static pair<vector<int>, bool> bellmanFord(const EdgeList& graph, int numVertices, int source) {
        vector<int> dist(numVertices, INT_MAX);
        vector<Edge> edges = graph.getAllEdges();
        
        dist[source] = 0;
        
        // Relax edges V-1 times
        for (int i = 0; i < numVertices - 1; i++) {
            for (const Edge& edge : edges) {
                if (dist[edge.from] != INT_MAX && 
                    dist[edge.from] + edge.weight < dist[edge.to]) {
                    dist[edge.to] = dist[edge.from] + edge.weight;
                }
            }
        }
        
        // Check for negative cycles
        bool hasNegativeCycle = false;
        for (const Edge& edge : edges) {
            if (dist[edge.from] != INT_MAX && 
                dist[edge.from] + edge.weight < dist[edge.to]) {
                hasNegativeCycle = true;
                break;
            }
        }
        
        return {dist, hasNegativeCycle};
    }
    
    static void printPaths(const EdgeList& graph, int numVertices, int source) {
        auto [dist, hasNegCycle] = bellmanFord(graph, numVertices, source);
        
        if (hasNegCycle) {
            cout << "Graph contains negative cycle!" << endl;
            return;
        }
        
        cout << "Shortest distances from vertex " << source << ":" << endl;
        for (int i = 0; i < numVertices; i++) {
            cout << "To " << i << ": ";
            if (dist[i] == INT_MAX) {
                cout << "No path" << endl;
            } else {
                cout << dist[i] << endl;
            }
        }
    }
};

// Time: O(VE), Space: O(V)
```

### 3. Floyd-Warshall Algorithm

```cpp path=null start=null
class FloydWarshallAlgorithm {
public:
    // All pairs shortest path
    static vector<vector<int>> floydWarshall(const AdjacencyMatrix& matrix, int numVertices) {
        vector<vector<int>> dist(numVertices, vector<int>(numVertices));
        
        // Initialize distances
        for (int i = 0; i < numVertices; i++) {
            for (int j = 0; j < numVertices; j++) {
                if (i == j) {
                    dist[i][j] = 0;
                } else {
                    int weight = matrix.getWeight(i, j);
                    dist[i][j] = (weight == 0) ? INT_MAX : weight;
                }
            }
        }
        
        // Floyd-Warshall algorithm
        for (int k = 0; k < numVertices; k++) {
            for (int i = 0; i < numVertices; i++) {
                for (int j = 0; j < numVertices; j++) {
                    if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX && 
                        dist[i][k] + dist[k][j] < dist[i][j]) {
                        dist[i][j] = dist[i][k] + dist[k][j];
                    }
                }
            }
        }
        
        return dist;
    }
    
    // Check for negative cycles
    static bool hasNegativeCycle(const vector<vector<int>>& dist, int numVertices) {
        for (int i = 0; i < numVertices; i++) {
            if (dist[i][i] < 0) {
                return true;
            }
        }
        return false;
    }
    
    static void printAllPaths(const vector<vector<int>>& dist, int numVertices) {
        cout << "All pairs shortest paths:" << endl;
        cout << "     ";
        for (int j = 0; j < numVertices; j++) {
            cout << setw(8) << j;
        }
        cout << endl;
        
        for (int i = 0; i < numVertices; i++) {
            cout << setw(3) << i << ": ";
            for (int j = 0; j < numVertices; j++) {
                if (dist[i][j] == INT_MAX) {
                    cout << setw(8) << "INF";
                } else {
                    cout << setw(8) << dist[i][j];
                }
            }
            cout << endl;
        }
    }
};

// Time: O(V³), Space: O(V²)
```

## Minimum Spanning Tree (MST)

### 1. Kruskal's Algorithm

```cpp path=null start=null
class UnionFind {
private:
    vector<int> parent, rank;
    
public:
    UnionFind(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }
    
    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);  // Path compression
        }
        return parent[x];
    }
    
    bool unite(int x, int y) {
        int px = find(x);
        int py = find(y);
        
        if (px == py) return false;  // Same component
        
        // Union by rank
        if (rank[px] < rank[py]) {
            parent[px] = py;
        } else if (rank[px] > rank[py]) {
            parent[py] = px;
        } else {
            parent[py] = px;
            rank[px]++;
        }
        
        return true;
    }
};

class KruskalAlgorithm {
public:
    static pair<vector<Edge>, int> kruskalMST(const EdgeList& graph, int numVertices) {
        vector<Edge> edges = graph.getAllEdges();
        vector<Edge> mst;
        int totalWeight = 0;
        
        // Sort edges by weight
        sort(edges.begin(), edges.end());
        
        UnionFind uf(numVertices);
        
        for (const Edge& edge : edges) {
            if (uf.unite(edge.from, edge.to)) {
                mst.push_back(edge);
                totalWeight += edge.weight;
                
                if (mst.size() == numVertices - 1) {
                    break;  // MST complete
                }
            }
        }
        
        return {mst, totalWeight};
    }
    
    static void printMST(const EdgeList& graph, int numVertices) {
        auto [mst, totalWeight] = kruskalMST(graph, numVertices);
        
        cout << "Minimum Spanning Tree (Kruskal's):" << endl;
        cout << "Edges in MST:" << endl;
        
        for (const Edge& edge : mst) {
            cout << edge.from << " -- " << edge.to << " (weight: " << edge.weight << ")" << endl;
        }
        
        cout << "Total weight: " << totalWeight << endl;
    }
};

// Time: O(E log E), Space: O(V)
```

### 2. Prim's Algorithm

```cpp path=null start=null
class PrimAlgorithm {
public:
    static pair<vector<Edge>, int> primMST(const AdjacencyList& graph, int start = 0) {
        int numVertices = graph.getVertexCount();
        vector<bool> inMST(numVertices, false);
        vector<int> key(numVertices, INT_MAX);
        vector<int> parent(numVertices, -1);
        
        // Min-heap: {weight, vertex}
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        key[start] = 0;
        pq.push({0, start});
        
        vector<Edge> mst;
        int totalWeight = 0;
        
        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();
            
            if (inMST[u]) continue;
            
            inMST[u] = true;
            
            if (parent[u] != -1) {
                mst.push_back(Edge(parent[u], u, key[u]));
                totalWeight += key[u];
            }
            
            for (const auto& edge : graph.getNeighbors(u)) {
                int v = edge.first;
                int weight = edge.second;
                
                if (!inMST[v] && weight < key[v]) {
                    key[v] = weight;
                    parent[v] = u;
                    pq.push({key[v], v});
                }
            }
        }
        
        return {mst, totalWeight};
    }
    
    static void printMST(const AdjacencyList& graph) {
        auto [mst, totalWeight] = primMST(graph);
        
        cout << "Minimum Spanning Tree (Prim's):" << endl;
        cout << "Edges in MST:" << endl;
        
        for (const Edge& edge : mst) {
            cout << edge.from << " -- " << edge.to << " (weight: " << edge.weight << ")" << endl;
        }
        
        cout << "Total weight: " << totalWeight << endl;
    }
};

// Time: O((V + E) log V), Space: O(V)
```

## Graph Practice Problems

### Easy Level

```cpp path=null start=null
// Problem 1: Number of Islands
int numIslands(vector<vector<char>>& grid) {
    if (grid.empty()) return 0;
    
    int rows = grid.size();
    int cols = grid[0].size();
    int count = 0;
    
    function<void(int, int)> dfs = [&](int r, int c) {
        if (r < 0 || r >= rows || c < 0 || c >= cols || grid[r][c] == '0') {
            return;
        }
        
        grid[r][c] = '0';  // Mark as visited
        
        // Visit all 4 directions
        dfs(r + 1, c);
        dfs(r - 1, c);
        dfs(r, c + 1);
        dfs(r, c - 1);
    };
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == '1') {
                dfs(i, j);
                count++;
            }
        }
    }
    
    return count;
}
// Time: O(m * n), Space: O(m * n) for recursion stack

// Problem 2: Clone Graph
struct Node {
    int val;
    vector<Node*> neighbors;
    Node() { val = 0; neighbors = vector<Node*>(); }
    Node(int _val) { val = _val; neighbors = vector<Node*>(); }
    Node(int _val, vector<Node*> _neighbors) { val = _val; neighbors = _neighbors; }
};

Node* cloneGraph(Node* node) {
    if (!node) return nullptr;
    
    unordered_map<Node*, Node*> visited;
    
    function<Node*(Node*)> dfs = [&](Node* original) -> Node* {
        if (visited.find(original) != visited.end()) {
            return visited[original];
        }
        
        Node* clone = new Node(original->val);
        visited[original] = clone;
        
        for (Node* neighbor : original->neighbors) {
            clone->neighbors.push_back(dfs(neighbor));
        }
        
        return clone;
    };
    
    return dfs(node);
}
// Time: O(V + E), Space: O(V)

// Problem 3: Valid Path in Graph
bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    if (source == destination) return true;
    
    AdjacencyList graph(n);
    for (const auto& edge : edges) {
        graph.addEdge(edge[0], edge[1]);
    }
    
    return DFS::hasPath(graph, source, destination);
}
// Time: O(V + E), Space: O(V)
```

### Medium Level

```cpp path=null start=null
// Problem 4: Course Schedule
bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    AdjacencyList graph(numCourses, true);  // Directed graph
    
    for (const auto& prereq : prerequisites) {
        graph.addEdge(prereq[1], prereq[0]);  // prereq[1] -> prereq[0]
    }
    
    // Check if topological sort is possible (no cycle)
    vector<int> topSort = TopologicalSort::kahnAlgorithm(graph);
    return topSort.size() == numCourses;
}
// Time: O(V + E), Space: O(V)

// Problem 5: Network Delay Time
int networkDelayTime(vector<vector<int>>& times, int n, int k) {
    AdjacencyList graph(n + 1, true);
    
    for (const auto& time : times) {
        graph.addEdge(time[0], time[1], time[2]);
    }
    
    auto [dist, parent] = DijkstraAlgorithm::dijkstra(graph, k);
    
    int maxTime = 0;
    for (int i = 1; i <= n; i++) {
        if (dist[i] == INT_MAX) {
            return -1;  // Some node unreachable
        }
        maxTime = max(maxTime, dist[i]);
    }
    
    return maxTime;
}
// Time: O((V + E) log V), Space: O(V)

// Problem 6: Cheapest Flights Within K Stops
int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
    vector<vector<pair<int, int>>> graph(n);
    for (const auto& flight : flights) {
        graph[flight[0]].push_back({flight[1], flight[2]});
    }
    
    // {cost, {node, stops}}
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    
    pq.push({0, {src, 0}});
    
    // Track minimum cost to reach each node with at most k stops
    map<pair<int, int>, int> visited;  // {node, stops} -> min_cost
    
    while (!pq.empty()) {
        auto [cost, nodeStops] = pq.top();
        auto [node, stops] = nodeStops;
        pq.pop();
        
        if (node == dst) {
            return cost;
        }
        
        if (stops > k) continue;
        
        if (visited.count({node, stops}) && visited[{node, stops}] <= cost) {
            continue;
        }
        
        visited[{node, stops}] = cost;
        
        for (auto [neighbor, price] : graph[node]) {
            pq.push({cost + price, {neighbor, stops + 1}});
        }
    }
    
    return -1;
}
// Time: O(E + V * K * log(V * K)), Space: O(V * K)
```

### Hard Level

```cpp path=null start=null
// Problem 7: Critical Connections in a Network
class CriticalConnections {
public:
    static vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        AdjacencyList graph(n);
        for (const auto& conn : connections) {
            graph.addEdge(conn[0], conn[1]);
        }
        
        vector<vector<int>> bridges;
        vector<bool> visited(n, false);
        vector<int> disc(n), low(n), parent(n, -1);
        int time = 0;
        
        function<void(int)> bridgeUtil = [&](int u) {
            visited[u] = true;
            disc[u] = low[u] = time++;
            
            for (const auto& edge : graph.getNeighbors(u)) {
                int v = edge.first;
                
                if (!visited[v]) {
                    parent[v] = u;
                    bridgeUtil(v);
                    
                    low[u] = min(low[u], low[v]);
                    
                    // Bridge condition
                    if (low[v] > disc[u]) {
                        bridges.push_back({u, v});
                    }
                } else if (v != parent[u]) {
                    low[u] = min(low[u], disc[v]);
                }
            }
        };
        
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                bridgeUtil(i);
            }
        }
        
        return bridges;
    }
};
// Time: O(V + E), Space: O(V)

// Problem 8: Word Ladder
int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
    unordered_set<string> wordSet(wordList.begin(), wordList.end());
    if (wordSet.find(endWord) == wordSet.end()) {
        return 0;
    }
    
    queue<pair<string, int>> q;
    q.push({beginWord, 1});
    
    while (!q.empty()) {
        auto [word, level] = q.front();
        q.pop();
        
        if (word == endWord) {
            return level;
        }
        
        // Try changing each character
        for (int i = 0; i < word.length(); i++) {
            char original = word[i];
            
            for (char c = 'a'; c <= 'z'; c++) {
                if (c == original) continue;
                
                word[i] = c;
                
                if (wordSet.find(word) != wordSet.end()) {
                    q.push({word, level + 1});
                    wordSet.erase(word);
                }
            }
            
            word[i] = original;  // Backtrack
        }
    }
    
    return 0;
}
// Time: O(M² × N), Space: O(M × N)
// where M = length of each word, N = total number of words
```

---

# Sorting Algorithms {#sorting}

Sorting is the process of arranging elements in a specific order (ascending or descending). Sorting algorithms are fundamental to computer science and form the basis for many other algorithms.

## Classification of Sorting Algorithms

### By Time Complexity:
- **O(n²)**: Bubble, Selection, Insertion Sort
- **O(n log n)**: Merge, Heap, Quick Sort (average)
- **O(n)**: Counting, Radix, Bucket Sort (under specific conditions)

### By Space Complexity:
- **In-place**: Bubble, Selection, Insertion, Quick, Heap Sort
- **Out-of-place**: Merge, Counting, Radix, Bucket Sort

### By Stability:
- **Stable**: Merge, Insertion, Bubble, Counting, Radix Sort
- **Unstable**: Selection, Quick, Heap Sort

## Elementary Sorting Algorithms

### 1. Bubble Sort

```cpp path=null start=null
class BubbleSort {
public:
    static void bubbleSort(vector<int>& arr) {
        int n = arr.size();
        
        for (int i = 0; i < n - 1; i++) {
            bool swapped = false;
            
            // Last i elements are already sorted
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }
            
            // If no swapping occurred, array is sorted
            if (!swapped) break;
        }
    }
    
    // Optimized version with early termination
    static void optimizedBubbleSort(vector<int>& arr) {
        int n = arr.size();
        
        for (int i = 0; i < n - 1; i++) {
            bool swapped = false;
            
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }
            
            if (!swapped) break;  // Early termination
        }
    }
    
    static void printArray(const vector<int>& arr) {
        for (int val : arr) {
            cout << val << " ";
        }
        cout << endl;
    }
};

// Time: O(n²) worst/average, O(n) best
// Space: O(1)
// Stable: Yes
// In-place: Yes
```

### 2. Selection Sort

```cpp path=null start=null
class SelectionSort {
public:
    static void selectionSort(vector<int>& arr) {
        int n = arr.size();
        
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            
            // Find minimum element in remaining array
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            
            // Swap minimum element with first element
            if (minIndex != i) {
                swap(arr[i], arr[minIndex]);
            }
        }
    }
    
    // Variant: Selection sort with maximum element
    static void selectionSortMax(vector<int>& arr) {
        int n = arr.size();
        
        for (int i = n - 1; i > 0; i--) {
            int maxIndex = i;
            
            for (int j = 0; j < i; j++) {
                if (arr[j] > arr[maxIndex]) {
                    maxIndex = j;
                }
            }
            
            if (maxIndex != i) {
                swap(arr[i], arr[maxIndex]);
            }
        }
    }
};

// Time: O(n²) all cases
// Space: O(1)
// Stable: No
// In-place: Yes
```

### 3. Insertion Sort

```cpp path=null start=null
class InsertionSort {
public:
    static void insertionSort(vector<int>& arr) {
        int n = arr.size();
        
        for (int i = 1; i < n; i++) {
            int key = arr[i];
            int j = i - 1;
            
            // Move elements greater than key one position ahead
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            
            arr[j + 1] = key;
        }
    }
    
    // Binary insertion sort (optimized for comparisons)
    static void binaryInsertionSort(vector<int>& arr) {
        int n = arr.size();
        
        for (int i = 1; i < n; i++) {
            int key = arr[i];
            int left = 0, right = i;
            
            // Binary search for insertion position
            while (left < right) {
                int mid = left + (right - left) / 2;
                if (arr[mid] > key) {
                    right = mid;
                } else {
                    left = mid + 1;
                }
            }
            
            // Shift elements
            for (int j = i; j > left; j--) {
                arr[j] = arr[j - 1];
            }
            
            arr[left] = key;
        }
    }
    
    // Insertion sort for nearly sorted arrays
    static void shellSort(vector<int>& arr) {
        int n = arr.size();
        
        // Start with a big gap, then reduce
        for (int gap = n / 2; gap > 0; gap /= 2) {
            for (int i = gap; i < n; i++) {
                int temp = arr[i];
                int j;
                
                for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                    arr[j] = arr[j - gap];
                }
                
                arr[j] = temp;
            }
        }
    }
};

// Time: O(n²) worst/average, O(n) best
// Space: O(1)
// Stable: Yes
// In-place: Yes
```

## Efficient Sorting Algorithms

### 4. Merge Sort

```cpp path=null start=null
class MergeSort {
public:
    static void mergeSort(vector<int>& arr, int left, int right) {
        if (left < right) {
            int mid = left + (right - left) / 2;
            
            mergeSort(arr, left, mid);
            mergeSort(arr, mid + 1, right);
            merge(arr, left, mid, right);
        }
    }
    
    static void mergeSort(vector<int>& arr) {
        mergeSort(arr, 0, arr.size() - 1);
    }
    
private:
    static void merge(vector<int>& arr, int left, int mid, int right) {
        vector<int> leftArr(arr.begin() + left, arr.begin() + mid + 1);
        vector<int> rightArr(arr.begin() + mid + 1, arr.begin() + right + 1);
        
        int i = 0, j = 0, k = left;
        
        // Merge the two arrays
        while (i < leftArr.size() && j < rightArr.size()) {
            if (leftArr[i] <= rightArr[j]) {
                arr[k++] = leftArr[i++];
            } else {
                arr[k++] = rightArr[j++];
            }
        }
        
        // Copy remaining elements
        while (i < leftArr.size()) {
            arr[k++] = leftArr[i++];
        }
        
        while (j < rightArr.size()) {
            arr[k++] = rightArr[j++];
        }
    }
    
    // Iterative merge sort (bottom-up)
    static void mergeSortIterative(vector<int>& arr) {
        int n = arr.size();
        
        for (int size = 1; size < n; size *= 2) {
            for (int left = 0; left < n - size; left += 2 * size) {
                int mid = left + size - 1;
                int right = min(left + 2 * size - 1, n - 1);
                merge(arr, left, mid, right);
            }
        }
    }
};

// Time: O(n log n) all cases
// Space: O(n)
// Stable: Yes
// In-place: No
```

### 5. Quick Sort

```cpp path=null start=null
class QuickSort {
public:
    static void quickSort(vector<int>& arr, int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);
            
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }
    
    static void quickSort(vector<int>& arr) {
        quickSort(arr, 0, arr.size() - 1);
    }
    
    // Randomized quick sort
    static void randomizedQuickSort(vector<int>& arr, int low, int high) {
        if (low < high) {
            int pi = randomizedPartition(arr, low, high);
            
            randomizedQuickSort(arr, low, pi - 1);
            randomizedQuickSort(arr, pi + 1, high);
        }
    }
    
    static void randomizedQuickSort(vector<int>& arr) {
        srand(time(0));
        randomizedQuickSort(arr, 0, arr.size() - 1);
    }
    
    // 3-way quick sort (handles duplicates efficiently)
    static void threeWayQuickSort(vector<int>& arr, int low, int high) {
        if (low >= high) return;
        
        int lt, gt;
        threeWayPartition(arr, low, high, lt, gt);
        
        threeWayQuickSort(arr, low, lt - 1);
        threeWayQuickSort(arr, gt + 1, high);
    }
    
    static void threeWayQuickSort(vector<int>& arr) {
        threeWayQuickSort(arr, 0, arr.size() - 1);
    }
    
private:
    static int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[high];
        int i = low - 1;
        
        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        
        swap(arr[i + 1], arr[high]);
        return i + 1;
    }
    
    static int randomizedPartition(vector<int>& arr, int low, int high) {
        int randomIndex = low + rand() % (high - low + 1);
        swap(arr[randomIndex], arr[high]);
        return partition(arr, low, high);
    }
    
    static void threeWayPartition(vector<int>& arr, int low, int high, int& lt, int& gt) {
        int pivot = arr[low];
        int i = low;
        lt = low;
        gt = high;
        
        while (i <= gt) {
            if (arr[i] < pivot) {
                swap(arr[lt++], arr[i++]);
            } else if (arr[i] > pivot) {
                swap(arr[i], arr[gt--]);
            } else {
                i++;
            }
        }
    }
};

// Time: O(n log n) average, O(n²) worst
// Space: O(log n) average, O(n) worst
// Stable: No
// In-place: Yes
```

### 6. Heap Sort

```cpp path=null start=null
class HeapSort {
public:
    static void heapSort(vector<int>& arr) {
        int n = arr.size();
        
        // Build max heap
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(arr, n, i);
        }
        
        // Extract elements from heap one by one
        for (int i = n - 1; i > 0; i--) {
            swap(arr[0], arr[i]);
            heapify(arr, i, 0);
        }
    }
    
private:
    static void heapify(vector<int>& arr, int n, int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        
        if (left < n && arr[left] > arr[largest]) {
            largest = left;
        }
        
        if (right < n && arr[right] > arr[largest]) {
            largest = right;
        }
        
        if (largest != i) {
            swap(arr[i], arr[largest]);
            heapify(arr, n, largest);
        }
    }
};

// Time: O(n log n) all cases
// Space: O(1)
// Stable: No
// In-place: Yes
```

## Linear Time Sorting Algorithms

### 7. Counting Sort

```cpp path=null start=null
class CountingSort {
public:
    static void countingSort(vector<int>& arr) {
        if (arr.empty()) return;
        
        int maxVal = *max_element(arr.begin(), arr.end());
        int minVal = *min_element(arr.begin(), arr.end());
        int range = maxVal - minVal + 1;
        
        vector<int> count(range, 0);
        vector<int> output(arr.size());
        
        // Count occurrences
        for (int val : arr) {
            count[val - minVal]++;
        }
        
        // Transform count array to actual positions
        for (int i = 1; i < range; i++) {
            count[i] += count[i - 1];
        }
        
        // Build output array
        for (int i = arr.size() - 1; i >= 0; i--) {
            output[count[arr[i] - minVal] - 1] = arr[i];
            count[arr[i] - minVal]--;
        }
        
        // Copy back to original array
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = output[i];
        }
    }
    
    // Counting sort for characters
    static void countingSortChars(string& str) {
        vector<int> count(256, 0);
        
        for (char c : str) {
            count[c]++;
        }
        
        int index = 0;
        for (int i = 0; i < 256; i++) {
            while (count[i]-- > 0) {
                str[index++] = (char)i;
            }
        }
    }
};

// Time: O(n + k) where k is the range of input
// Space: O(k)
// Stable: Yes
// In-place: No
```

### 8. Radix Sort

```cpp path=null start=null
class RadixSort {
public:
    static void radixSort(vector<int>& arr) {
        if (arr.empty()) return;
        
        int maxVal = *max_element(arr.begin(), arr.end());
        
        // Sort for every digit
        for (int exp = 1; maxVal / exp > 0; exp *= 10) {
            countingSortByDigit(arr, exp);
        }
    }
    
    // Radix sort for strings (LSD - Least Significant Digit)
    static void radixSortStrings(vector<string>& arr, int maxLen) {
        for (int pos = maxLen - 1; pos >= 0; pos--) {
            countingSortByPosition(arr, pos);
        }
    }
    
private:
    static void countingSortByDigit(vector<int>& arr, int exp) {
        vector<int> output(arr.size());
        vector<int> count(10, 0);
        
        // Count occurrences of digits
        for (int val : arr) {
            count[(val / exp) % 10]++;
        }
        
        // Transform count array
        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }
        
        // Build output array
        for (int i = arr.size() - 1; i >= 0; i--) {
            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
        }
        
        // Copy back to original array
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = output[i];
        }
    }
    
    static void countingSortByPosition(vector<string>& arr, int pos) {
        vector<string> output(arr.size());
        vector<int> count(256, 0);
        
        // Count occurrences of characters at position pos
        for (const string& str : arr) {
            int index = (pos < str.length()) ? str[pos] : 0;
            count[index]++;
        }
        
        // Transform count array
        for (int i = 1; i < 256; i++) {
            count[i] += count[i - 1];
        }
        
        // Build output array
        for (int i = arr.size() - 1; i >= 0; i--) {
            int index = (pos < arr[i].length()) ? arr[i][pos] : 0;
            output[count[index] - 1] = arr[i];
            count[index]--;
        }
        
        // Copy back
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = output[i];
        }
    }
};

// Time: O(d * (n + k)) where d is digits, k is base
// Space: O(n + k)
// Stable: Yes
// In-place: No
```

### 9. Bucket Sort

```cpp path=null start=null
class BucketSort {
public:
    // Bucket sort for floating point numbers in [0, 1)
    static void bucketSort(vector<double>& arr) {
        int n = arr.size();
        if (n <= 1) return;
        
        // Create buckets
        vector<vector<double>> buckets(n);
        
        // Distribute elements into buckets
        for (double val : arr) {
            int bucketIndex = (int)(val * n);
            if (bucketIndex == n) bucketIndex = n - 1;  // Handle edge case
            buckets[bucketIndex].push_back(val);
        }
        
        // Sort individual buckets and concatenate
        int index = 0;
        for (auto& bucket : buckets) {
            sort(bucket.begin(), bucket.end());
            for (double val : bucket) {
                arr[index++] = val;
            }
        }
    }
    
    // Generic bucket sort for integers
    static void bucketSortIntegers(vector<int>& arr) {
        if (arr.empty()) return;
        
        int maxVal = *max_element(arr.begin(), arr.end());
        int minVal = *min_element(arr.begin(), arr.end());
        int bucketCount = (maxVal - minVal) / arr.size() + 1;
        
        vector<vector<int>> buckets(bucketCount);
        
        // Distribute elements
        for (int val : arr) {
            int bucketIndex = (val - minVal) / bucketCount;
            buckets[bucketIndex].push_back(val);
        }
        
        // Sort buckets and concatenate
        int index = 0;
        for (auto& bucket : buckets) {
            sort(bucket.begin(), bucket.end());
            for (int val : bucket) {
                arr[index++] = val;
            }
        }
    }
};

// Time: O(n + k) average, O(n²) worst
// Space: O(n + k)
// Stable: Yes
// In-place: No
```

## Hybrid Sorting Algorithms

### 10. Intro Sort (Introspective Sort)

```cpp path=null start=null
class IntroSort {
public:
    static void introSort(vector<int>& arr) {
        int maxDepth = 2 * log2(arr.size());
        introSortUtil(arr, 0, arr.size() - 1, maxDepth);
    }
    
private:
    static void introSortUtil(vector<int>& arr, int low, int high, int depthLimit) {
        int size = high - low + 1;
        
        if (size <= 1) return;
        
        // Use insertion sort for small arrays
        if (size <= 16) {
            insertionSort(arr, low, high);
            return;
        }
        
        // Use heap sort if recursion depth exceeds limit
        if (depthLimit == 0) {
            heapSort(arr, low, high);
            return;
        }
        
        // Use quick sort
        int pivot = partition(arr, low, high);
        introSortUtil(arr, low, pivot - 1, depthLimit - 1);
        introSortUtil(arr, pivot + 1, high, depthLimit - 1);
    }
    
    static void insertionSort(vector<int>& arr, int low, int high) {
        for (int i = low + 1; i <= high; i++) {
            int key = arr[i];
            int j = i - 1;
            
            while (j >= low && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            
            arr[j + 1] = key;
        }
    }
    
    static void heapSort(vector<int>& arr, int low, int high) {
        // Build heap and sort
        int size = high - low + 1;
        for (int i = size / 2 - 1; i >= 0; i--) {
            heapify(arr, low, high, low + i);
        }
        
        for (int i = high; i > low; i--) {
            swap(arr[low], arr[i]);
            heapify(arr, low, i - 1, low);
        }
    }
    
    static void heapify(vector<int>& arr, int low, int high, int i) {
        int largest = i;
        int left = low + 2 * (i - low) + 1;
        int right = low + 2 * (i - low) + 2;
        
        if (left <= high && arr[left] > arr[largest]) {
            largest = left;
        }
        
        if (right <= high && arr[right] > arr[largest]) {
            largest = right;
        }
        
        if (largest != i) {
            swap(arr[i], arr[largest]);
            heapify(arr, low, high, largest);
        }
    }
    
    static int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[high];
        int i = low - 1;
        
        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                swap(arr[++i], arr[j]);
            }
        }
        
        swap(arr[i + 1], arr[high]);
        return i + 1;
    }
};

// Time: O(n log n) all cases
// Space: O(log n)
// Used in: std::sort in many implementations
```

## Sorting Utilities and Applications

```cpp path=null start=null
class SortingUtilities {
public:
    // Generic sorting function with custom comparator
    template<typename T, typename Compare>
    static void genericSort(vector<T>& arr, Compare comp) {
        sort(arr.begin(), arr.end(), comp);
    }
    
    // Sort with indices (returns sorted indices)
    static vector<int> sortWithIndices(const vector<int>& arr) {
        vector<int> indices(arr.size());
        iota(indices.begin(), indices.end(), 0);
        
        sort(indices.begin(), indices.end(), [&arr](int i, int j) {
            return arr[i] < arr[j];
        });
        
        return indices;
    }
    
    // Check if array is sorted
    static bool isSorted(const vector<int>& arr) {
        return is_sorted(arr.begin(), arr.end());
    }
    
    // Find kth smallest element (Quick Select)
    static int quickSelect(vector<int>& arr, int k) {
        return quickSelectUtil(arr, 0, arr.size() - 1, k - 1);
    }
    
    // Merge k sorted arrays
    static vector<int> mergeKSortedArrays(vector<vector<int>>& arrays) {
        priority_queue<pair<int, pair<int, int>>, 
                      vector<pair<int, pair<int, int>>>, 
                      greater<pair<int, pair<int, int>>>> pq;
        
        vector<int> result;
        
        // Initialize heap with first element from each array
        for (int i = 0; i < arrays.size(); i++) {
            if (!arrays[i].empty()) {
                pq.push({arrays[i][0], {i, 0}});
            }
        }
        
        while (!pq.empty()) {
            auto [val, indices] = pq.top();
            auto [arrayIdx, elemIdx] = indices;
            pq.pop();
            
            result.push_back(val);
            
            // Add next element from same array
            if (elemIdx + 1 < arrays[arrayIdx].size()) {
                pq.push({arrays[arrayIdx][elemIdx + 1], {arrayIdx, elemIdx + 1}});
            }
        }
        
        return result;
    }
    
private:
    static int quickSelectUtil(vector<int>& arr, int low, int high, int k) {
        if (low == high) return arr[low];
        
        int pivotIndex = partition(arr, low, high);
        
        if (k == pivotIndex) {
            return arr[k];
        } else if (k < pivotIndex) {
            return quickSelectUtil(arr, low, pivotIndex - 1, k);
        } else {
            return quickSelectUtil(arr, pivotIndex + 1, high, k);
        }
    }
    
    static int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[high];
        int i = low - 1;
        
        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                swap(arr[++i], arr[j]);
            }
        }
        
        swap(arr[i + 1], arr[high]);
        return i + 1;
    }
};
```

## Practice Problems

```cpp path=null start=null
// Problem 1: Sort Colors (Dutch National Flag)
void sortColors(vector<int>& nums) {
    int low = 0, mid = 0, high = nums.size() - 1;
    
    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low++], nums[mid++]);
        } else if (nums[mid] == 1) {
            mid++;
        } else {
            swap(nums[mid], nums[high--]);
        }
    }
}
// Time: O(n), Space: O(1)

// Problem 2: Largest Number
string largestNumber(vector<int>& nums) {
    vector<string> strs;
    for (int num : nums) {
        strs.push_back(to_string(num));
    }
    
    sort(strs.begin(), strs.end(), [](const string& a, const string& b) {
        return a + b > b + a;
    });
    
    if (strs[0] == "0") return "0";
    
    string result;
    for (const string& str : strs) {
        result += str;
    }
    
    return result;
}
// Time: O(n log n), Space: O(n)

// Problem 3: Meeting Rooms II
int minMeetingRooms(vector<vector<int>>& intervals) {
    if (intervals.empty()) return 0;
    
    sort(intervals.begin(), intervals.end());
    
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for (const auto& interval : intervals) {
        if (!pq.empty() && pq.top() <= interval[0]) {
            pq.pop();
        }
        pq.push(interval[1]);
    }
    
    return pq.size();
}
// Time: O(n log n), Space: O(n)
```

---

# Searching Algorithms {#searching}

Searching algorithms are designed to check for an element or retrieve an element from any data structure where it is stored. They are fundamental operations in computer science.

## Classification of Searching Algorithms

### By Data Structure:
- **Linear Data Structures**: Arrays, Linked Lists
- **Non-linear Data Structures**: Trees, Graphs

### By Search Strategy:
- **Sequential Search**: Linear Search
- **Interval Search**: Binary Search, Ternary Search
- **Hashing**: Hash Table Search

## Linear Search

```cpp path=null start=null
class LinearSearch {
public:
    // Basic linear search
    static int linearSearch(const vector<int>& arr, int target) {
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == target) {
                return i;
            }
        }
        return -1;  // Not found
    }
    
    // Linear search with multiple occurrences
    static vector<int> linearSearchAll(const vector<int>& arr, int target) {
        vector<int> indices;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == target) {
                indices.push_back(i);
            }
        }
        return indices;
    }
    
    // Linear search on linked list
    static bool linearSearchLinkedList(ListNode* head, int target) {
        ListNode* current = head;
        while (current != nullptr) {
            if (current->val == target) {
                return true;
            }
            current = current->next;
        }
        return false;
    }
    
    // Recursive linear search
    static int linearSearchRecursive(const vector<int>& arr, int target, int index = 0) {
        if (index >= arr.size()) {
            return -1;
        }
        
        if (arr[index] == target) {
            return index;
        }
        
        return linearSearchRecursive(arr, target, index + 1);
    }
    
    // Bidirectional linear search (search from both ends)
    static int bidirectionalLinearSearch(const vector<int>& arr, int target) {
        int left = 0, right = arr.size() - 1;
        
        while (left <= right) {
            if (arr[left] == target) {
                return left;
            }
            if (arr[right] == target) {
                return right;
            }
            left++;
            right--;
        }
        
        return -1;
    }
};

// Time: O(n), Space: O(1)
// Works on: Sorted and unsorted arrays
```

## Binary Search

### Basic Binary Search

```cpp path=null start=null
class BinarySearch {
public:
    // Iterative binary search
    static int binarySearch(const vector<int>& arr, int target) {
        int left = 0, right = arr.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return -1;  // Not found
    }
    
    // Recursive binary search
    static int binarySearchRecursive(const vector<int>& arr, int target, int left, int right) {
        if (left > right) {
            return -1;
        }
        
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            return binarySearchRecursive(arr, target, mid + 1, right);
        } else {
            return binarySearchRecursive(arr, target, left, mid - 1);
        }
    }
    
    static int binarySearchRecursive(const vector<int>& arr, int target) {
        return binarySearchRecursive(arr, target, 0, arr.size() - 1);
    }
    
    // Find first occurrence
    static int findFirst(const vector<int>& arr, int target) {
        int left = 0, right = arr.size() - 1;
        int result = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] == target) {
                result = mid;
                right = mid - 1;  // Continue searching left
            } else if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return result;
    }
    
    // Find last occurrence
    static int findLast(const vector<int>& arr, int target) {
        int left = 0, right = arr.size() - 1;
        int result = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] == target) {
                result = mid;
                left = mid + 1;  // Continue searching right
            } else if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return result;
    }
    
    // Count occurrences
    static int countOccurrences(const vector<int>& arr, int target) {
        int first = findFirst(arr, target);
        if (first == -1) return 0;
        
        int last = findLast(arr, target);
        return last - first + 1;
    }
};

// Time: O(log n), Space: O(1) iterative, O(log n) recursive
// Works on: Sorted arrays only
```

### Advanced Binary Search Techniques

```cpp path=null start=null
class AdvancedBinarySearch {
public:
    // Lower bound: first position where target can be inserted
    static int lowerBound(const vector<int>& arr, int target) {
        int left = 0, right = arr.size();
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        
        return left;
    }
    
    // Upper bound: first position after target
    static int upperBound(const vector<int>& arr, int target) {
        int left = 0, right = arr.size();
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        
        return left;
    }
    
    // Binary search on rotated sorted array
    static int searchRotatedArray(const vector<int>& arr, int target) {
        int left = 0, right = arr.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] == target) {
                return mid;
            }
            
            // Left half is sorted
            if (arr[left] <= arr[mid]) {
                if (target >= arr[left] && target < arr[mid]) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
            // Right half is sorted
            else {
                if (target > arr[mid] && target <= arr[right]) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }
        
        return -1;
    }
    
    // Find peak element (greater than neighbors)
    static int findPeakElement(const vector<int>& arr) {
        int left = 0, right = arr.size() - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] > arr[mid + 1]) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        
        return left;
    }
    
    // Find minimum in rotated sorted array
    static int findMinRotated(const vector<int>& arr) {
        int left = 0, right = arr.size() - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] > arr[right]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        
        return left;
    }
    
    // Square root using binary search
    static int sqrtBinarySearch(int x) {
        if (x < 2) return x;
        
        int left = 2, right = x / 2;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            long long square = (long long)mid * mid;
            
            if (square == x) {
                return mid;
            } else if (square < x) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return right;
    }
};
```

## Ternary Search

```cpp path=null start=null
class TernarySearch {
public:
    // Ternary search for sorted array
    static int ternarySearch(const vector<int>& arr, int target) {
        return ternarySearchUtil(arr, target, 0, arr.size() - 1);
    }
    
    // Find maximum in unimodal array
    static int findMaxUnimodal(const vector<int>& arr) {
        int left = 0, right = arr.size() - 1;
        
        while (right - left > 2) {
            int mid1 = left + (right - left) / 3;
            int mid2 = right - (right - left) / 3;
            
            if (arr[mid1] > arr[mid2]) {
                right = mid2;
            } else {
                left = mid1;
            }
        }
        
        // Check remaining elements
        int maxIndex = left;
        for (int i = left + 1; i <= right; i++) {
            if (arr[i] > arr[maxIndex]) {
                maxIndex = i;
            }
        }
        
        return maxIndex;
    }
    
private:
    static int ternarySearchUtil(const vector<int>& arr, int target, int left, int right) {
        if (left > right) return -1;
        
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;
        
        if (arr[mid1] == target) return mid1;
        if (arr[mid2] == target) return mid2;
        
        if (target < arr[mid1]) {
            return ternarySearchUtil(arr, target, left, mid1 - 1);
        } else if (target > arr[mid2]) {
            return ternarySearchUtil(arr, target, mid2 + 1, right);
        } else {
            return ternarySearchUtil(arr, target, mid1 + 1, mid2 - 1);
        }
    }
};

// Time: O(log₃ n), Space: O(log n) recursive
```

## Jump Search

```cpp path=null start=null
class JumpSearch {
public:
    static int jumpSearch(const vector<int>& arr, int target) {
        int n = arr.size();
        int step = sqrt(n);
        int prev = 0;
        
        // Jump through blocks
        while (arr[min(step, n) - 1] < target) {
            prev = step;
            step += sqrt(n);
            if (prev >= n) {
                return -1;
            }
        }
        
        // Linear search in the identified block
        while (arr[prev] < target) {
            prev++;
            if (prev == min(step, n)) {
                return -1;
            }
        }
        
        if (arr[prev] == target) {
            return prev;
        }
        
        return -1;
    }
};

// Time: O(√n), Space: O(1)
// Works on: Sorted arrays
```

## Interpolation Search

```cpp path=null start=null
class InterpolationSearch {
public:
    static int interpolationSearch(const vector<int>& arr, int target) {
        int left = 0, right = arr.size() - 1;
        
        while (left <= right && target >= arr[left] && target <= arr[right]) {
            // Handle case where all elements are same
            if (left == right) {
                return (arr[left] == target) ? left : -1;
            }
            
            // Calculate position using interpolation formula
            int pos = left + ((double)(target - arr[left]) / (arr[right] - arr[left])) * (right - left);
            
            if (arr[pos] == target) {
                return pos;
            }
            
            if (arr[pos] < target) {
                left = pos + 1;
            } else {
                right = pos - 1;
            }
        }
        
        return -1;
    }
};

// Time: O(log log n) average, O(n) worst
// Works on: Uniformly distributed sorted arrays
```

## Exponential Search

```cpp path=null start=null
class ExponentialSearch {
public:
    static int exponentialSearch(const vector<int>& arr, int target) {
        int n = arr.size();
        
        // If target is at first position
        if (arr[0] == target) {
            return 0;
        }
        
        // Find range for binary search
        int bound = 1;
        while (bound < n && arr[bound] <= target) {
            bound *= 2;
        }
        
        // Binary search in the found range
        return binarySearchRange(arr, target, bound / 2, min(bound, n - 1));
    }
    
private:
    static int binarySearchRange(const vector<int>& arr, int target, int left, int right) {
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return -1;
    }
};

// Time: O(log n), Space: O(1)
// Works on: Unbounded/infinite sorted arrays
```

## Fibonacci Search

```cpp path=null start=null
class FibonacciSearch {
public:
    static int fibonacciSearch(const vector<int>& arr, int target) {
        int n = arr.size();
        
        // Initialize Fibonacci numbers
        int fib2 = 0;   // (m-2)'th Fibonacci number
        int fib1 = 1;   // (m-1)'th Fibonacci number
        int fib = fib2 + fib1;  // m'th Fibonacci number
        
        // Find smallest Fibonacci number greater than or equal to n
        while (fib < n) {
            fib2 = fib1;
            fib1 = fib;
            fib = fib2 + fib1;
        }
        
        int offset = -1;
        
        while (fib > 1) {
            int i = min(offset + fib2, n - 1);
            
            if (arr[i] < target) {
                fib = fib1;
                fib1 = fib2;
                fib2 = fib - fib1;
                offset = i;
            } else if (arr[i] > target) {
                fib = fib2;
                fib1 = fib1 - fib2;
                fib2 = fib - fib1;
            } else {
                return i;
            }
        }
        
        // Check last element
        if (fib1 && arr[offset + 1] == target) {
            return offset + 1;
        }
        
        return -1;
    }
};

// Time: O(log n), Space: O(1)
// Works on: Sorted arrays
```

## Tree-based Searches

### Binary Search Tree Search

```cpp path=null start=null
class BSTSearch {
public:
    // Recursive search in BST
    static TreeNode* searchBST(TreeNode* root, int val) {
        if (!root || root->val == val) {
            return root;
        }
        
        if (val < root->val) {
            return searchBST(root->left, val);
        } else {
            return searchBST(root->right, val);
        }
    }
    
    // Iterative search in BST
    static TreeNode* searchBSTIterative(TreeNode* root, int val) {
        while (root && root->val != val) {
            root = (val < root->val) ? root->left : root->right;
        }
        return root;
    }
    
    // Find minimum in BST
    static TreeNode* findMin(TreeNode* root) {
        while (root && root->left) {
            root = root->left;
        }
        return root;
    }
    
    // Find maximum in BST
    static TreeNode* findMax(TreeNode* root) {
        while (root && root->right) {
            root = root->right;
        }
        return root;
    }
    
    // Find inorder successor
    static TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        TreeNode* successor = nullptr;
        
        while (root) {
            if (p->val >= root->val) {
                root = root->right;
            } else {
                successor = root;
                root = root->left;
            }
        }
        
        return successor;
    }
};

// Time: O(h) where h is height, Space: O(1) iterative
```

## Advanced Search Applications

```cpp path=null start=null
class AdvancedSearchApplications {
public:
    // Find two numbers that sum to target
    static vector<int> twoSumSorted(const vector<int>& arr, int target) {
        int left = 0, right = arr.size() - 1;
        
        while (left < right) {
            int sum = arr[left] + arr[right];
            
            if (sum == target) {
                return {left, right};
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        
        return {};  // No solution
    }
    
    // Find target sum in 2D matrix (sorted row and column wise)
    static bool searchMatrix2D(const vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;
        
        int row = 0;
        int col = matrix[0].size() - 1;
        
        while (row < matrix.size() && col >= 0) {
            if (matrix[row][col] == target) {
                return true;
            } else if (matrix[row][col] > target) {
                col--;
            } else {
                row++;
            }
        }
        
        return false;
    }
    
    // Search in bitonic array
    static int searchBitonic(const vector<int>& arr, int target) {
        int peakIndex = findPeak(arr);
        
        // Search in increasing part
        int result = binarySearchAsc(arr, target, 0, peakIndex);
        if (result != -1) return result;
        
        // Search in decreasing part
        return binarySearchDesc(arr, target, peakIndex + 1, arr.size() - 1);
    }
    
    // Find kth smallest element in sorted matrix
    static int kthSmallestMatrix(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int left = matrix[0][0];
        int right = matrix[n-1][n-1];
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            int count = countLessEqual(matrix, mid);
            
            if (count < k) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        
        return left;
    }
    
private:
    static int findPeak(const vector<int>& arr) {
        int left = 0, right = arr.size() - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] > arr[mid + 1]) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        
        return left;
    }
    
    static int binarySearchAsc(const vector<int>& arr, int target, int left, int right) {
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return -1;
    }
    
    static int binarySearchDesc(const vector<int>& arr, int target, int left, int right) {
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] > target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return -1;
    }
    
    static int countLessEqual(const vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int count = 0;
        int row = n - 1;
        int col = 0;
        
        while (row >= 0 && col < n) {
            if (matrix[row][col] <= target) {
                count += row + 1;
                col++;
            } else {
                row--;
            }
        }
        
        return count;
    }
};
```

## Search Algorithm Comparison

```cpp path=null start=null
class SearchComparison {
public:
    static void compareSearchAlgorithms(vector<int> arr, int target) {
        // Sort array for algorithms that require sorted input
        vector<int> sortedArr = arr;
        sort(sortedArr.begin(), sortedArr.end());
        
        cout << "Comparing search algorithms for target: " << target << endl;
        cout << "Array size: " << arr.size() << endl;
        
        auto start = chrono::high_resolution_clock::now();
        
        // Linear Search
        start = chrono::high_resolution_clock::now();
        int linearResult = LinearSearch::linearSearch(arr, target);
        auto linearTime = chrono::duration_cast<chrono::microseconds>(
            chrono::high_resolution_clock::now() - start).count();
        
        // Binary Search
        start = chrono::high_resolution_clock::now();
        int binaryResult = BinarySearch::binarySearch(sortedArr, target);
        auto binaryTime = chrono::duration_cast<chrono::microseconds>(
            chrono::high_resolution_clock::now() - start).count();
        
        // Jump Search
        start = chrono::high_resolution_clock::now();
        int jumpResult = JumpSearch::jumpSearch(sortedArr, target);
        auto jumpTime = chrono::duration_cast<chrono::microseconds>(
            chrono::high_resolution_clock::now() - start).count();
        
        cout << "Results:" << endl;
        cout << "Linear Search: " << (linearResult != -1 ? "Found" : "Not Found") 
             << " (Time: " << linearTime << " μs)" << endl;
        cout << "Binary Search: " << (binaryResult != -1 ? "Found" : "Not Found") 
             << " (Time: " << binaryTime << " μs)" << endl;
        cout << "Jump Search: " << (jumpResult != -1 ? "Found" : "Not Found") 
             << " (Time: " << jumpTime << " μs)" << endl;
    }
};
```

## Practice Problems

```cpp path=null start=null
// Problem 1: Search Insert Position
int searchInsert(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return left;
}
// Time: O(log n), Space: O(1)

// Problem 2: Find First and Last Position
vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> result = {-1, -1};
    
    // Find first occurrence
    result[0] = BinarySearch::findFirst(nums, target);
    
    // Find last occurrence
    result[1] = BinarySearch::findLast(nums, target);
    
    return result;
}
// Time: O(log n), Space: O(1)

// Problem 3: Search in Rotated Sorted Array
int search(vector<int>& nums, int target) {
    return AdvancedBinarySearch::searchRotatedArray(nums, target);
}
// Time: O(log n), Space: O(1)

// Problem 4: Find Median of Two Sorted Arrays
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    if (nums1.size() > nums2.size()) {
        return findMedianSortedArrays(nums2, nums1);
    }
    
    int m = nums1.size();
    int n = nums2.size();
    int left = 0, right = m;
    
    while (left <= right) {
        int partitionX = (left + right) / 2;
        int partitionY = (m + n + 1) / 2 - partitionX;
        
        int maxLeftX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
        int minRightX = (partitionX == m) ? INT_MAX : nums1[partitionX];
        
        int maxLeftY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
        int minRightY = (partitionY == n) ? INT_MAX : nums2[partitionY];
        
        if (maxLeftX <= minRightY && maxLeftY <= minRightX) {
            if ((m + n) % 2 == 0) {
                return (max(maxLeftX, maxLeftY) + min(minRightX, minRightY)) / 2.0;
            } else {
                return max(maxLeftX, maxLeftY);
            }
        } else if (maxLeftX > minRightY) {
            right = partitionX - 1;
        } else {
            left = partitionX + 1;
        }
    }
    
    return 0.0;
}
// Time: O(log(min(m,n))), Space: O(1)
```

---

# Greedy Algorithms {#greedy}

Greedy algorithms build up a solution piece by piece, always choosing the next piece that offers the most immediate benefit (local optimum). The key insight is that local optimal choices lead to a globally optimal solution.

## Greedy Algorithm Properties

### 1. Greedy Choice Property
- A global optimum can be arrived at by making a locally optimal (greedy) choice
- Once a choice is made, we're left with a subproblem

### 2. Optimal Substructure
- An optimal solution to the problem contains optimal solutions to subproblems

### 3. No Backtracking
- Once a choice is made, it's never reconsidered

## Classic Greedy Problems

### 1. Activity Selection Problem

```cpp path=null start=null
struct Activity {
    int start, finish;
    int index;
    
    Activity(int s, int f, int i) : start(s), finish(f), index(i) {}
};

class ActivitySelection {
public:
    // Greedy activity selection
    static vector<int> selectActivities(vector<Activity>& activities) {
        // Sort activities by finish time
        sort(activities.begin(), activities.end(), [](const Activity& a, const Activity& b) {
            return a.finish < b.finish;
        });
        
        vector<int> selected;
        selected.push_back(activities[0].index);
        int lastSelected = 0;
        
        for (int i = 1; i < activities.size(); i++) {
            // If current activity starts after the last selected activity finishes
            if (activities[i].start >= activities[lastSelected].finish) {
                selected.push_back(activities[i].index);
                lastSelected = i;
            }
        }
        
        return selected;
    }
    
    // Maximum number of non-overlapping activities
    static int maxActivities(vector<vector<int>>& intervals) {
        if (intervals.empty()) return 0;
        
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });
        
        int count = 1;
        int lastEnd = intervals[0][1];
        
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] >= lastEnd) {
                count++;
                lastEnd = intervals[i][1];
            }
        }
        
        return count;
    }
};

// Time: O(n log n), Space: O(1)
```

### 2. Fractional Knapsack Problem

```cpp path=null start=null
struct Item {
    int value, weight;
    double ratio;
    
    Item(int v, int w) : value(v), weight(w) {
        ratio = (double)value / weight;
    }
};

class FractionalKnapsack {
public:
    static double maxValue(vector<Item>& items, int capacity) {
        // Sort items by value-to-weight ratio in descending order
        sort(items.begin(), items.end(), [](const Item& a, const Item& b) {
            return a.ratio > b.ratio;
        });
        
        double totalValue = 0.0;
        int currentWeight = 0;
        
        for (const Item& item : items) {
            if (currentWeight + item.weight <= capacity) {
                // Take the whole item
                currentWeight += item.weight;
                totalValue += item.value;
            } else {
                // Take fraction of the item
                int remainingCapacity = capacity - currentWeight;
                totalValue += item.ratio * remainingCapacity;
                break;
            }
        }
        
        return totalValue;
    }
    
    // Get the items and fractions taken
    static pair<double, vector<double>> maxValueWithFractions(vector<Item>& items, int capacity) {
        sort(items.begin(), items.end(), [](const Item& a, const Item& b) {
            return a.ratio > b.ratio;
        });
        
        double totalValue = 0.0;
        vector<double> fractions(items.size(), 0.0);
        int currentWeight = 0;
        
        for (int i = 0; i < items.size(); i++) {
            if (currentWeight + items[i].weight <= capacity) {
                currentWeight += items[i].weight;
                totalValue += items[i].value;
                fractions[i] = 1.0;
            } else {
                int remainingCapacity = capacity - currentWeight;
                fractions[i] = (double)remainingCapacity / items[i].weight;
                totalValue += items[i].value * fractions[i];
                break;
            }
        }
        
        return {totalValue, fractions};
    }
};

// Time: O(n log n), Space: O(1)
```

### 3. Coin Change (Greedy - works only for canonical coin systems)

```cpp path=null start=null
class CoinChange {
public:
    // Greedy coin change (works for standard denominations)
    static vector<int> greedyCoinChange(vector<int>& coins, int amount) {
        // Sort coins in descending order
        sort(coins.rbegin(), coins.rend());
        
        vector<int> result;
        
        for (int coin : coins) {
            while (amount >= coin) {
                result.push_back(coin);
                amount -= coin;
            }
        }
        
        return (amount == 0) ? result : vector<int>();  // Return empty if not possible
    }
    
    // Count minimum coins needed
    static int minCoins(vector<int>& coins, int amount) {
        sort(coins.rbegin(), coins.rend());
        
        int count = 0;
        for (int coin : coins) {
            count += amount / coin;
            amount %= coin;
        }
        
        return (amount == 0) ? count : -1;
    }
    
    // Coin change with count of each denomination
    static map<int, int> coinChangeWithCount(vector<int>& coins, int amount) {
        sort(coins.rbegin(), coins.rend());
        
        map<int, int> result;
        
        for (int coin : coins) {
            if (amount >= coin) {
                int count = amount / coin;
                result[coin] = count;
                amount %= coin;
            }
        }
        
        if (amount != 0) {
            result.clear();  // Not possible
        }
        
        return result;
    }
};

// Time: O(n log n + amount/min_coin), Space: O(1)
// Note: Works optimally only for canonical coin systems
```

### 4. Job Scheduling Problems

#### Job Scheduling with Deadlines

```cpp path=null start=null
struct Job {
    int id, profit, deadline;
    
    Job(int i, int p, int d) : id(i), profit(p), deadline(d) {}
};

class JobScheduling {
public:
    // Maximum profit job scheduling
    static pair<int, vector<int>> maxProfitScheduling(vector<Job>& jobs) {
        // Sort jobs by profit in descending order
        sort(jobs.begin(), jobs.end(), [](const Job& a, const Job& b) {
            return a.profit > b.profit;
        });
        
        // Find maximum deadline
        int maxDeadline = 0;
        for (const Job& job : jobs) {
            maxDeadline = max(maxDeadline, job.deadline);
        }
        
        // Create time slots
        vector<int> timeSlots(maxDeadline + 1, -1);
        vector<int> selectedJobs;
        int totalProfit = 0;
        
        for (const Job& job : jobs) {
            // Find a free time slot for this job (from its deadline backwards)
            for (int slot = job.deadline; slot >= 1; slot--) {
                if (timeSlots[slot] == -1) {
                    timeSlots[slot] = job.id;
                    selectedJobs.push_back(job.id);
                    totalProfit += job.profit;
                    break;
                }
            }
        }
        
        return {totalProfit, selectedJobs};
    }
    
    // Job scheduling with penalties
    static int minPenalty(vector<Job>& jobs) {
        sort(jobs.begin(), jobs.end(), [](const Job& a, const Job& b) {
            return a.profit > b.profit;  // profit here represents penalty
        });
        
        int maxDeadline = 0;
        for (const Job& job : jobs) {
            maxDeadline = max(maxDeadline, job.deadline);
        }
        
        vector<bool> timeSlots(maxDeadline + 1, false);
        int totalPenalty = 0;
        
        for (const Job& job : jobs) {
            bool scheduled = false;
            
            for (int slot = job.deadline; slot >= 1; slot--) {
                if (!timeSlots[slot]) {
                    timeSlots[slot] = true;
                    scheduled = true;
                    break;
                }
            }
            
            if (!scheduled) {
                totalPenalty += job.profit;  // Add penalty
            }
        }
        
        return totalPenalty;
    }
};

// Time: O(n² + n log n), Space: O(max_deadline)
```

### 5. Huffman Coding

```cpp path=null start=null
struct HuffmanNode {
    char character;
    int frequency;
    HuffmanNode* left;
    HuffmanNode* right;
    
    HuffmanNode(char c, int f) : character(c), frequency(f), left(nullptr), right(nullptr) {}
    HuffmanNode(int f) : character('\0'), frequency(f), left(nullptr), right(nullptr) {}
};

struct Compare {
    bool operator()(HuffmanNode* a, HuffmanNode* b) {
        return a->frequency > b->frequency;
    }
};

class HuffmanCoding {
public:
    static map<char, string> buildHuffmanCodes(map<char, int>& frequencies) {
        // Create priority queue (min-heap)
        priority_queue<HuffmanNode*, vector<HuffmanNode*>, Compare> pq;
        
        // Create leaf nodes for each character
        for (auto& pair : frequencies) {
            pq.push(new HuffmanNode(pair.first, pair.second));
        }
        
        // Build Huffman tree
        while (pq.size() > 1) {
            HuffmanNode* left = pq.top(); pq.pop();
            HuffmanNode* right = pq.top(); pq.pop();
            
            HuffmanNode* internal = new HuffmanNode(left->frequency + right->frequency);
            internal->left = left;
            internal->right = right;
            
            pq.push(internal);
        }
        
        HuffmanNode* root = pq.top();
        
        // Generate codes
        map<char, string> codes;
        generateCodes(root, "", codes);
        
        return codes;
    }
    
    static string encode(const string& text, const map<char, string>& codes) {
        string encoded = "";
        for (char c : text) {
            encoded += codes.at(c);
        }
        return encoded;
    }
    
    static string decode(const string& encoded, HuffmanNode* root) {
        string decoded = "";
        HuffmanNode* current = root;
        
        for (char bit : encoded) {
            if (bit == '0') {
                current = current->left;
            } else {
                current = current->right;
            }
            
            if (current->left == nullptr && current->right == nullptr) {
                decoded += current->character;
                current = root;
            }
        }
        
        return decoded;
    }
    
private:
    static void generateCodes(HuffmanNode* node, const string& code, map<char, string>& codes) {
        if (!node) return;
        
        // Leaf node
        if (node->left == nullptr && node->right == nullptr) {
            codes[node->character] = code.empty() ? "0" : code;
            return;
        }
        
        generateCodes(node->left, code + "0", codes);
        generateCodes(node->right, code + "1", codes);
    }
};

// Time: O(n log n), Space: O(n)
```

## Advanced Greedy Algorithms

### 6. Minimum Spanning Tree (Kruskal's Algorithm)

```cpp path=null start=null
class UnionFind {
public:
    vector<int> parent, rank;
    
    UnionFind(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }
    
    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }
    
    bool unite(int x, int y) {
        int px = find(x), py = find(y);
        if (px == py) return false;
        
        if (rank[px] < rank[py]) {
            parent[px] = py;
        } else if (rank[px] > rank[py]) {
            parent[py] = px;
        } else {
            parent[py] = px;
            rank[px]++;
        }
        return true;
    }
};

struct Edge {
    int u, v, weight;
    
    Edge(int u, int v, int w) : u(u), v(v), weight(w) {}
    
    bool operator<(const Edge& other) const {
        return weight < other.weight;
    }
};

class KruskalMST {
public:
    static pair<int, vector<Edge>> findMST(int n, vector<Edge>& edges) {
        sort(edges.begin(), edges.end());
        
        UnionFind uf(n);
        vector<Edge> mst;
        int totalWeight = 0;
        
        for (const Edge& edge : edges) {
            if (uf.unite(edge.u, edge.v)) {
                mst.push_back(edge);
                totalWeight += edge.weight;
                
                if (mst.size() == n - 1) break;
            }
        }
        
        return {totalWeight, mst};
    }
};

// Time: O(E log E), Space: O(V)
```

### 7. Dijkstra's Shortest Path Algorithm

```cpp path=null start=null
class DijkstraGreedy {
public:
    static vector<int> shortestPath(int n, vector<vector<pair<int, int>>>& graph, int source) {
        vector<int> dist(n, INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        dist[source] = 0;
        pq.push({0, source});
        
        while (!pq.empty()) {
            int u = pq.top().second;
            int d = pq.top().first;
            pq.pop();
            
            if (d > dist[u]) continue;
            
            for (auto& edge : graph[u]) {
                int v = edge.first;
                int weight = edge.second;
                
                if (dist[u] + weight < dist[v]) {
                    dist[v] = dist[u] + weight;
                    pq.push({dist[v], v});
                }
            }
        }
        
        return dist;
    }
};

// Time: O((V + E) log V), Space: O(V)
```

## Greedy Applications and Problems

### 8. Gas Station Problem

```cpp path=null start=null
class GasStation {
public:
    static int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0, totalCost = 0;
        int currentGas = 0, start = 0;
        
        for (int i = 0; i < gas.size(); i++) {
            totalGas += gas[i];
            totalCost += cost[i];
            currentGas += gas[i] - cost[i];
            
            // If we can't reach next station, start from next station
            if (currentGas < 0) {
                start = i + 1;
                currentGas = 0;
            }
        }
        
        return (totalGas >= totalCost) ? start : -1;
    }
};

// Time: O(n), Space: O(1)
```

### 9. Jump Game Problems

```cpp path=null start=null
class JumpGame {
public:
    // Can reach the end?
    static bool canJump(vector<int>& nums) {
        int maxReach = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (i > maxReach) return false;
            maxReach = max(maxReach, i + nums[i]);
        }
        
        return true;
    }
    
    // Minimum jumps to reach the end
    static int minJumps(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return 0;
        
        int jumps = 0;
        int currentEnd = 0;
        int farthest = 0;
        
        for (int i = 0; i < n - 1; i++) {
            farthest = max(farthest, i + nums[i]);
            
            if (i == currentEnd) {
                jumps++;
                currentEnd = farthest;
                
                if (currentEnd >= n - 1) break;
            }
        }
        
        return jumps;
    }
};

// Time: O(n), Space: O(1)
```

### 10. Candy Distribution

```cpp path=null start=null
class CandyDistribution {
public:
    static int minCandies(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> candies(n, 1);
        
        // Left to right pass
        for (int i = 1; i < n; i++) {
            if (ratings[i] > ratings[i - 1]) {
                candies[i] = candies[i - 1] + 1;
            }
        }
        
        // Right to left pass
        for (int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                candies[i] = max(candies[i], candies[i + 1] + 1);
            }
        }
        
        int total = 0;
        for (int candy : candies) {
            total += candy;
        }
        
        return total;
    }
};

// Time: O(n), Space: O(n)
```

### 11. Meeting Rooms Problems

```cpp path=null start=null
class MeetingRooms {
public:
    // Minimum meeting rooms required
    static int minMeetingRooms(vector<vector<int>>& intervals) {
        if (intervals.empty()) return 0;
        
        sort(intervals.begin(), intervals.end());
        
        priority_queue<int, vector<int>, greater<int>> endTimes;
        
        for (const auto& interval : intervals) {
            if (!endTimes.empty() && endTimes.top() <= interval[0]) {
                endTimes.pop();
            }
            endTimes.push(interval[1]);
        }
        
        return endTimes.size();
    }
    
    // Alternative approach using events
    static int minMeetingRoomsEvents(vector<vector<int>>& intervals) {
        vector<pair<int, int>> events;  // {time, type} where type: 1=start, -1=end
        
        for (const auto& interval : intervals) {
            events.push_back({interval[0], 1});
            events.push_back({interval[1], -1});
        }
        
        sort(events.begin(), events.end());
        
        int currentRooms = 0, maxRooms = 0;
        
        for (const auto& event : events) {
            currentRooms += event.second;
            maxRooms = max(maxRooms, currentRooms);
        }
        
        return maxRooms;
    }
};

// Time: O(n log n), Space: O(n)
```

## When to Use Greedy Algorithms

### Indicators for Greedy Approach:
1. **Optimization Problems**: Finding minimum or maximum
2. **Local Choice**: Each step has a clear optimal choice
3. **No Dependencies**: Future choices don't affect past ones
4. **Monotonic Property**: Problem exhibits optimal substructure

### Common Greedy Patterns:
1. **Sorting + Selection**: Sort by some criteria, then select greedily
2. **Priority Queue**: Always process the most promising element
3. **Two Pointers**: Make greedy choices from both ends
4. **Interval Scheduling**: Process events in chronological order

### Verification Steps:
1. **Prove Greedy Choice**: Local optimal leads to global optimal
2. **Prove Optimal Substructure**: Optimal solution contains optimal subproblems
3. **Test Edge Cases**: Verify the algorithm works correctly

## Practice Problems

```cpp path=null start=null
// Problem 1: Remove K Digits
string removeKdigits(string num, int k) {
    stack<char> st;
    
    for (char digit : num) {
        while (k > 0 && !st.empty() && st.top() > digit) {
            st.pop();
            k--;
        }
        st.push(digit);
    }
    
    // Remove remaining k digits
    while (k > 0) {
        st.pop();
        k--;
    }
    
    // Build result
    string result = "";
    while (!st.empty()) {
        result = st.top() + result;
        st.pop();
    }
    
    // Remove leading zeros
    int start = 0;
    while (start < result.length() && result[start] == '0') {
        start++;
    }
    
    result = result.substr(start);
    return result.empty() ? "0" : result;
}
// Time: O(n), Space: O(n)

// Problem 2: Task Scheduler
int leastInterval(vector<char>& tasks, int n) {
    vector<int> freq(26, 0);
    for (char task : tasks) {
        freq[task - 'A']++;
    }
    
    sort(freq.rbegin(), freq.rend());
    
    int maxFreq = freq[0] - 1;
    int idleSlots = maxFreq * n;
    
    for (int i = 1; i < 26; i++) {
        idleSlots -= min(freq[i], maxFreq);
    }
    
    return idleSlots > 0 ? idleSlots + tasks.size() : tasks.size();
}
// Time: O(n), Space: O(1)

// Problem 3: Partition Labels
vector<int> partitionLabels(string s) {
    vector<int> lastIndex(26, 0);
    
    // Record last occurrence of each character
    for (int i = 0; i < s.length(); i++) {
        lastIndex[s[i] - 'a'] = i;
    }
    
    vector<int> result;
    int start = 0, end = 0;
    
    for (int i = 0; i < s.length(); i++) {
        end = max(end, lastIndex[s[i] - 'a']);
        
        if (i == end) {
            result.push_back(end - start + 1);
            start = end + 1;
        }
    }
    
    return result;
}
// Time: O(n), Space: O(1)
```

---

# Backtracking {#backtracking}

Backtracking is an algorithmic approach that considers searching every possible combination in order to solve computational problems. It builds candidates to the solution incrementally and abandons partial candidates ("backtracks") as soon as it is determined they cannot lead to a valid solution.

## Backtracking Algorithm Template

```cpp path=null start=null
void backtrack(state, solutions, constraints) {
    if (is_solution(state)) {
        solutions.add(state);
        return;
    }
    
    for (each possible choice) {
        if (is_valid_choice(choice, state)) {
            make_choice(choice, state);
            backtrack(new_state, solutions, constraints);
            undo_choice(choice, state);  // Backtrack
        }
    }
}
```

## Classic Backtracking Problems

### 1. N-Queens Problem

```cpp path=null start=null
class NQueens {
public:
    static vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> solutions;
        vector<string> board(n, string(n, '.'));
        vector<bool> cols(n, false);
        vector<bool> diag1(2 * n - 1, false);
        vector<bool> diag2(2 * n - 1, false);
        
        backtrack(0, board, cols, diag1, diag2, solutions, n);
        return solutions;
    }
    
    static int totalNQueens(int n) {
        vector<bool> cols(n, false);
        vector<bool> diag1(2 * n - 1, false);
        vector<bool> diag2(2 * n - 1, false);
        
        return countSolutions(0, cols, diag1, diag2, n);
    }
    
private:
    static void backtrack(int row, vector<string>& board, 
                         vector<bool>& cols, vector<bool>& diag1, vector<bool>& diag2,
                         vector<vector<string>>& solutions, int n) {
        if (row == n) {
            solutions.push_back(board);
            return;
        }
        
        for (int col = 0; col < n; col++) {
            int d1 = row - col + n - 1;
            int d2 = row + col;
            
            if (cols[col] || diag1[d1] || diag2[d2]) {
                continue;
            }
            
            // Place queen
            board[row][col] = 'Q';
            cols[col] = diag1[d1] = diag2[d2] = true;
            
            backtrack(row + 1, board, cols, diag1, diag2, solutions, n);
            
            // Remove queen (backtrack)
            board[row][col] = '.';
            cols[col] = diag1[d1] = diag2[d2] = false;
        }
    }
    
    static int countSolutions(int row, vector<bool>& cols, 
                             vector<bool>& diag1, vector<bool>& diag2, int n) {
        if (row == n) return 1;
        
        int count = 0;
        for (int col = 0; col < n; col++) {
            int d1 = row - col + n - 1;
            int d2 = row + col;
            
            if (!cols[col] && !diag1[d1] && !diag2[d2]) {
                cols[col] = diag1[d1] = diag2[d2] = true;
                count += countSolutions(row + 1, cols, diag1, diag2, n);
                cols[col] = diag1[d1] = diag2[d2] = false;
            }
        }
        
        return count;
    }
};

// Time: O(N!), Space: O(N)
```

### 2. Sudoku Solver

```cpp path=null start=null
class SudokuSolver {
public:
    static bool solveSudoku(vector<vector<char>>& board) {
        return backtrack(board);
    }
    
    static bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>> rows(9), cols(9), boxes(9);
        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char c = board[i][j];
                if (c == '.') continue;
                
                int boxIndex = (i / 3) * 3 + j / 3;
                
                if (rows[i].count(c) || cols[j].count(c) || boxes[boxIndex].count(c)) {
                    return false;
                }
                
                rows[i].insert(c);
                cols[j].insert(c);
                boxes[boxIndex].insert(c);
            }
        }
        
        return true;
    }
    
private:
    static bool backtrack(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    for (char num = '1'; num <= '9'; num++) {
                        if (isValid(board, i, j, num)) {
                            board[i][j] = num;
                            
                            if (backtrack(board)) {
                                return true;
                            }
                            
                            board[i][j] = '.';  // Backtrack
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    static bool isValid(vector<vector<char>>& board, int row, int col, char num) {
        // Check row
        for (int j = 0; j < 9; j++) {
            if (board[row][j] == num) return false;
        }
        
        // Check column
        for (int i = 0; i < 9; i++) {
            if (board[i][col] == num) return false;
        }
        
        // Check 3x3 box
        int startRow = (row / 3) * 3;
        int startCol = (col / 3) * 3;
        
        for (int i = startRow; i < startRow + 3; i++) {
            for (int j = startCol; j < startCol + 3; j++) {
                if (board[i][j] == num) return false;
            }
        }
        
        return true;
    }
};

// Time: O(9^(n*n)), Space: O(n*n) where n = 9
```

### 3. Generate Parentheses

```cpp path=null start=null
class GenerateParentheses {
public:
    static vector<string> generateParenthesis(int n) {
        vector<string> result;
        string current = "";
        backtrack(current, 0, 0, n, result);
        return result;
    }
    
    // Alternative approach using indices
    static vector<string> generateParenthesisAlt(int n) {
        vector<string> result;
        backtrackAlt(result, "", n, n);
        return result;
    }
    
private:
    static void backtrack(string& current, int open, int close, int max, vector<string>& result) {
        if (current.length() == max * 2) {
            result.push_back(current);
            return;
        }
        
        if (open < max) {
            current.push_back('(');
            backtrack(current, open + 1, close, max, result);
            current.pop_back();
        }
        
        if (close < open) {
            current.push_back(')');
            backtrack(current, open, close + 1, max, result);
            current.pop_back();
        }
    }
    
    static void backtrackAlt(vector<string>& result, string current, int left, int right) {
        if (left == 0 && right == 0) {
            result.push_back(current);
            return;
        }
        
        if (left > 0) {
            backtrackAlt(result, current + "(", left - 1, right);
        }
        
        if (right > left) {
            backtrackAlt(result, current + ")", left, right - 1);
        }
    }
};

// Time: O(4^n / sqrt(n)), Space: O(4^n / sqrt(n))
```

### 4. Permutations and Combinations

#### Permutations

```cpp path=null start=null
class Permutations {
public:
    // All permutations of distinct elements
    static vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        backtrack(nums, 0, result);
        return result;
    }
    
    // Permutations with duplicates
    static vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        vector<bool> used(nums.size(), false);
        vector<int> current;
        
        backtrackUnique(nums, used, current, result);
        return result;
    }
    
    // Next permutation
    static bool nextPermutation(vector<int>& nums) {
        int i = nums.size() - 2;
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }
        
        if (i < 0) {
            reverse(nums.begin(), nums.end());
            return false;
        }
        
        int j = nums.size() - 1;
        while (nums[j] <= nums[i]) {
            j--;
        }
        
        swap(nums[i], nums[j]);
        reverse(nums.begin() + i + 1, nums.end());
        return true;
    }
    
private:
    static void backtrack(vector<int>& nums, int start, vector<vector<int>>& result) {
        if (start == nums.size()) {
            result.push_back(nums);
            return;
        }
        
        for (int i = start; i < nums.size(); i++) {
            swap(nums[start], nums[i]);
            backtrack(nums, start + 1, result);
            swap(nums[start], nums[i]);  // Backtrack
        }
    }
    
    static void backtrackUnique(vector<int>& nums, vector<bool>& used, 
                               vector<int>& current, vector<vector<int>>& result) {
        if (current.size() == nums.size()) {
            result.push_back(current);
            return;
        }
        
        for (int i = 0; i < nums.size(); i++) {
            if (used[i] || (i > 0 && nums[i] == nums[i-1] && !used[i-1])) {
                continue;
            }
            
            current.push_back(nums[i]);
            used[i] = true;
            
            backtrackUnique(nums, used, current, result);
            
            current.pop_back();
            used[i] = false;
        }
    }
};

// Time: O(n! * n), Space: O(n)
```

#### Combinations

```cpp path=null start=null
class Combinations {
public:
    // Choose k elements from n elements
    static vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> current;
        backtrack(1, n, k, current, result);
        return result;
    }
    
    // Combination sum (elements can be reused)
    static vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
        vector<int> current;
        backtrack(candidates, target, 0, current, result);
        return result;
    }
    
    // Combination sum without reusing elements
    static vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
        vector<int> current;
        backtrackUnique(candidates, target, 0, current, result);
        return result;
    }
    
private:
    static void backtrack(int start, int n, int k, vector<int>& current, vector<vector<int>>& result) {
        if (current.size() == k) {
            result.push_back(current);
            return;
        }
        
        for (int i = start; i <= n; i++) {
            current.push_back(i);
            backtrack(i + 1, n, k, current, result);
            current.pop_back();
        }
    }
    
    static void backtrack(vector<int>& candidates, int target, int start, 
                         vector<int>& current, vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(current);
            return;
        }
        
        for (int i = start; i < candidates.size() && candidates[i] <= target; i++) {
            current.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], i, current, result);
            current.pop_back();
        }
    }
    
    static void backtrackUnique(vector<int>& candidates, int target, int start, 
                               vector<int>& current, vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(current);
            return;
        }
        
        for (int i = start; i < candidates.size() && candidates[i] <= target; i++) {
            if (i > start && candidates[i] == candidates[i-1]) {
                continue;  // Skip duplicates
            }
            
            current.push_back(candidates[i]);
            backtrackUnique(candidates, target - candidates[i], i + 1, current, result);
            current.pop_back();
        }
    }
};

// Time: O(2^n), Space: O(target/min_candidate)
```

### 5. Word Search and Pattern Matching

```cpp path=null start=null
class WordSearch {
public:
    // Word Search I
    static bool exist(vector<vector<char>>& board, string word) {
        int m = board.size(), n = board[0].size();
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (dfs(board, word, i, j, 0)) {
                    return true;
                }
            }
        }
        
        return false;
    }
    
    // Word Search II (multiple words)
    static vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        TrieNode* root = buildTrie(words);
        vector<string> result;
        
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                dfs(board, i, j, root, result);
            }
        }
        
        return result;
    }
    
private:
    struct TrieNode {
        vector<TrieNode*> children;
        string word;
        
        TrieNode() : children(26, nullptr) {}
    };
    
    static bool dfs(vector<vector<char>>& board, string& word, int i, int j, int index) {
        if (index == word.length()) return true;
        
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || 
            board[i][j] != word[index]) {
            return false;
        }
        
        char temp = board[i][j];
        board[i][j] = '#';  // Mark as visited
        
        bool found = dfs(board, word, i+1, j, index+1) ||
                     dfs(board, word, i-1, j, index+1) ||
                     dfs(board, word, i, j+1, index+1) ||
                     dfs(board, word, i, j-1, index+1);
        
        board[i][j] = temp;  // Backtrack
        return found;
    }
    
    static TrieNode* buildTrie(vector<string>& words) {
        TrieNode* root = new TrieNode();
        
        for (string& word : words) {
            TrieNode* node = root;
            for (char c : word) {
                int index = c - 'a';
                if (!node->children[index]) {
                    node->children[index] = new TrieNode();
                }
                node = node->children[index];
            }
            node->word = word;
        }
        
        return root;
    }
    
    static void dfs(vector<vector<char>>& board, int i, int j, 
                   TrieNode* node, vector<string>& result) {
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size()) return;
        
        char c = board[i][j];
        if (c == '#' || !node->children[c - 'a']) return;
        
        node = node->children[c - 'a'];
        if (!node->word.empty()) {
            result.push_back(node->word);
            node->word = "";  // Avoid duplicates
        }
        
        board[i][j] = '#';
        dfs(board, i+1, j, node, result);
        dfs(board, i-1, j, node, result);
        dfs(board, i, j+1, node, result);
        dfs(board, i, j-1, node, result);
        board[i][j] = c;
    }
};

// Word Search I: Time O(m*n*4^L), Space O(L)
// Word Search II: Time O(m*n*4^L), Space O(total characters in words)
```

### 6. Subset Generation

```cpp path=null start=null
class SubsetGeneration {
public:
    // Generate all subsets (power set)
    static vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        backtrack(nums, 0, current, result);
        return result;
    }
    
    // Generate subsets with duplicates
    static vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        vector<int> current;
        backtrackWithDup(nums, 0, current, result);
        return result;
    }
    
    // Generate subsets using bit manipulation
    static vector<vector<int>> subsetsBitwise(vector<int>& nums) {
        int n = nums.size();
        int totalSubsets = 1 << n;  // 2^n
        vector<vector<int>> result;
        
        for (int mask = 0; mask < totalSubsets; mask++) {
            vector<int> subset;
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    subset.push_back(nums[i]);
                }
            }
            result.push_back(subset);
        }
        
        return result;
    }
    
private:
    static void backtrack(vector<int>& nums, int start, vector<int>& current, 
                         vector<vector<int>>& result) {
        result.push_back(current);
        
        for (int i = start; i < nums.size(); i++) {
            current.push_back(nums[i]);
            backtrack(nums, i + 1, current, result);
            current.pop_back();
        }
    }
    
    static void backtrackWithDup(vector<int>& nums, int start, vector<int>& current, 
                                 vector<vector<int>>& result) {
        result.push_back(current);
        
        for (int i = start; i < nums.size(); i++) {
            if (i > start && nums[i] == nums[i-1]) {
                continue;  // Skip duplicates
            }
            
            current.push_back(nums[i]);
            backtrackWithDup(nums, i + 1, current, result);
            current.pop_back();
        }
    }
};

// Time: O(2^n * n), Space: O(2^n * n)
```

### 7. Palindrome Partitioning

```cpp path=null start=null
class PalindromePartitioning {
public:
    static vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> current;
        backtrack(s, 0, current, result);
        return result;
    }
    
    // Optimized version with precomputed palindrome table
    static vector<vector<string>> partitionOptimized(string s) {
        int n = s.length();
        vector<vector<bool>> isPalindrome(n, vector<bool>(n, false));
        
        // Precompute palindrome table
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                if (s[i] == s[j] && (i - j <= 2 || isPalindrome[j + 1][i - 1])) {
                    isPalindrome[j][i] = true;
                }
            }
        }
        
        vector<vector<string>> result;
        vector<string> current;
        backtrackOptimized(s, 0, current, result, isPalindrome);
        return result;
    }
    
    // Minimum cuts for palindrome partitioning
    static int minCut(string s) {
        int n = s.length();
        vector<int> dp(n, INT_MAX);
        vector<vector<bool>> isPalindrome(n, vector<bool>(n, false));
        
        // Precompute palindrome table
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                if (s[i] == s[j] && (i - j <= 2 || isPalindrome[j + 1][i - 1])) {
                    isPalindrome[j][i] = true;
                }
            }
        }
        
        for (int i = 0; i < n; i++) {
            if (isPalindrome[0][i]) {
                dp[i] = 0;
            } else {
                for (int j = 0; j < i; j++) {
                    if (isPalindrome[j + 1][i]) {
                        dp[i] = min(dp[i], dp[j] + 1);
                    }
                }
            }
        }
        
        return dp[n - 1];
    }
    
private:
    static bool isPalindrome(const string& s, int start, int end) {
        while (start < end) {
            if (s[start++] != s[end--]) {
                return false;
            }
        }
        return true;
    }
    
    static void backtrack(const string& s, int start, vector<string>& current, 
                         vector<vector<string>>& result) {
        if (start == s.length()) {
            result.push_back(current);
            return;
        }
        
        for (int end = start; end < s.length(); end++) {
            if (isPalindrome(s, start, end)) {
                current.push_back(s.substr(start, end - start + 1));
                backtrack(s, end + 1, current, result);
                current.pop_back();
            }
        }
    }
    
    static void backtrackOptimized(const string& s, int start, vector<string>& current,
                                   vector<vector<string>>& result,
                                   vector<vector<bool>>& isPalindrome) {
        if (start == s.length()) {
            result.push_back(current);
            return;
        }
        
        for (int end = start; end < s.length(); end++) {
            if (isPalindrome[start][end]) {
                current.push_back(s.substr(start, end - start + 1));
                backtrackOptimized(s, end + 1, current, result, isPalindrome);
                current.pop_back();
            }
        }
    }
};

// Time: O(2^n * n), Space: O(n)
```

## Advanced Backtracking Problems

### 8. Restore IP Addresses

```cpp path=null start=null
class RestoreIPAddresses {
public:
    static vector<string> restoreIpAddresses(string s) {
        vector<string> result;
        vector<string> current;
        backtrack(s, 0, current, result);
        return result;
    }
    
private:
    static void backtrack(const string& s, int start, vector<string>& current, 
                         vector<string>& result) {
        if (current.size() == 4) {
            if (start == s.length()) {
                result.push_back(current[0] + "." + current[1] + "." + current[2] + "." + current[3]);
            }
            return;
        }
        
        for (int len = 1; len <= 3 && start + len <= s.length(); len++) {
            string segment = s.substr(start, len);
            
            if (isValid(segment)) {
                current.push_back(segment);
                backtrack(s, start + len, current, result);
                current.pop_back();
            }
        }
    }
    
    static bool isValid(const string& segment) {
        if (segment.empty() || segment.length() > 3) return false;
        if (segment[0] == '0' && segment.length() > 1) return false;
        
        int num = stoi(segment);
        return num >= 0 && num <= 255;
    }
};

// Time: O(3^4), Space: O(1)
```

### 9. Expression Add Operators

```cpp path=null start=null
class ExpressionAddOperators {
public:
    static vector<string> addOperators(string num, int target) {
        vector<string> result;
        if (num.empty()) return result;
        
        backtrack(num, target, 0, 0, 0, "", result);
        return result;
    }
    
private:
    static void backtrack(const string& num, int target, int index, 
                         long long eval, long long multed, string expr, vector<string>& result) {
        if (index == num.length()) {
            if (eval == target) {
                result.push_back(expr);
            }
            return;
        }
        
        for (int i = index; i < num.length(); i++) {
            string cur = num.substr(index, i - index + 1);
            if (cur.length() > 1 && cur[0] == '0') break;  // Skip leading zeros
            
            long long curNum = stoll(cur);
            
            if (index == 0) {
                backtrack(num, target, i + 1, curNum, curNum, cur, result);
            } else {
                // Addition
                backtrack(num, target, i + 1, eval + curNum, curNum, expr + "+" + cur, result);
                
                // Subtraction
                backtrack(num, target, i + 1, eval - curNum, -curNum, expr + "-" + cur, result);
                
                // Multiplication
                backtrack(num, target, i + 1, eval - multed + multed * curNum, 
                         multed * curNum, expr + "*" + cur, result);
            }
        }
    }
};

// Time: O(4^n), Space: O(n)
```

## Optimization Techniques for Backtracking

### 1. Pruning
- **Early Termination**: Stop exploring if partial solution can't lead to valid solution
- **Constraint Propagation**: Use problem constraints to eliminate invalid branches
- **Ordering**: Choose variables/values in optimal order to find solutions faster

### 2. Memoization
- Store results of subproblems to avoid recomputation
- Useful when subproblems overlap

### 3. Iterative Deepening
- Gradually increase search depth
- Combines benefits of depth-first and breadth-first search

## Practice Problems

```cpp path=null start=null
// Problem 1: Letter Combinations of a Phone Number
vector<string> letterCombinations(string digits) {
    if (digits.empty()) return {};
    
    vector<string> mapping = {
        "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
    };
    
    vector<string> result;
    string current = "";
    
    function<void(int)> backtrack = [&](int index) {
        if (index == digits.length()) {
            result.push_back(current);
            return;
        }
        
        string letters = mapping[digits[index] - '0'];
        for (char c : letters) {
            current.push_back(c);
            backtrack(index + 1);
            current.pop_back();
        }
    };
    
    backtrack(0);
    return result;
}
// Time: O(4^n), Space: O(n)

// Problem 2: Beautiful Arrangement
int countArrangement(int n) {
    vector<bool> used(n + 1, false);
    return backtrack(1, n, used);
}

int backtrack(int pos, int n, vector<bool>& used) {
    if (pos > n) return 1;
    
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (!used[i] && (pos % i == 0 || i % pos == 0)) {
            used[i] = true;
            count += backtrack(pos + 1, n, used);
            used[i] = false;
        }
    }
    
    return count;
}
// Time: O(k) where k is the number of valid permutations

// Problem 3: Remove Invalid Parentheses
vector<string> removeInvalidParentheses(string s) {
    vector<string> result;
    set<string> visited;
    queue<string> q;
    
    q.push(s);
    visited.insert(s);
    
    bool found = false;
    
    while (!q.empty() && !found) {
        int size = q.size();
        
        for (int i = 0; i < size; i++) {
            string current = q.front();
            q.pop();
            
            if (isValid(current)) {
                result.push_back(current);
                found = true;
            }
            
            if (!found) {
                for (int j = 0; j < current.length(); j++) {
                    if (current[j] == '(' || current[j] == ')') {
                        string next = current.substr(0, j) + current.substr(j + 1);
                        if (visited.find(next) == visited.end()) {
                            visited.insert(next);
                            q.push(next);
                        }
                    }
                }
            }
        }
    }
    
    return result;
}

bool isValid(const string& s) {
    int count = 0;
    for (char c : s) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
            if (count < 0) return false;
        }
    }
    return count == 0;
}
// Time: O(2^n), Space: O(2^n)
```

---

# Advanced Topics {#advanced}

This section covers advanced data structures and algorithms that are commonly used in competitive programming and complex system design.

## Segment Trees

Segment trees are binary trees used for storing intervals or segments. They allow querying which segments contain a given point efficiently.

### Basic Segment Tree

```cpp path=null start=null
class SegmentTree {
private:
    vector<int> tree;
    int n;
    
    void build(vector<int>& arr, int node, int start, int end) {
        if (start == end) {
            tree[node] = arr[start];
        } else {
            int mid = (start + end) / 2;
            build(arr, 2 * node, start, mid);
            build(arr, 2 * node + 1, mid + 1, end);
            tree[node] = tree[2 * node] + tree[2 * node + 1];
        }
    }
    
    void updateHelper(int node, int start, int end, int idx, int val) {
        if (start == end) {
            tree[node] = val;
        } else {
            int mid = (start + end) / 2;
            if (idx <= mid) {
                updateHelper(2 * node, start, mid, idx, val);
            } else {
                updateHelper(2 * node + 1, mid + 1, end, idx, val);
            }
            tree[node] = tree[2 * node] + tree[2 * node + 1];
        }
    }
    
    int queryHelper(int node, int start, int end, int l, int r) {
        if (r < start || end < l) {
            return 0;  // Out of range
        }
        if (l <= start && end <= r) {
            return tree[node];  // Complete overlap
        }
        
        int mid = (start + end) / 2;
        int leftSum = queryHelper(2 * node, start, mid, l, r);
        int rightSum = queryHelper(2 * node + 1, mid + 1, end, l, r);
        return leftSum + rightSum;
    }
    
public:
    SegmentTree(vector<int>& arr) {
        n = arr.size();
        tree.resize(4 * n);
        build(arr, 1, 0, n - 1);
    }
    
    void update(int idx, int val) {
        updateHelper(1, 0, n - 1, idx, val);
    }
    
    int query(int l, int r) {
        return queryHelper(1, 0, n - 1, l, r);
    }
};

// Time: O(log n) for update and query, O(n) for build
// Space: O(n)
```

### Lazy Propagation Segment Tree

```cpp path=null start=null
class LazySegmentTree {
private:
    vector<long long> tree, lazy;
    int n;
    
    void push(int node, int start, int end) {
        if (lazy[node] != 0) {
            tree[node] += lazy[node] * (end - start + 1);
            if (start != end) {
                lazy[2 * node] += lazy[node];
                lazy[2 * node + 1] += lazy[node];
            }
            lazy[node] = 0;
        }
    }
    
    void updateRangeHelper(int node, int start, int end, int l, int r, int val) {
        push(node, start, end);
        if (start > r || end < l) {
            return;
        }
        if (start >= l && end <= r) {
            lazy[node] += val;
            push(node, start, end);
            return;
        }
        
        int mid = (start + end) / 2;
        updateRangeHelper(2 * node, start, mid, l, r, val);
        updateRangeHelper(2 * node + 1, mid + 1, end, l, r, val);
        
        push(2 * node, start, mid);
        push(2 * node + 1, mid + 1, end);
        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }
    
    long long queryHelper(int node, int start, int end, int l, int r) {
        if (start > r || end < l) {
            return 0;
        }
        
        push(node, start, end);
        
        if (start >= l && end <= r) {
            return tree[node];
        }
        
        int mid = (start + end) / 2;
        long long leftSum = queryHelper(2 * node, start, mid, l, r);
        long long rightSum = queryHelper(2 * node + 1, mid + 1, end, l, r);
        return leftSum + rightSum;
    }
    
public:
    LazySegmentTree(int size) {
        n = size;
        tree.assign(4 * n, 0);
        lazy.assign(4 * n, 0);
    }
    
    void updateRange(int l, int r, int val) {
        updateRangeHelper(1, 0, n - 1, l, r, val);
    }
    
    long long query(int l, int r) {
        return queryHelper(1, 0, n - 1, l, r);
    }
};

// Time: O(log n) for update and query
// Space: O(n)
```

## Fenwick Tree (Binary Indexed Tree)

```cpp path=null start=null
class FenwickTree {
private:
    vector<int> tree;
    int n;
    
public:
    FenwickTree(int size) {
        n = size;
        tree.assign(n + 1, 0);
    }
    
    FenwickTree(vector<int>& arr) {
        n = arr.size();
        tree.assign(n + 1, 0);
        for (int i = 0; i < n; i++) {
            update(i, arr[i]);
        }
    }
    
    void update(int idx, int val) {
        for (++idx; idx <= n; idx += idx & -idx) {
            tree[idx] += val;
        }
    }
    
    int query(int idx) {
        int sum = 0;
        for (++idx; idx > 0; idx -= idx & -idx) {
            sum += tree[idx];
        }
        return sum;
    }
    
    int rangeQuery(int l, int r) {
        return query(r) - (l > 0 ? query(l - 1) : 0);
    }
    
    // Find the index with given prefix sum (if the tree contains non-negative integers)
    int findKth(int k) {
        int idx = 0;
        int bitMask = 1;
        while (bitMask <= n) bitMask <<= 1;
        bitMask >>= 1;
        
        while (bitMask > 0) {
            int next = idx + bitMask;
            if (next <= n && tree[next] < k) {
                idx = next;
                k -= tree[idx];
            }
            bitMask >>= 1;
        }
        return idx;
    }
};

// Time: O(log n) for update and query
// Space: O(n)
```

## Disjoint Set Union (Union-Find)

```cpp path=null start=null
class DSU {
private:
    vector<int> parent, rank, size;
    int components;
    
public:
    DSU(int n) {
        parent.resize(n);
        rank.assign(n, 0);
        size.assign(n, 1);
        components = n;
        iota(parent.begin(), parent.end(), 0);
    }
    
    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);  // Path compression
        }
        return parent[x];
    }
    
    bool unite(int x, int y) {
        int px = find(x), py = find(y);
        if (px == py) return false;
        
        // Union by rank
        if (rank[px] < rank[py]) {
            parent[px] = py;
            size[py] += size[px];
        } else if (rank[px] > rank[py]) {
            parent[py] = px;
            size[px] += size[py];
        } else {
            parent[py] = px;
            size[px] += size[py];
            rank[px]++;
        }
        
        components--;
        return true;
    }
    
    bool connected(int x, int y) {
        return find(x) == find(y);
    }
    
    int componentSize(int x) {
        return size[find(x)];
    }
    
    int numComponents() {
        return components;
    }
};

// Time: O(α(n)) for find and unite, where α is inverse Ackermann function
// Space: O(n)
```

## Sparse Table

```cpp path=null start=null
template<typename T>
class SparseTable {
private:
    vector<vector<T>> st;
    vector<int> lg;
    function<T(T, T)> combine;
    
public:
    SparseTable(vector<T>& arr, function<T(T, T)> func) {
        int n = arr.size();
        int maxLog = __builtin_clz(1) - __builtin_clz(n) + 1;
        
        st.assign(maxLog, vector<T>(n));
        lg.resize(n + 1);
        combine = func;
        
        // Precompute logarithms
        lg[1] = 0;
        for (int i = 2; i <= n; i++) {
            lg[i] = lg[i / 2] + 1;
        }
        
        // Initialize first row
        for (int i = 0; i < n; i++) {
            st[0][i] = arr[i];
        }
        
        // Build sparse table
        for (int k = 1; k < maxLog; k++) {
            for (int i = 0; i + (1 << k) - 1 < n; i++) {
                st[k][i] = combine(st[k-1][i], st[k-1][i + (1 << (k-1))]);
            }
        }
    }
    
    T query(int l, int r) {
        int k = lg[r - l + 1];
        return combine(st[k][l], st[k][r - (1 << k) + 1]);
    }
};

// Usage for Range Minimum Query
class RMQ {
public:
    SparseTable<int> st;
    
    RMQ(vector<int>& arr) : st(arr, [](int a, int b) { return min(a, b); }) {}
    
    int query(int l, int r) {
        return st.query(l, r);
    }
};

// Time: O(n log n) preprocessing, O(1) query
// Space: O(n log n)
```

## Trie (Prefix Tree)

```cpp path=null start=null
class TrieNode {
public:
    vector<TrieNode*> children;
    bool isEndOfWord;
    int count;  // Number of words passing through this node
    
    TrieNode() {
        children.resize(26, nullptr);
        isEndOfWord = false;
        count = 0;
    }
};

class Trie {
private:
    TrieNode* root;
    
public:
    Trie() {
        root = new TrieNode();
    }
    
    void insert(const string& word) {
        TrieNode* node = root;
        for (char c : word) {
            int index = c - 'a';
            if (!node->children[index]) {
                node->children[index] = new TrieNode();
            }
            node = node->children[index];
            node->count++;
        }
        node->isEndOfWord = true;
    }
    
    bool search(const string& word) {
        TrieNode* node = find(word);
        return node && node->isEndOfWord;
    }
    
    bool startsWith(const string& prefix) {
        return find(prefix) != nullptr;
    }
    
    int countWordsWithPrefix(const string& prefix) {
        TrieNode* node = find(prefix);
        return node ? node->count : 0;
    }
    
    void remove(const string& word) {
        removeHelper(root, word, 0);
    }
    
    vector<string> getAllWordsWithPrefix(const string& prefix) {
        vector<string> result;
        TrieNode* node = find(prefix);
        if (node) {
            string current = prefix;
            dfs(node, current, result);
        }
        return result;
    }
    
private:
    TrieNode* find(const string& word) {
        TrieNode* node = root;
        for (char c : word) {
            int index = c - 'a';
            if (!node->children[index]) {
                return nullptr;
            }
            node = node->children[index];
        }
        return node;
    }
    
    bool removeHelper(TrieNode* node, const string& word, int index) {
        if (index == word.length()) {
            if (!node->isEndOfWord) return false;
            node->isEndOfWord = false;
            return !hasChildren(node);
        }
        
        int charIndex = word[index] - 'a';
        TrieNode* child = node->children[charIndex];
        if (!child) return false;
        
        bool shouldDelete = removeHelper(child, word, index + 1);
        child->count--;
        
        if (shouldDelete) {
            delete child;
            node->children[charIndex] = nullptr;
            return !node->isEndOfWord && !hasChildren(node);
        }
        
        return false;
    }
    
    bool hasChildren(TrieNode* node) {
        for (TrieNode* child : node->children) {
            if (child) return true;
        }
        return false;
    }
    
    void dfs(TrieNode* node, string& current, vector<string>& result) {
        if (node->isEndOfWord) {
            result.push_back(current);
        }
        
        for (int i = 0; i < 26; i++) {
            if (node->children[i]) {
                current.push_back('a' + i);
                dfs(node->children[i], current, result);
                current.pop_back();
            }
        }
    }
};

// Time: O(m) for insert, search, startsWith where m is word length
// Space: O(ALPHABET_SIZE * N * M) where N is number of words, M is average length
```

## Suffix Array and LCP Array

```cpp path=null start=null
class SuffixArray {
private:
    string s;
    vector<int> sa, lcp;
    
    vector<int> buildSuffixArray() {
        int n = s.length();
        vector<int> sa(n), rank(n);
        
        // Initial ranking
        for (int i = 0; i < n; i++) {
            sa[i] = i;
            rank[i] = s[i];
        }
        
        for (int k = 1; k < n; k <<= 1) {
            sort(sa.begin(), sa.end(), [&](int a, int b) {
                if (rank[a] != rank[b]) return rank[a] < rank[b];
                int ra = (a + k < n) ? rank[a + k] : -1;
                int rb = (b + k < n) ? rank[b + k] : -1;
                return ra < rb;
            });
            
            vector<int> newRank(n);
            for (int i = 1; i < n; i++) {
                int prev = sa[i - 1], curr = sa[i];
                newRank[curr] = newRank[prev];
                
                if (rank[prev] != rank[curr]) {
                    newRank[curr]++;
                } else {
                    int rprev = (prev + k < n) ? rank[prev + k] : -1;
                    int rcurr = (curr + k < n) ? rank[curr + k] : -1;
                    if (rprev != rcurr) newRank[curr]++;
                }
            }
            rank = newRank;
        }
        
        return sa;
    }
    
    vector<int> buildLCPArray() {
        int n = s.length();
        vector<int> lcp(n - 1), rank(n);
        
        for (int i = 0; i < n; i++) {
            rank[sa[i]] = i;
        }
        
        int h = 0;
        for (int i = 0; i < n; i++) {
            if (rank[i] > 0) {
                int j = sa[rank[i] - 1];
                while (i + h < n && j + h < n && s[i + h] == s[j + h]) {
                    h++;
                }
                lcp[rank[i] - 1] = h;
                if (h > 0) h--;
            }
        }
        
        return lcp;
    }
    
public:
    SuffixArray(const string& str) : s(str) {
        sa = buildSuffixArray();
        lcp = buildLCPArray();
    }
    
    vector<int> getSuffixArray() { return sa; }
    vector<int> getLCPArray() { return lcp; }
    
    // Count number of distinct substrings
    long long countDistinctSubstrings() {
        int n = s.length();
        long long total = (long long)n * (n + 1) / 2;
        
        for (int lcpVal : lcp) {
            total -= lcpVal;
        }
        
        return total;
    }
    
    // Find longest repeated substring
    string longestRepeatedSubstring() {
        int maxLCP = 0, index = 0;
        for (int i = 0; i < lcp.size(); i++) {
            if (lcp[i] > maxLCP) {
                maxLCP = lcp[i];
                index = i;
            }
        }
        
        if (maxLCP == 0) return "";
        return s.substr(sa[index], maxLCP);
    }
};

// Time: O(n log² n), Space: O(n)
```

## Heavy-Light Decomposition

```cpp path=null start=null
class HeavyLightDecomposition {
private:
    vector<vector<int>> adj;
    vector<int> parent, depth, heavy, head, pos;
    int n, timer;
    
    int dfs(int v, int p) {
        int size = 1, maxChildSize = 0;
        parent[v] = p;
        
        for (int u : adj[v]) {
            if (u != p) {
                depth[u] = depth[v] + 1;
                int childSize = dfs(u, v);
                size += childSize;
                
                if (childSize > maxChildSize) {
                    maxChildSize = childSize;
                    heavy[v] = u;
                }
            }
        }
        
        return size;
    }
    
    void decompose(int v, int h) {
        head[v] = h;
        pos[v] = timer++;
        
        if (heavy[v] != -1) {
            decompose(heavy[v], h);
        }
        
        for (int u : adj[v]) {
            if (u != parent[v] && u != heavy[v]) {
                decompose(u, u);
            }
        }
    }
    
public:
    HeavyLightDecomposition(vector<vector<int>>& graph, int root = 0) {
        n = graph.size();
        adj = graph;
        parent.assign(n, -1);
        depth.assign(n, 0);
        heavy.assign(n, -1);
        head.assign(n, 0);
        pos.assign(n, 0);
        timer = 0;
        
        dfs(root, -1);
        decompose(root, root);
    }
    
    int lca(int u, int v) {
        while (head[u] != head[v]) {
            if (depth[head[u]] > depth[head[v]]) {
                u = parent[head[u]];
            } else {
                v = parent[head[v]];
            }
        }
        return depth[u] < depth[v] ? u : v;
    }
    
    vector<pair<int, int>> getPathSegments(int u, int v) {
        vector<pair<int, int>> segments;
        int l = lca(u, v);
        
        // Path from u to lca
        while (head[u] != head[l]) {
            segments.push_back({pos[head[u]], pos[u]});
            u = parent[head[u]];
        }
        segments.push_back({pos[l], pos[u]});
        
        // Path from lca to v
        vector<pair<int, int>> rightSegments;
        while (head[v] != head[l]) {
            rightSegments.push_back({pos[head[v]], pos[v]});
            v = parent[head[v]];
        }
        if (v != l) {
            rightSegments.push_back({pos[l] + 1, pos[v]});
        }
        
        // Reverse right segments and add to result
        for (int i = rightSegments.size() - 1; i >= 0; i--) {
            segments.push_back(rightSegments[i]);
        }
        
        return segments;
    }
};

// Time: O(n) preprocessing, O(log n) per query
// Space: O(n)
```

## Lowest Common Ancestor (LCA)

### Binary Lifting LCA

```cpp path=null start=null
class LCABinaryLifting {
private:
    vector<vector<int>> up;
    vector<int> depth;
    int n, LOG;
    
public:
    LCABinaryLifting(vector<vector<int>>& adj, int root = 0) {
        n = adj.size();
        LOG = ceil(log2(n)) + 1;
        up.assign(n, vector<int>(LOG, -1));
        depth.assign(n, 0);
        
        dfs(adj, root, -1);
        
        // Fill binary lifting table
        for (int j = 1; j < LOG; j++) {
            for (int i = 0; i < n; i++) {
                if (up[i][j-1] != -1) {
                    up[i][j] = up[up[i][j-1]][j-1];
                }
            }
        }
    }
    
private:
    void dfs(vector<vector<int>>& adj, int v, int p) {
        up[v][0] = p;
        for (int u : adj[v]) {
            if (u != p) {
                depth[u] = depth[v] + 1;
                dfs(adj, u, v);
            }
        }
    }
    
public:
    int lca(int u, int v) {
        if (depth[u] < depth[v]) swap(u, v);
        
        // Bring u to same level as v
        int diff = depth[u] - depth[v];
        for (int i = 0; i < LOG; i++) {
            if ((diff >> i) & 1) {
                u = up[u][i];
            }
        }
        
        if (u == v) return u;
        
        // Binary search for LCA
        for (int i = LOG - 1; i >= 0; i--) {
            if (up[u][i] != up[v][i]) {
                u = up[u][i];
                v = up[v][i];
            }
        }
        
        return up[u][0];
    }
    
    int kthAncestor(int node, int k) {
        for (int i = 0; i < LOG; i++) {
            if ((k >> i) & 1) {
                node = up[node][i];
                if (node == -1) break;
            }
        }
        return node;
    }
    
    int distance(int u, int v) {
        return depth[u] + depth[v] - 2 * depth[lca(u, v)];
    }
};

// Time: O(n log n) preprocessing, O(log n) per query
// Space: O(n log n)
```

## Mo's Algorithm

```cpp path=null start=null
struct Query {
    int l, r, idx;
};

class MosAlgorithm {
private:
    vector<int> arr;
    vector<Query> queries;
    vector<int> answer;
    int blockSize;
    
    // Current state variables
    unordered_map<int, int> freq;
    int currentAnswer;
    
    void add(int idx) {
        int val = arr[idx];
        freq[val]++;
        if (freq[val] == 1) {
            currentAnswer++;
        }
    }
    
    void remove(int idx) {
        int val = arr[idx];
        freq[val]--;
        if (freq[val] == 0) {
            currentAnswer--;
        }
    }
    
public:
    MosAlgorithm(vector<int>& array) : arr(array) {
        blockSize = sqrt(array.size());
        currentAnswer = 0;
    }
    
    void addQuery(int l, int r) {
        queries.push_back({l, r, (int)queries.size()});
    }
    
    vector<int> processQueries() {
        answer.resize(queries.size());
        
        // Sort queries by Mo's order
        sort(queries.begin(), queries.end(), [&](const Query& a, const Query& b) {
            int blockA = a.l / blockSize;
            int blockB = b.l / blockSize;
            if (blockA != blockB) {
                return blockA < blockB;
            }
            return (blockA & 1) ? a.r < b.r : a.r > b.r;
        });
        
        int currentL = 0, currentR = -1;
        
        for (const Query& q : queries) {
            // Extend right
            while (currentR < q.r) {
                currentR++;
                add(currentR);
            }
            
            // Extend left
            while (currentL > q.l) {
                currentL--;
                add(currentL);
            }
            
            // Shrink right
            while (currentR > q.r) {
                remove(currentR);
                currentR--;
            }
            
            // Shrink left
            while (currentL < q.l) {
                remove(currentL);
                currentL++;
            }
            
            answer[q.idx] = currentAnswer;
        }
        
        return answer;
    }
};

// Time: O(n√n) for processing all queries
// Space: O(n)
```

## Practice Problems

```cpp path=null start=null
// Problem 1: Range Sum Query - Mutable
class NumArray {
private:
    FenwickTree ft;
    
public:
    NumArray(vector<int>& nums) : ft(nums) {}
    
    void update(int index, int val) {
        int oldVal = ft.rangeQuery(index, index);
        ft.update(index, val - oldVal);
    }
    
    int sumRange(int left, int right) {
        return ft.rangeQuery(left, right);
    }
};

// Problem 2: Count Inversions
int countInversions(vector<int>& arr) {
    vector<int> temp = arr;
    sort(temp.begin(), temp.end());
    temp.erase(unique(temp.begin(), temp.end()), temp.end());
    
    FenwickTree ft(temp.size());
    int inversions = 0;
    
    for (int i = arr.size() - 1; i >= 0; i--) {
        int compressed = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();
        inversions += ft.query(compressed - 1);
        ft.update(compressed, 1);
    }
    
    return inversions;
}

// Problem 3: Longest Common Prefix Array Usage
int longestCommonPrefix(const string& s, int i, int j, const SuffixArray& sa) {
    vector<int> lcp = sa.getLCPArray();
    vector<int> suffixArr = sa.getSuffixArray();
    
    // Find positions of suffixes i and j in suffix array
    int pos_i = -1, pos_j = -1;
    for (int k = 0; k < suffixArr.size(); k++) {
        if (suffixArr[k] == i) pos_i = k;
        if (suffixArr[k] == j) pos_j = k;
    }
    
    if (pos_i > pos_j) swap(pos_i, pos_j);
    
    int minLCP = INT_MAX;
    for (int k = pos_i; k < pos_j; k++) {
        minLCP = min(minLCP, lcp[k]);
    }
    
    return minLCP;
}
```

---

# Practice Problems {#practice}

This section contains a comprehensive collection of practice problems organized by topic and difficulty level. Each problem includes multiple solution approaches and detailed explanations.

## Problem Categories

### Arrays and Strings - Easy

```cpp path=null start=null
// 1. Two Sum
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (map.find(complement) != map.end()) {
            return {map[complement], i};
        }
        map[nums[i]] = i;
    }
    return {};
}
// Time: O(n), Space: O(n)

// 2. Best Time to Buy and Sell Stock
int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;
    
    for (int price : prices) {
        minPrice = min(minPrice, price);
        maxProfit = max(maxProfit, price - minPrice);
    }
    
    return maxProfit;
}
// Time: O(n), Space: O(1)

// 3. Contains Duplicate
bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;
    for (int num : nums) {
        if (seen.count(num)) return true;
        seen.insert(num);
    }
    return false;
}
// Time: O(n), Space: O(n)

// 4. Maximum Subarray (Kadane's Algorithm)
int maxSubArray(vector<int>& nums) {
    int maxSoFar = nums[0];
    int maxEndingHere = nums[0];
    
    for (int i = 1; i < nums.size(); i++) {
        maxEndingHere = max(nums[i], maxEndingHere + nums[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }
    
    return maxSoFar;
}
// Time: O(n), Space: O(1)

// 5. Valid Palindrome
bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1;
    
    while (left < right) {
        while (left < right && !isalnum(s[left])) left++;
        while (left < right && !isalnum(s[right])) right--;
        
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        
        left++;
        right--;
    }
    
    return true;
}
// Time: O(n), Space: O(1)
```

### Arrays and Strings - Medium

```cpp path=null start=null
// 1. 3Sum
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    
    for (int i = 0; i < nums.size() - 2; i++) {
        if (i > 0 && nums[i] == nums[i-1]) continue;
        
        int left = i + 1, right = nums.size() - 1;
        
        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            
            if (sum == 0) {
                result.push_back({nums[i], nums[left], nums[right]});
                while (left < right && nums[left] == nums[left+1]) left++;
                while (left < right && nums[right] == nums[right-1]) right--;
                left++;
                right--;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }
    
    return result;
}
// Time: O(n²), Space: O(1)

// 2. Container With Most Water
int maxArea(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int maxArea = 0;
    
    while (left < right) {
        int area = min(height[left], height[right]) * (right - left);
        maxArea = max(maxArea, area);
        
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    
    return maxArea;
}
// Time: O(n), Space: O(1)

// 3. Longest Substring Without Repeating Characters
int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> charMap;
    int maxLength = 0, start = 0;
    
    for (int end = 0; end < s.length(); end++) {
        if (charMap.find(s[end]) != charMap.end() && charMap[s[end]] >= start) {
            start = charMap[s[end]] + 1;
        }
        
        charMap[s[end]] = end;
        maxLength = max(maxLength, end - start + 1);
    }
    
    return maxLength;
}
// Time: O(n), Space: O(min(m,n)) where m is charset size

// 4. Product of Array Except Self
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, 1);
    
    // Left pass
    for (int i = 1; i < n; i++) {
        result[i] = result[i-1] * nums[i-1];
    }
    
    // Right pass
    int right = 1;
    for (int i = n-1; i >= 0; i--) {
        result[i] *= right;
        right *= nums[i];
    }
    
    return result;
}
// Time: O(n), Space: O(1) extra space

// 5. Rotate Image
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    
    // Transpose
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    
    // Reverse each row
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}
// Time: O(n²), Space: O(1)
```

### Linked Lists

```cpp path=null start=null
// 1. Reverse Linked List
ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* current = head;
    
    while (current) {
        ListNode* next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    return prev;
}
// Time: O(n), Space: O(1)

// 2. Merge Two Sorted Lists
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode dummy(0);
    ListNode* current = &dummy;
    
    while (list1 && list2) {
        if (list1->val <= list2->val) {
            current->next = list1;
            list1 = list1->next;
        } else {
            current->next = list2;
            list2 = list2->next;
        }
        current = current->next;
    }
    
    current->next = list1 ? list1 : list2;
    return dummy.next;
}
// Time: O(n + m), Space: O(1)

// 3. Linked List Cycle
bool hasCycle(ListNode *head) {
    if (!head || !head->next) return false;
    
    ListNode* slow = head;
    ListNode* fast = head->next;
    
    while (fast && fast->next) {
        if (slow == fast) return true;
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return false;
}
// Time: O(n), Space: O(1)

// 4. Remove Nth Node From End
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode dummy(0);
    dummy.next = head;
    ListNode* first = &dummy;
    ListNode* second = &dummy;
    
    // Move first n+1 steps ahead
    for (int i = 0; i <= n; i++) {
        first = first->next;
    }
    
    // Move both until first reaches end
    while (first) {
        first = first->next;
        second = second->next;
    }
    
    // Remove the nth node
    ListNode* toDelete = second->next;
    second->next = second->next->next;
    delete toDelete;
    
    return dummy.next;
}
// Time: O(n), Space: O(1)

// 5. Add Two Numbers
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode dummy(0);
    ListNode* current = &dummy;
    int carry = 0;
    
    while (l1 || l2 || carry) {
        int sum = carry;
        if (l1) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2) {
            sum += l2->val;
            l2 = l2->next;
        }
        
        current->next = new ListNode(sum % 10);
        carry = sum / 10;
        current = current->next;
    }
    
    return dummy.next;
}
// Time: O(max(n,m)), Space: O(1)
```

### Trees and Binary Search Trees

```cpp path=null start=null
// 1. Maximum Depth of Binary Tree
int maxDepth(TreeNode* root) {
    if (!root) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}
// Time: O(n), Space: O(h) where h is height

// 2. Validate Binary Search Tree
bool isValidBST(TreeNode* root) {
    return isValidBSTHelper(root, LONG_MIN, LONG_MAX);
}

bool isValidBSTHelper(TreeNode* node, long minVal, long maxVal) {
    if (!node) return true;
    
    if (node->val <= minVal || node->val >= maxVal) {
        return false;
    }
    
    return isValidBSTHelper(node->left, minVal, node->val) &&
           isValidBSTHelper(node->right, node->val, maxVal);
}
// Time: O(n), Space: O(h)

// 3. Lowest Common Ancestor of BST
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (p->val > q->val) swap(p, q);
    
    while (root) {
        if (root->val > q->val) {
            root = root->left;
        } else if (root->val < p->val) {
            root = root->right;
        } else {
            return root;
        }
    }
    
    return nullptr;
}
// Time: O(h), Space: O(1)

// 4. Binary Tree Level Order Traversal
vector<vector<int>> levelOrder(TreeNode* root) {
    if (!root) return {};
    
    vector<vector<int>> result;
    queue<TreeNode*> q;
    q.push(root);
    
    while (!q.empty()) {
        int levelSize = q.size();
        vector<int> currentLevel;
        
        for (int i = 0; i < levelSize; i++) {
            TreeNode* node = q.front();
            q.pop();
            
            currentLevel.push_back(node->val);
            
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        
        result.push_back(currentLevel);
    }
    
    return result;
}
// Time: O(n), Space: O(w) where w is maximum width

// 5. Construct Binary Tree from Preorder and Inorder
TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    unordered_map<int, int> inorderMap;
    for (int i = 0; i < inorder.size(); i++) {
        inorderMap[inorder[i]] = i;
    }
    
    return buildTreeHelper(preorder, 0, preorder.size() - 1,
                          inorder, 0, inorder.size() - 1, inorderMap);
}

TreeNode* buildTreeHelper(vector<int>& preorder, int preStart, int preEnd,
                         vector<int>& inorder, int inStart, int inEnd,
                         unordered_map<int, int>& inorderMap) {
    if (preStart > preEnd) return nullptr;
    
    TreeNode* root = new TreeNode(preorder[preStart]);
    int inRoot = inorderMap[root->val];
    int numsLeft = inRoot - inStart;
    
    root->left = buildTreeHelper(preorder, preStart + 1, preStart + numsLeft,
                                inorder, inStart, inRoot - 1, inorderMap);
    root->right = buildTreeHelper(preorder, preStart + numsLeft + 1, preEnd,
                                 inorder, inRoot + 1, inEnd, inorderMap);
    
    return root;
}
// Time: O(n), Space: O(n)
```

### Dynamic Programming

```cpp path=null start=null
// 1. Climbing Stairs
int climbStairs(int n) {
    if (n <= 2) return n;
    
    int prev2 = 1, prev1 = 2;
    
    for (int i = 3; i <= n; i++) {
        int current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    
    return prev1;
}
// Time: O(n), Space: O(1)

// 2. House Robber
int rob(vector<int>& nums) {
    if (nums.empty()) return 0;
    if (nums.size() == 1) return nums[0];
    
    int prev2 = nums[0];
    int prev1 = max(nums[0], nums[1]);
    
    for (int i = 2; i < nums.size(); i++) {
        int current = max(prev1, prev2 + nums[i]);
        prev2 = prev1;
        prev1 = current;
    }
    
    return prev1;
}
// Time: O(n), Space: O(1)

// 3. Coin Change
int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount + 1, amount + 1);
    dp[0] = 0;
    
    for (int i = 1; i <= amount; i++) {
        for (int coin : coins) {
            if (coin <= i) {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }
    
    return dp[amount] > amount ? -1 : dp[amount];
}
// Time: O(amount * coins), Space: O(amount)

// 4. Longest Increasing Subsequence
int lengthOfLIS(vector<int>& nums) {
    vector<int> dp;
    
    for (int num : nums) {
        auto it = lower_bound(dp.begin(), dp.end(), num);
        if (it == dp.end()) {
            dp.push_back(num);
        } else {
            *it = num;
        }
    }
    
    return dp.size();
}
// Time: O(n log n), Space: O(n)

// 5. 0/1 Knapsack
int knapsack(vector<int>& weights, vector<int>& values, int capacity) {
    int n = weights.size();
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));
    
    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= capacity; w++) {
            if (weights[i-1] <= w) {
                dp[i][w] = max(dp[i-1][w], 
                              dp[i-1][w - weights[i-1]] + values[i-1]);
            } else {
                dp[i][w] = dp[i-1][w];
            }
        }
    }
    
    return dp[n][capacity];
}
// Time: O(n * capacity), Space: O(n * capacity)
```

### Graph Problems

```cpp path=null start=null
// 1. Number of Islands
int numIslands(vector<vector<char>>& grid) {
    if (grid.empty()) return 0;
    
    int islands = 0;
    int m = grid.size(), n = grid[0].size();
    
    function<void(int, int)> dfs = [&](int i, int j) {
        if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == '0') {
            return;
        }
        
        grid[i][j] = '0';
        dfs(i+1, j);
        dfs(i-1, j);
        dfs(i, j+1);
        dfs(i, j-1);
    };
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == '1') {
                islands++;
                dfs(i, j);
            }
        }
    }
    
    return islands;
}
// Time: O(m*n), Space: O(m*n)

// 2. Course Schedule (Topological Sort)
bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    vector<vector<int>> graph(numCourses);
    vector<int> indegree(numCourses, 0);
    
    for (auto& prereq : prerequisites) {
        graph[prereq[1]].push_back(prereq[0]);
        indegree[prereq[0]]++;
    }
    
    queue<int> q;
    for (int i = 0; i < numCourses; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }
    
    int completed = 0;
    while (!q.empty()) {
        int course = q.front();
        q.pop();
        completed++;
        
        for (int neighbor : graph[course]) {
            indegree[neighbor]--;
            if (indegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }
    
    return completed == numCourses;
}
// Time: O(V + E), Space: O(V + E)

// 3. Clone Graph
Node* cloneGraph(Node* node) {
    if (!node) return nullptr;
    
    unordered_map<Node*, Node*> visited;
    
    function<Node*(Node*)> dfs = [&](Node* original) -> Node* {
        if (visited.count(original)) {
            return visited[original];
        }
        
        Node* clone = new Node(original->val);
        visited[original] = clone;
        
        for (Node* neighbor : original->neighbors) {
            clone->neighbors.push_back(dfs(neighbor));
        }
        
        return clone;
    };
    
    return dfs(node);
}
// Time: O(V + E), Space: O(V)
```

### Hard Problems

```cpp path=null start=null
// 1. Median of Two Sorted Arrays
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    if (nums1.size() > nums2.size()) {
        return findMedianSortedArrays(nums2, nums1);
    }
    
    int m = nums1.size(), n = nums2.size();
    int left = 0, right = m;
    
    while (left <= right) {
        int partitionX = (left + right) / 2;
        int partitionY = (m + n + 1) / 2 - partitionX;
        
        int maxLeftX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
        int minRightX = (partitionX == m) ? INT_MAX : nums1[partitionX];
        
        int maxLeftY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
        int minRightY = (partitionY == n) ? INT_MAX : nums2[partitionY];
        
        if (maxLeftX <= minRightY && maxLeftY <= minRightX) {
            if ((m + n) % 2 == 0) {
                return (max(maxLeftX, maxLeftY) + min(minRightX, minRightY)) / 2.0;
            } else {
                return max(maxLeftX, maxLeftY);
            }
        } else if (maxLeftX > minRightY) {
            right = partitionX - 1;
        } else {
            left = partitionX + 1;
        }
    }
    
    return 0.0;
}
// Time: O(log(min(m,n))), Space: O(1)

// 2. Trapping Rain Water
int trap(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int leftMax = 0, rightMax = 0;
    int water = 0;
    
    while (left < right) {
        if (height[left] < height[right]) {
            if (height[left] >= leftMax) {
                leftMax = height[left];
            } else {
                water += leftMax - height[left];
            }
            left++;
        } else {
            if (height[right] >= rightMax) {
                rightMax = height[right];
            } else {
                water += rightMax - height[right];
            }
            right--;
        }
    }
    
    return water;
}
// Time: O(n), Space: O(1)

// 3. Sliding Window Maximum
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    deque<int> dq;  // Store indices
    vector<int> result;
    
    for (int i = 0; i < nums.size(); i++) {
        // Remove indices outside current window
        while (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }
        
        // Remove indices of smaller elements
        while (!dq.empty() && nums[dq.back()] <= nums[i]) {
            dq.pop_back();
        }
        
        dq.push_back(i);
        
        // Add to result if window is complete
        if (i >= k - 1) {
            result.push_back(nums[dq.front()]);
        }
    }
    
    return result;
}
// Time: O(n), Space: O(k)

// 4. Edit Distance
int minDistance(string word1, string word2) {
    int m = word1.length(), n = word2.length();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));
    
    // Initialize base cases
    for (int i = 0; i <= m; i++) dp[i][0] = i;
    for (int j = 0; j <= n; j++) dp[0][j] = j;
    
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (word1[i-1] == word2[j-1]) {
                dp[i][j] = dp[i-1][j-1];
            } else {
                dp[i][j] = 1 + min({dp[i-1][j],     // Delete
                                   dp[i][j-1],     // Insert  
                                   dp[i-1][j-1]}); // Replace
            }
        }
    }
    
    return dp[m][n];
}
// Time: O(m*n), Space: O(m*n)

// 5. Serialize and Deserialize Binary Tree
class Codec {
public:
    string serialize(TreeNode* root) {
        if (!root) return "null,";
        return to_string(root->val) + "," + serialize(root->left) + serialize(root->right);
    }
    
    TreeNode* deserialize(string data) {
        queue<string> nodes;
        stringstream ss(data);
        string item;
        
        while (getline(ss, item, ',')) {
            nodes.push(item);
        }
        
        return deserializeHelper(nodes);
    }
    
private:
    TreeNode* deserializeHelper(queue<string>& nodes) {
        string val = nodes.front();
        nodes.pop();
        
        if (val == "null") return nullptr;
        
        TreeNode* root = new TreeNode(stoi(val));
        root->left = deserializeHelper(nodes);
        root->right = deserializeHelper(nodes);
        
        return root;
    }
};
// Time: O(n), Space: O(n)
```

## Problem-Solving Strategies

### 1. Pattern Recognition
- **Two Pointers**: Array problems with sorted input or palindromes
- **Sliding Window**: Subarray/substring problems with constraints
- **Fast & Slow Pointers**: Linked list cycle detection
- **Merge Intervals**: Overlapping intervals
- **Cyclic Sort**: Problems involving arrays with numbers in given range
- **Binary Search**: Search in sorted space
- **BFS/DFS**: Tree/Graph traversal and connectivity
- **Dynamic Programming**: Optimization problems with overlapping subproblems

### 2. Time Complexity Goals
- **O(1)**: Hash table operations, array access
- **O(log n)**: Binary search, heap operations
- **O(n)**: Single pass through data
- **O(n log n)**: Efficient sorting, divide and conquer
- **O(n²)**: Nested loops, comparison-based approaches

### 3. Space Optimization Techniques
- **In-place algorithms**: Modify input instead of creating new data structures
- **Two-variable DP**: Reduce space complexity from O(n) to O(1)
- **Bit manipulation**: Use bits to represent states
- **Mathematical formulas**: Replace iterative calculations

### 4. Common Pitfalls
- **Off-by-one errors**: Careful with array indices and loop bounds
- **Integer overflow**: Use long long for large calculations
- **Edge cases**: Empty inputs, single elements, duplicates
- **Memory leaks**: Proper cleanup in C++
- **Time limit exceeded**: Optimize algorithm or implementation

---

# Interview Preparation Guide {#interview-prep}

This comprehensive guide provides strategies, tips, and patterns to excel in technical interviews and competitive programming.

## Interview Process Overview

### Typical Interview Structure
1. **Introduction** (5 minutes) - Introduce yourself, discuss background
2. **Technical Problem** (35-40 minutes) - Solve 1-2 coding problems
3. **Questions for Interviewer** (5-10 minutes) - Ask thoughtful questions

### What Interviewers Look For
- **Problem-solving approach**: How you break down problems
- **Code quality**: Clean, readable, and efficient code
- **Communication**: Explaining your thought process clearly
- **Edge case handling**: Considering boundary conditions
- **Optimization**: Improving time/space complexity when possible

## Pre-Interview Preparation

### Study Plan (8-12 weeks)

**Weeks 1-2: Foundations**
- Arrays and Strings
- Linked Lists
- Stacks and Queues
- Basic time/space complexity

**Weeks 3-4: Trees and Graphs**
- Binary Trees (traversal, construction)
- Binary Search Trees
- Graph traversal (DFS, BFS)
- Basic graph algorithms

**Weeks 5-6: Advanced Data Structures**
- Heaps and Priority Queues
- Hash Tables
- Tries
- Advanced tree structures

**Weeks 7-8: Algorithms**
- Sorting and Searching
- Dynamic Programming
- Greedy Algorithms
- Backtracking

**Weeks 9-10: Advanced Topics**
- Advanced DP patterns
- Graph algorithms (shortest path, MST)
- String algorithms
- Mathematical algorithms

**Weeks 11-12: Mock Interviews**
- Practice with peers or platforms
- Review common patterns
- Optimize frequently asked questions

### Essential Problem Patterns

#### 1. Two Pointers
```cpp path=null start=null
// Classic problems:
// - Two Sum (sorted array)
// - 3Sum
// - Container with most water
// - Valid palindrome
// - Remove duplicates from sorted array

// Template:
void twoPointers(vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    
    while (left < right) {
        // Process current pair
        if (condition_met) {
            // Process result
            left++;
            right--;
        } else if (need_larger_sum) {
            left++;
        } else {
            right--;
        }
    }
}
```

#### 2. Sliding Window
```cpp path=null start=null
// Classic problems:
// - Longest substring without repeating characters
// - Minimum window substring
// - Maximum sum subarray of size k
// - Longest subarray with sum <= k

// Template for fixed size window:
int slidingWindowFixed(vector<int>& arr, int k) {
    int windowSum = 0, maxSum = 0;
    
    // Initialize window
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }
    maxSum = windowSum;
    
    // Slide window
    for (int i = k; i < arr.size(); i++) {
        windowSum += arr[i] - arr[i - k];
        maxSum = max(maxSum, windowSum);
    }
    
    return maxSum;
}

// Template for variable size window:
int slidingWindowVariable(vector<int>& arr, int target) {
    int left = 0, result = 0;
    int currentSum = 0;
    
    for (int right = 0; right < arr.size(); right++) {
        currentSum += arr[right];
        
        while (currentSum > target) {
            currentSum -= arr[left];
            left++;
        }
        
        result = max(result, right - left + 1);
    }
    
    return result;
}
```

#### 3. Fast and Slow Pointers
```cpp path=null start=null
// Classic problems:
// - Linked list cycle detection
// - Finding middle of linked list
// - Palindrome linked list
// - Happy number

// Template:
bool hasCycle(ListNode* head) {
    if (!head || !head->next) return false;
    
    ListNode* slow = head;
    ListNode* fast = head;
    
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        
        if (slow == fast) {
            return true;
        }
    }
    
    return false;
}
```

#### 4. Merge Intervals
```cpp path=null start=null
// Classic problems:
// - Merge overlapping intervals
// - Insert interval
// - Meeting rooms
// - Non-overlapping intervals

vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {
    if (intervals.empty()) return {};
    
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> merged;
    
    for (auto& interval : intervals) {
        if (merged.empty() || merged.back()[1] < interval[0]) {
            merged.push_back(interval);
        } else {
            merged.back()[1] = max(merged.back()[1], interval[1]);
        }
    }
    
    return merged;
}
```

#### 5. Tree Traversal Patterns
```cpp path=null start=null
// DFS Template:
void dfs(TreeNode* node) {
    if (!node) return;
    
    // Process current node (preorder)
    dfs(node->left);
    // Process current node (inorder)
    dfs(node->right);
    // Process current node (postorder)
}

// BFS Template:
vector<vector<int>> levelOrder(TreeNode* root) {
    if (!root) return {};
    
    vector<vector<int>> result;
    queue<TreeNode*> q;
    q.push(root);
    
    while (!q.empty()) {
        int levelSize = q.size();
        vector<int> level;
        
        for (int i = 0; i < levelSize; i++) {
            TreeNode* node = q.front();
            q.pop();
            
            level.push_back(node->val);
            
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        
        result.push_back(level);
    }
    
    return result;
}
```

## During the Interview

### Step-by-Step Problem Solving

#### 1. Understand the Problem (5 minutes)
- Read the problem statement carefully
- Ask clarifying questions:
  - Input constraints (size, range, data types)
  - Expected output format
  - Edge cases (empty input, single element, duplicates)
  - Time/space complexity expectations

#### 2. Plan Your Approach (5-10 minutes)
- Start with brute force solution
- Identify optimizations
- Choose appropriate data structures
- Estimate time and space complexity
- Walk through example with your approach

#### 3. Code the Solution (15-20 minutes)
- Write clean, readable code
- Use meaningful variable names
- Add comments for complex logic
- Handle edge cases
- Test with examples as you go

#### 4. Test and Debug (5 minutes)
- Trace through your code with examples
- Check edge cases
- Look for off-by-one errors
- Verify time/space complexity

### Communication Tips

**Do:**
- Think out loud
- Explain your reasoning
- Ask questions when unsure
- Admit when you don't know something
- Show enthusiasm and curiosity

**Don't:**
- Stay silent for long periods
- Jump into coding immediately
- Get stuck on perfect variable names
- Panic if you make mistakes
- Give up if you can't find optimal solution

### Code Quality Guidelines

```cpp path=null start=null
// Good practices:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numToIndex;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            if (numToIndex.find(complement) != numToIndex.end()) {
                return {numToIndex[complement], i};
            }
            
            numToIndex[nums[i]] = i;
        }
        
        return {};  // Should not reach here given problem constraints
    }
};

// Key elements:
// 1. Clear class structure
// 2. Meaningful variable names (complement, numToIndex)
// 3. Proper error handling
// 4. Clean formatting and indentation
// 5. Comments where necessary
```

## Company-Specific Patterns

### FAANG Companies

**Google**
- Emphasis on algorithms and mathematical problem-solving
- Tree and graph problems
- Dynamic programming
- System design for senior roles

**Facebook (Meta)**
- Behavioral questions important
- Focus on scalability
- Graph algorithms
- String manipulation

**Amazon**
- Leadership principles integration
- Focus on practical solutions
- Tree traversals
- Sorting and searching

**Apple**
- Clean, efficient code
- Object-oriented design
- Low-level optimizations
- Memory management

**Netflix**
- Scalability focus
- Data structures for large datasets
- Streaming algorithms
- Distributed systems concepts

### Top Interview Questions by Company

#### Google
1. Two Sum
2. Valid Parentheses
3. Merge Two Sorted Lists
4. Maximum Depth of Binary Tree
5. Best Time to Buy and Sell Stock
6. Longest Substring Without Repeating Characters
7. 3Sum
8. Container With Most Water
9. Letter Combinations of Phone Number
10. Word Search

#### Facebook
1. Valid Parentheses
2. Merge Intervals
3. Add Binary
4. Binary Tree Paths
5. Move Zeroes
6. Expression Add Operators
7. Remove Invalid Parentheses
8. Subarray Sum Equals K
9. Accounts Merge
10. Binary Tree Vertical Order Traversal

#### Amazon
1. Two Sum
2. Add Two Numbers
3. Longest Substring Without Repeating Characters
4. Best Time to Buy and Sell Stock
5. Valid Parentheses
6. Merge Two Sorted Lists
7. Amazon Fresh Promotion
8. Critical Connections
9. Number of Islands
10. LRU Cache

## Advanced Interview Topics

### System Design Concepts
```cpp path=null start=null
// For senior positions, understand:
// 1. Scalability patterns
// 2. Caching strategies
// 3. Database sharding
// 4. Load balancing
// 5. Microservices architecture

// Example: Design a URL shortener
class URLShortener {
private:
    unordered_map<string, string> urlToShort;
    unordered_map<string, string> shortToUrl;
    string baseUrl = "http://tinyurl.com/";
    
public:
    string encode(string longUrl) {
        if (urlToShort.find(longUrl) != urlToShort.end()) {
            return urlToShort[longUrl];
        }
        
        string shortCode = generateShortCode();
        string shortUrl = baseUrl + shortCode;
        
        urlToShort[longUrl] = shortUrl;
        shortToUrl[shortUrl] = longUrl;
        
        return shortUrl;
    }
    
    string decode(string shortUrl) {
        return shortToUrl[shortUrl];
    }
    
private:
    string generateShortCode() {
        // Implementation for generating unique short codes
        return "abc123";  // Simplified
    }
};
```

### Behavioral Questions

**Common Questions:**
1. Tell me about a challenging project you worked on
2. Describe a time you had to work with a difficult team member
3. How do you handle disagreements in technical decisions?
4. Tell me about a time you failed and what you learned
5. Why do you want to work at our company?

**STAR Method:**
- **Situation**: Set the context
- **Task**: Describe what needed to be done
- **Action**: Explain what you did
- **Result**: Share the outcome and learnings

## Final Preparation Tips

### Week Before Interview
- Review your resume and be ready to discuss any project
- Practice explaining complex technical concepts simply
- Prepare questions to ask the interviewer
- Research the company and role thoroughly
- Get plenty of sleep and exercise

### Day of Interview
- Arrive early or test video call setup
- Bring notebook and pen (for phone/video interviews)
- Have questions prepared
- Stay calm and confident
- Remember: they want you to succeed

### Post-Interview
- Send thank you email within 24 hours
- Reflect on areas for improvement
- Follow up appropriately
- Continue practicing regardless of outcome

## Resources for Continued Learning

### Books
- "Cracking the Coding Interview" by Gayle McDowell
- "Elements of Programming Interviews" by Aziz, Lee, Prakash
- "Introduction to Algorithms" by CLRS
- "Algorithm Design Manual" by Steven Skiena

### Online Platforms
- LeetCode (most comprehensive)
- HackerRank (good for contests)
- CodeSignal (interview simulation)
- Pramp (peer mock interviews)
- InterviewBit (structured learning)

### YouTube Channels
- Back to Back SWE
- Tech Dummies
- Tushar Roy
- Abdul Bari

### Practice Schedule
- **Daily**: 1-2 problems (30-60 minutes)
- **Weekly**: 1 mock interview
- **Monthly**: Review and identify weak areas
- **Before interview**: Focus on company-specific patterns

---

# Conclusion

This comprehensive Data Structures and Algorithms tutorial in C++ covers everything you need to excel in technical interviews and competitive programming. From basic concepts to advanced algorithms, each section provides detailed explanations, complete implementations, and practical examples.

Remember that mastering DSA is a journey that requires consistent practice and patience. Focus on understanding concepts deeply rather than memorizing solutions. With dedication and the right approach, you'll be well-prepared for any technical challenge.

**Keep practicing, stay curious, and good luck with your interviews!**

---

*This tutorial is designed to be your comprehensive guide to Data Structures and Algorithms in C++. Continue to update your knowledge as you encounter new problems and patterns in your journey.*
