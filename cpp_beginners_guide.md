# C++ Beginner's Guide for Contest Programming

*A comprehensive reference guide for competitive programming beginners*

**Author: Md Shefat Al Mahmud (GitHub:**[C++ Beginner's Guide](https://github.com/shefat2002/Code/blob/main/cpp_beginners_guide.md)**)**

**Version:** 1.1

---

## Table of Contents

1. [Introduction](#introduction)

1. [Data Types and Variables](#data-types-and-variables)

1. [Operators](#operators)

1. [Conditional Statements](#conditional-statements)

1. [Loops](#loops)

1. [Arrays](#arrays)

1. [Strings](#strings)

1. [Functions](#functions)

1. [Basic Recursion](#basic-recursion)

1. [STL Containers](#stl-containers)

1. [STL Utility Functions](#stl-utility-functions)

1. [Contest Programming Tips](#contest-programming-tips)

1. [Quick Reference](#quick-reference)

---

## Introduction

Welcome to the comprehensive C++ beginner's guide designed specifically for competitive programming! This documentation serves as your trusted companion during contests, providing quick references, practical examples, and essential concepts you need to solve problems efficiently.

C++ is the most popular language in competitive programming due to its speed, extensive Standard Template Library (STL), and powerful features. This guide covers everything from basic syntax to advanced STL containers, ensuring you have all the tools necessary to tackle programming challenges.

### Why C++ for Competitive Programming?

C++ offers several advantages that make it ideal for competitive programming:

**Speed and Performance:** C++ is a compiled language that produces highly optimized machine code, making it significantly faster than interpreted languages like Python. In competitive programming where time limits are strict, this speed advantage can be crucial.

**Rich Standard Template Library (STL):** The STL provides pre-implemented data structures and algorithms that would otherwise require hundreds of lines of code to implement from scratch. Containers like vectors, maps, and sets, along with algorithms like sort and binary search, are readily available.

**Memory Control:** C++ allows fine-grained control over memory allocation and deallocation, which can be important for problems with tight memory constraints.

**Wide Acceptance:** Most competitive programming platforms support C++ with generous time limits, and many online judges are optimized for C++ submissions.

### How to Use This Guide

This guide is structured to build your knowledge progressively, starting with fundamental concepts and advancing to more complex topics. Each section includes:

- **Concept explanations** with clear, beginner-friendly language

- **Syntax examples** showing proper usage

- **Sample problems** with input and output

- **Common pitfalls** to avoid during contests

- **Time complexity notes** where relevant

Keep this guide handy during contests for quick reference. The examples are designed to be copy-paste ready, saving you valuable time during competitions.

---

## Data Types and Variables

Understanding data types is fundamental to C++ programming. Data types define what kind of data a variable can store and how much memory it occupies. Choosing the right data type is crucial in competitive programming for both correctness and efficiency.

### Basic Data Types

C++ provides several built-in data types, each designed for specific purposes:

#### Integer Types

**int (Integer):**
The most commonly used integer type, typically 32 bits (4 bytes) on most systems.

- Range: -2,147,483,648 to 2,147,483,647 (approximately -2×10⁹ to 2×10⁹)

- Use when: Working with whole numbers within the standard range

```
#include <iostream>
using namespace std;

int main() {
    int age = 25;
    int score = -150;
    int population = 1000000;
    
    cout << "Age: " << age << endl;
    cout << "Score: " << score << endl;
    cout << "Population: " << population << endl;
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
Age: 25
Score: -150
Population: 1000000
```

**long long (Long Long Integer):**
A 64-bit integer type, essential for competitive programming when dealing with large numbers.

- Range: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 (approximately -9×10¹⁸ to 9×10¹⁸)

- Use when: Working with very large numbers, factorials, or when int might overflow

```
#include <iostream>
using namespace std;

int main() {
    long long bigNumber = 1000000000000LL;  // Note the LL suffix
    long long factorial = 1;
    
    // Calculate 20! (factorial of 20)
    for(int i = 1; i <= 20; i++) {
        factorial *= i;
    }
    
    cout << "Big number: " << bigNumber << endl;
    cout << "20! = " << factorial << endl;
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
Big number: 1000000000000
20! = 2432902008176640000
```

**short (Short Integer):**
A smaller integer type, typically 16 bits (2 bytes).

- Range: -32,768 to 32,767

- Use when: Memory is extremely limited (rare in competitive programming)

**unsigned int, unsigned long long:**
Unsigned versions that can only store positive numbers but have twice the positive range.

```
#include <iostream>
using namespace std;

int main() {
    unsigned int positiveOnly = 4000000000U;  // Note the U suffix
    unsigned long long veryBig = 18000000000000000000ULL;  // Note the ULL suffix
    
    cout << "Positive only: " << positiveOnly << endl;
    cout << "Very big: " << veryBig << endl;
    
    return 0;
}
```

#### Floating-Point Types

**double (Double Precision Floating Point):**
The standard choice for decimal numbers in competitive programming.

- Precision: ~15-17 decimal digits

- Range: approximately ±1.7×10³⁰⁸

- Use when: Working with decimal numbers, geometric problems, or mathematical calculations

```
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.14159265359;
    double result = pi * 2.5;
    double scientific = 1.23e-4;  // Scientific notation: 0.000123
    
    cout << fixed << setprecision(6);  // Set precision for output
    cout << "Pi: " << pi << endl;
    cout << "Result: " << result << endl;
    cout << "Scientific: " << scientific << endl;
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
Pi: 3.141593
Result: 7.853982
Scientific: 0.000123
```

**float (Single Precision Floating Point):**
Less precise than double, rarely used in competitive programming.

- Precision: ~6-7 decimal digits

- Use when: Memory is extremely limited (very rare)

#### Character Type

**char (Character):**
Stores a single character or small integer.

- Size: 1 byte

- Range: -128 to 127 (or 0 to 255 if unsigned)

- Use when: Working with individual characters or small integers

```
#include <iostream>
using namespace std;

int main() {
    char letter = 'A';
    char digit = '5';
    char symbol = '@';
    
    // Characters can be treated as integers
    cout << "Letter: " << letter << " (ASCII: " << (int)letter << ")" << endl;
    cout << "Digit: " << digit << " (ASCII: " << (int)digit << ")" << endl;
    cout << "Symbol: " << symbol << " (ASCII: " << (int)symbol << ")" << endl;
    
    // Character arithmetic
    char nextLetter = letter + 1;
    cout << "Next letter: " << nextLetter << endl;
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
Letter: A (ASCII: 65)
Digit: 5 (ASCII: 53)
Symbol: @ (ASCII: 64)
Next letter: B
```

#### Boolean Type

**bool (Boolean):**
Stores true or false values.

- Size: typically 1 byte

- Values: true (1) or false (0)

- Use when: Working with logical conditions, flags, or binary states

```
#include <iostream>
using namespace std;

int main() {
    bool isValid = true;
    bool isComplete = false;
    bool result = (5 > 3);  // Expression result
    
    cout << "Is valid: " << isValid << endl;
    cout << "Is complete: " << isComplete << endl;
    cout << "5 > 3: " << result << endl;
    
    // Using boolalpha to print true/false instead of 1/0
    cout << boolalpha;
    cout << "Is valid (text): " << isValid << endl;
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
Is valid: 1
Is complete: 0
5 > 3: 1
Is valid (text): true
```

### Variable Declaration and Initialization

Variables in C++ must be declared before use. There are several ways to declare and initialize variables:

#### Declaration Syntax

```
#include <iostream>
using namespace std;

int main() {
    // Basic declaration
    int number;
    
    // Declaration with initialization
    int count = 10;
    
    // Multiple declarations
    int a, b, c;
    
    // Multiple declarations with initialization
    int x = 1, y = 2, z = 3;
    
    // Auto keyword (C++11 and later)
    auto value = 42;        // Compiler deduces int
    auto price = 19.99;     // Compiler deduces double
    auto grade = 'A';       // Compiler deduces char
    
    cout << "Count: " << count << endl;
    cout << "X, Y, Z: " << x << ", " << y << ", " << z << endl;
    cout << "Auto value: " << value << endl;
    cout << "Auto price: " << price << endl;
    cout << "Auto grade: " << grade << endl;
    
    return 0;
}
```

#### Variable Naming Rules

Understanding proper variable naming is crucial for writing clean, readable code:

**Rules (must follow):**

- Names can contain letters (a-z, A-Z), digits (0-9), and underscores (_)

- Names must start with a letter or underscore (not a digit)

- Names are case-sensitive (myVar and myvar are different)

- Cannot use C++ keywords (int, for, while, etc.)

**Best Practices (should follow):**

- Use descriptive names: `studentCount` instead of `sc`

- Use camelCase for variables: `firstName`, `totalScore`

- Use UPPER_CASE for constants: `MAX_SIZE`, `PI_VALUE`

- Avoid single-letter names except for loop counters (i, j, k)

```
#include <iostream>
using namespace std;

int main() {
    // Good variable names
    int studentCount = 25;
    double averageScore = 87.5;
    char firstInitial = 'J';
    bool isGameOver = false;
    
    // Constants
    const int MAX_STUDENTS = 100;
    const double PI = 3.14159;
    
    // Loop counters (acceptable single letters)
    for(int i = 0; i < 5; i++) {
        cout << "Iteration: " << i << endl;
    }
    
    cout << "Student count: " << studentCount << endl;
    cout << "Average score: " << averageScore << endl;
    cout << "Max students: " << MAX_STUDENTS << endl;
    
    return 0;
}
```

### Constants

Constants are values that cannot be changed during program execution. They're essential for making code more readable and maintainable.

#### Using const Keyword

```
#include <iostream>
using namespace std;

int main() {
    const int DAYS_IN_WEEK = 7;
    const double GRAVITY = 9.81;
    const char GRADE_A = 'A';
    
    // const variables must be initialized
    // const int invalid;  // Error: uninitialized const
    
    cout << "Days in week: " << DAYS_IN_WEEK << endl;
    cout << "Gravity: " << GRAVITY << " m/s²" << endl;
    cout << "Grade A: " << GRADE_A << endl;
    
    // DAYS_IN_WEEK = 8;  // Error: cannot modify const variable
    
    return 0;
}
```

#### Using #define Preprocessor

```
#include <iostream>
using namespace std;

#define MAX_SIZE 1000
#define PI 3.14159
#define NEWLINE '\n'

int main() {
    int array[MAX_SIZE];  // Creates array of 1000 elements
    double circumference = 2 * PI * 5.0;
    
    cout << "Max size: " << MAX_SIZE << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Using newline" << NEWLINE;
    
    return 0;
}
```

### Scope and Lifetime

Understanding variable scope is crucial for writing correct programs and avoiding common errors.

#### Local Scope

Variables declared inside a function or block have local scope:

```
#include <iostream>
using namespace std;

int main() {
    int globalVar = 100;  // Function scope
    
    {
        int blockVar = 200;  // Block scope
        cout << "Inside block - Global: " << globalVar << endl;
        cout << "Inside block - Block: " << blockVar << endl;
    }
    
    cout << "Outside block - Global: " << globalVar << endl;
    // cout << blockVar;  // Error: blockVar not accessible here
    
    for(int i = 0; i < 3; i++) {  // i has loop scope
        int loopVar = i * 10;      // loopVar has loop scope
        cout << "Loop " << i << ": " << loopVar << endl;
    }
    
    // cout << i;        // Error: i not accessible here
    // cout << loopVar;  // Error: loopVar not accessible here
    
    return 0;
}
```

#### Global Scope

Variables declared outside all functions have global scope:

```
#include <iostream>
using namespace std;

// Global variables
int globalCounter = 0;
const double PI = 3.14159;

void incrementCounter() {
    globalCounter++;  // Can access global variable
    cout << "Counter incremented to: " << globalCounter << endl;
}

int main() {
    cout << "Initial counter: " << globalCounter << endl;
    
    incrementCounter();
    incrementCounter();
    
    cout << "Final counter: " << globalCounter << endl;
    cout << "PI value: " << PI << endl;
    
    return 0;
}
```

### Type Conversion

Type conversion allows you to convert values from one data type to another. Understanding this is crucial for avoiding errors and ensuring correct calculations.

#### Implicit Conversion (Automatic)

C++ automatically converts between compatible types:

```
#include <iostream>
using namespace std;

int main() {
    int intValue = 42;
    double doubleValue = 3.14;
    char charValue = 'A';
    
    // Implicit conversions
    double result1 = intValue;        // int to double
    int result2 = doubleValue;        // double to int (truncates)
    int result3 = charValue;          // char to int (ASCII value)
    
    cout << "Int to double: " << result1 << endl;
    cout << "Double to int: " << result2 << endl;
    cout << "Char to int: " << result3 << endl;
    
    // Mixed arithmetic
    double mixedResult = intValue + doubleValue;
    cout << "Mixed arithmetic: " << mixedResult << endl;
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
Int to double: 42
Double to int: 3
Char to int: 65
Mixed arithmetic: 45.14
```

#### Explicit Conversion (Casting)

When you need precise control over type conversion:

```
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.14159;
    int number = 65;
    
    // C-style casting
    int truncatedPi = (int)pi;
    char letter = (char)number;
    
    // C++ style casting (preferred)
    int truncatedPi2 = static_cast<int>(pi);
    char letter2 = static_cast<char>(number);
    
    cout << "Original pi: " << pi << endl;
    cout << "Truncated pi: " << truncatedPi << endl;
    cout << "Number as char: " << letter << endl;
    cout << "Static cast pi: " << truncatedPi2 << endl;
    cout << "Static cast char: " << letter2 << endl;
    
    // Precision in division
    int a = 7, b = 3;
    double result1 = a / b;                    // Integer division
    double result2 = (double)a / b;            // Explicit casting
    double result3 = static_cast<double>(a) / b;  // C++ style
    
    cout << fixed << setprecision(3);
    cout << "Integer division: " << result1 << endl;
    cout << "With casting: " << result2 << endl;
    cout << "Static cast: " << result3 << endl;
    
    return 0;
}
```

### Common Pitfalls and Best Practices

Understanding common mistakes helps you write more reliable code:

#### Integer Overflow

```
#include <iostream>
using namespace std;

int main() {
    int maxInt = 2147483647;  // Maximum int value
    cout << "Max int: " << maxInt << endl;
    cout << "Max int + 1: " << maxInt + 1 << endl;  // Overflow!
    
    // Solution: Use long long for large numbers
    long long safeLarge = 2147483647LL;
    cout << "Safe large + 1: " << safeLarge + 1 << endl;
    
    return 0;
}
```

#### Uninitialized Variables

```
#include <iostream>
using namespace std;

int main() {
    int uninitialized;  // Contains garbage value
    int initialized = 0;  // Safe
    
    // cout << uninitialized;  // Dangerous! Unpredictable output
    cout << "Initialized: " << initialized << endl;
    
    // Always initialize variables
    int count = 0;
    double sum = 0.0;
    bool flag = false;
    char initial = '\0';
    
    return 0;
}
```

#### Floating-Point Precision

```
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a = 0.1;
    double b = 0.2;
    double sum = a + b;
    
    cout << fixed << setprecision(17);
    cout << "0.1 + 0.2 = " << sum << endl;
    
    // Comparison with tolerance
    double expected = 0.3;
    double tolerance = 1e-9;
    
    if(abs(sum - expected) < tolerance) {
        cout << "Values are approximately equal" << endl;
    } else {
        cout << "Values are different" << endl;
    }
    
    return 0;
}
```

**Contest Programming Tips for Data Types:**

1. **Use long long by default** for integer problems to avoid overflow

1. **Initialize all variables** to prevent undefined behavior

1. **Use const for values that don't change** to prevent accidental modification

1. **Be careful with floating-point comparisons** - use tolerance-based comparison

1. **Choose appropriate data types** based on the problem constraints

1. **Use auto for complex type names** to reduce typing errors

This comprehensive understanding of data types and variables forms the foundation for all C++ programming. Master these concepts, and you'll be well-prepared to tackle more advanced topics and solve competitive programming problems efficiently.

---

## Operators

Operators are symbols that perform operations on variables and values. Understanding operators is essential for competitive programming as they form the building blocks of all calculations and logical operations.

### Arithmetic Operators

Arithmetic operators perform mathematical calculations on numeric values.

#### Basic Arithmetic Operators

```
#include <iostream>
using namespace std;

int main() {
    int a = 15, b = 4;
    
    cout << "a = " << a << ", b = " << b << endl;
    cout << "Addition (a + b): " << a + b << endl;        // 19
    cout << "Subtraction (a - b): " << a - b << endl;     // 11
    cout << "Multiplication (a * b): " << a * b << endl;  // 60
    cout << "Division (a / b): " << a / b << endl;        // 3 (integer division)
    cout << "Modulus (a % b): " << a % b << endl;         // 3 (remainder)
    
    // Floating-point division
    double x = 15.0, y = 4.0;
    cout << "Float division (x / y): " << x / y << endl;  // 3.75
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
a = 15, b = 4
Addition (a + b): 19
Subtraction (a - b): 11
Multiplication (a * b): 60
Division (a / b): 3
Modulus (a % b): 3
Float division (x / y): 3.75
```

#### Important Notes on Division and Modulus

**Integer Division:** When both operands are integers, division truncates the decimal part.

```
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Integer division examples
    cout << "7 / 3 = " << 7 / 3 << endl;      // 2, not 2.33
    cout << "10 / 4 = " << 10 / 4 << endl;    // 2, not 2.5
    cout << "-7 / 3 = " << -7 / 3 << endl;    // -2
    
    // To get floating-point result
    cout << fixed << setprecision(2);
    cout << "7.0 / 3 = " << 7.0 / 3 << endl;           // 2.33
    cout << "(double)7 / 3 = " << (double)7 / 3 << endl; // 2.33
    
    // Modulus examples
    cout << "7 % 3 = " << 7 % 3 << endl;      // 1
    cout << "10 % 4 = " << 10 % 4 << endl;    // 2
    cout << "15 % 5 = " << 15 % 5 << endl;    // 0
    
    // Modulus with negative numbers
    cout << "-7 % 3 = " << -7 % 3 << endl;    // -1
    cout << "7 % -3 = " << 7 % -3 << endl;    // 1
    
    return 0;
}
```

**Practical Applications:**

```
#include <iostream>
using namespace std;

int main() {
    int number = 1234;
    
    // Extract digits using modulus and division
    cout << "Number: " << number << endl;
    cout << "Last digit: " << number % 10 << endl;           // 4
    cout << "Second last digit: " << (number / 10) % 10 << endl; // 3
    
    // Check if number is even or odd
    int n = 17;
    if(n % 2 == 0) {
        cout << n << " is even" << endl;
    } else {
        cout << n << " is odd" << endl;
    }
    
    // Check if number is divisible by another
    int dividend = 24, divisor = 6;
    if(dividend % divisor == 0) {
        cout << dividend << " is divisible by " << divisor << endl;
    }
    
    return 0;
}
```

### Assignment Operators

Assignment operators are used to assign values to variables and can be combined with arithmetic operations for efficiency.

#### Basic Assignment

```
#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    
    // Basic assignment
    x = 10;
    y = x;      // y gets the value of x
    z = x + y;  // z gets the sum of x and y
    
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    
    // Multiple assignment
    int a, b, c;
    a = b = c = 5;  // All get value 5
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    
    return 0;
}
```

#### Compound Assignment Operators

These operators combine arithmetic operations with assignment, making code more concise:

```
#include <iostream>
using namespace std;

int main() {
    int num = 10;
    
    cout << "Initial value: " << num << endl;
    
    num += 5;   // Equivalent to: num = num + 5
    cout << "After += 5: " << num << endl;      // 15
    
    num -= 3;   // Equivalent to: num = num - 3
    cout << "After -= 3: " << num << endl;      // 12
    
    num *= 2;   // Equivalent to: num = num * 2
    cout << "After *= 2: " << num << endl;      // 24
    
    num /= 4;   // Equivalent to: num = num / 4
    cout << "After /= 4: " << num << endl;      // 6
    
    num %= 4;   // Equivalent to: num = num % 4
    cout << "After %= 4: " << num << endl;      // 2
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
Initial value: 10
After += 5: 15
After -= 3: 12
After *= 2: 24
After /= 4: 6
After %= 4: 2
```

### Increment and Decrement Operators

These operators increase or decrease a variable's value by 1. Understanding the difference between prefix and postfix is crucial.

#### Prefix vs Postfix

```
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 5;
    
    // Prefix increment: increment first, then use value
    cout << "a before prefix++: " << a << endl;     // 5
    cout << "++a returns: " << ++a << endl;         // 6
    cout << "a after prefix++: " << a << endl;      // 6
    
    cout << endl;
    
    // Postfix increment: use value first, then increment
    cout << "b before postfix++: " << b << endl;    // 5
    cout << "b++ returns: " << b++ << endl;         // 5
    cout << "b after postfix++: " << b << endl;     // 6
    
    // Practical example
    int count = 0;
    int array[5] = {10, 20, 30, 40, 50};
    
    cout << "Using postfix in array access:" << endl;
    cout << "array[count++] = " << array[count++] << ", count = " << count << endl;
    cout << "array[count++] = " << array[count++] << ", count = " << count << endl;
    
    return 0;
}
```

#### Decrement Operators

```
#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 10;
    
    // Prefix decrement
    cout << "--x = " << --x << endl;    // 9
    cout << "x = " << x << endl;        // 9
    
    // Postfix decrement
    cout << "y-- = " << y-- << endl;    // 10
    cout << "y = " << y << endl;        // 9
    
    // Common use in loops
    for(int i = 5; i > 0; i--) {
        cout << "Countdown: " << i << endl;
    }
    
    return 0;
}
```

### Comparison Operators

Comparison operators compare two values and return a boolean result (true or false). They're essential for conditional statements and loops.

```
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 10;
    
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    
    // Equal to
    cout << "a == b: " << (a == b) << endl;    // false (0)
    cout << "a == c: " << (a == c) << endl;    // true (1)
    
    // Not equal to
    cout << "a != b: " << (a != b) << endl;    // true (1)
    cout << "a != c: " << (a != c) << endl;    // false (0)
    
    // Greater than
    cout << "a > b: " << (a > b) << endl;      // false (0)
    cout << "b > a: " << (b > a) << endl;      // true (1)
    
    // Less than
    cout << "a < b: " << (a < b) << endl;      // true (1)
    cout << "b < a: " << (b < a) << endl;      // false (0)
    
    // Greater than or equal to
    cout << "a >= c: " << (a >= c) << endl;    // true (1)
    cout << "a >= b: " << (a >= b) << endl;    // false (0)
    
    // Less than or equal to
    cout << "a <= c: " << (a <= c) << endl;    // true (1)
    cout << "b <= a: " << (b <= a) << endl;    // false (0)
    
    return 0;
}
```

#### Comparing Different Data Types

```
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Comparing characters (ASCII values)
    char ch1 = 'A', ch2 = 'B';
    cout << "'" << ch1 << "' < '" << ch2 << "': " << (ch1 < ch2) << endl; // true
    
    // Comparing floating-point numbers (be careful with precision)
    double d1 = 3.14, d2 = 3.14;
    cout << "3.14 == 3.14: " << (d1 == d2) << endl; // true
    
    // Dangerous floating-point comparison
    double result = 0.1 + 0.2;
    cout << "0.1 + 0.2 == 0.3: " << (result == 0.3) << endl; // might be false!
    
    // Safe floating-point comparison
    double tolerance = 1e-9;
    cout << "Safe comparison: " << (abs(result - 0.3) < tolerance) << endl;
    
    // String comparison (lexicographical)
    string str1 = "apple", str2 = "banana";
    cout << "\"apple\" < \"banana\": " << (str1 < str2) << endl; // true
    
    return 0;
}
```

### Logical Operators

Logical operators are used to combine or modify boolean expressions. They're crucial for complex conditional statements.

#### Basic Logical Operators

```
#include <iostream>
using namespace std;

int main() {
    bool a = true, b = false;
    
    cout << "a = " << a << ", b = " << b << endl;
    
    // Logical AND (&&)
    cout << "a && b: " << (a && b) << endl;    // false
    cout << "a && a: " << (a && a) << endl;    // true
    
    // Logical OR (||)
    cout << "a || b: " << (a || b) << endl;    // true
    cout << "b || b: " << (b || b) << endl;    // false
    
    // Logical NOT (!)
    cout << "!a: " << (!a) << endl;            // false
    cout << "!b: " << (!b) << endl;            // true
    
    return 0;
}
```

#### Short-Circuit Evaluation

Understanding short-circuit evaluation is important for both performance and avoiding errors:

```
#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 0;
    
    // Short-circuit AND: if first condition is false, second is not evaluated
    if(y != 0 && x / y > 2) {  // Safe: division by zero avoided
        cout << "This won't execute" << endl;
    } else {
        cout << "Safe from division by zero" << endl;
    }
    
    // Short-circuit OR: if first condition is true, second is not evaluated
    if(x > 0 || x / y > 2) {  // Safe: second condition not evaluated
        cout << "x is positive" << endl;
    }
    
    // Complex logical expressions
    int age = 25;
    bool hasLicense = true;
    bool hasInsurance = false;
    
    if(age >= 18 && hasLicense && hasInsurance) {
        cout << "Can drive legally" << endl;
    } else if(age >= 18 && hasLicense) {
        cout << "Can drive but needs insurance" << endl;
    } else {
        cout << "Cannot drive" << endl;
    }
    
    return 0;
}
```

#### Truth Tables for Reference

```
#include <iostream>
using namespace std;

int main() {
    cout << "AND Truth Table:" << endl;
    cout << "true && true = " << (true && true) << endl;     // 1
    cout << "true && false = " << (true && false) << endl;   // 0
    cout << "false && true = " << (false && true) << endl;   // 0
    cout << "false && false = " << (false && false) << endl; // 0
    
    cout << "\nOR Truth Table:" << endl;
    cout << "true || true = " << (true || true) << endl;     // 1
    cout << "true || false = " << (true || false) << endl;   // 1
    cout << "false || true = " << (false || true) << endl;   // 1
    cout << "false || false = " << (false || false) << endl; // 0
    
    cout << "\nNOT Truth Table:" << endl;
    cout << "!true = " << (!true) << endl;                   // 0
    cout << "!false = " << (!false) << endl;                 // 1
    
    return 0;
}
```

### Bitwise Operators

Bitwise operators work on individual bits of integer values. They're extremely useful in competitive programming for optimization and solving specific types of problems.

#### Basic Bitwise Operations

```
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int a = 12;  // Binary: 1100
    int b = 10;  // Binary: 1010
    
    cout << "a = " << a << " (binary: " << bitset<8>(a) << ")" << endl;
    cout << "b = " << b << " (binary: " << bitset<8>(b) << ")" << endl;
    
    // Bitwise AND (&)
    int andResult = a & b;  // 1100 & 1010 = 1000 (8)
    cout << "a & b = " << andResult << " (binary: " << bitset<8>(andResult) << ")" << endl;
    
    // Bitwise OR (|)
    int orResult = a | b;   // 1100 | 1010 = 1110 (14)
    cout << "a | b = " << orResult << " (binary: " << bitset<8>(orResult) << ")" << endl;
    
    // Bitwise XOR (^)
    int xorResult = a ^ b;  // 1100 ^ 1010 = 0110 (6)
    cout << "a ^ b = " << xorResult << " (binary: " << bitset<8>(xorResult) << ")" << endl;
    
    // Bitwise NOT (~)
    int notResult = ~a;     // ~1100 = ...11110011 (depends on system)
    cout << "~a = " << notResult << " (binary: " << bitset<8>(notResult) << ")" << endl;
    
    return 0;
}
```

#### Bit Shift Operations

```
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int num = 5;  // Binary: 101
    
    cout << "Original: " << num << " (binary: " << bitset<8>(num) << ")" << endl;
    
    // Left shift (<<): multiply by 2^n
    int leftShift = num << 2;  // 101 << 2 = 10100 (20)
    cout << "num << 2 = " << leftShift << " (binary: " << bitset<8>(leftShift) << ")" << endl;
    
    // Right shift (>>): divide by 2^n
    int rightShift = num >> 1; // 101 >> 1 = 10 (2)
    cout << "num >> 1 = " << rightShift << " (binary: " << bitset<8>(rightShift) << ")" << endl;
    
    // Practical applications
    cout << "\nPractical applications:" << endl;
    cout << "Multiply by 8 (2^3): " << (num << 3) << endl;  // Fast multiplication
    cout << "Divide by 4 (2^2): " << (num >> 2) << endl;    // Fast division
    
    return 0;
}
```

#### Common Bitwise Tricks

```
#include <iostream>
using namespace std;

int main() {
    int n = 15;
    
    // Check if number is even or odd
    if(n & 1) {
        cout << n << " is odd" << endl;
    } else {
        cout << n << " is even" << endl;
    }
    
    // Check if number is power of 2
    if(n > 0 && (n & (n - 1)) == 0) {
        cout << n << " is a power of 2" << endl;
    } else {
        cout << n << " is not a power of 2" << endl;
    }
    
    // Swap two numbers without temporary variable
    int a = 10, b = 20;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After swap: a = " << a << ", b = " << b << endl;
    
    // Count number of set bits (1s) in binary representation
    int count = 0, temp = n;
    while(temp) {
        count += temp & 1;
        temp >>= 1;
    }
    cout << "Number of set bits in " << n << ": " << count << endl;
    
    return 0;
}
```

### Operator Precedence and Associativity

Understanding operator precedence prevents logical errors and ensures expressions are evaluated correctly.

#### Precedence Table (High to Low)

```
#include <iostream>
using namespace std;

int main() {
    int a = 2, b = 3, c = 4, d = 5;
    
    // Arithmetic operators precedence
    int result1 = a + b * c;        // 2 + (3 * 4) = 14, not (2 + 3) * 4 = 20
    cout << "a + b * c = " << result1 << endl;
    
    int result2 = a * b + c / d;    // (2 * 3) + (4 / 5) = 6 + 0 = 6
    cout << "a * b + c / d = " << result2 << endl;
    
    // Comparison and logical precedence
    bool result3 = a < b && c > d;  // (a < b) && (c > d) = true && false = false
    cout << "a < b && c > d = " << result3 << endl;
    
    // Using parentheses for clarity
    int result4 = (a + b) * c;      // (2 + 3) * 4 = 20
    cout << "(a + b) * c = " << result4 << endl;
    
    // Complex expression
    bool result5 = a + b > c && d % 2 == 1;  // ((a + b) > c) && ((d % 2) == 1)
    cout << "Complex expression = " << result5 << endl;
    
    return 0;
}
```

#### Associativity Examples

```
#include <iostream>
using namespace std;

int main() {
    int a = 8, b = 4, c = 2;
    
    // Left-to-right associativity for same precedence
    int result1 = a - b - c;        // (a - b) - c = (8 - 4) - 2 = 2
    cout << "a - b - c = " << result1 << endl;
    
    int result2 = a / b / c;        // (a / b) / c = (8 / 4) / 2 = 1
    cout << "a / b / c = " << result2 << endl;
    
    // Right-to-left associativity for assignment
    int x, y, z;
    x = y = z = 10;                 // z = 10, then y = z, then x = y
    cout << "x = y = z = 10: x=" << x << ", y=" << y << ", z=" << z << endl;
    
    // Mixed operators with different precedence
    int result3 = a + b * c - a / c;  // a + (b * c) - (a / c) = 8 + 8 - 4 = 12
    cout << "a + b * c - a / c = " << result3 << endl;
    
    return 0;
}
```

### Ternary Operator (Conditional Operator)

The ternary operator provides a concise way to write simple if-else statements.

#### Basic Syntax

```
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    
    // Basic ternary operator: condition ? value_if_true : value_if_false
    int max = (a > b) ? a : b;
    cout << "Maximum of " << a << " and " << b << " is: " << max << endl;
    
    int min = (a < b) ? a : b;
    cout << "Minimum of " << a << " and " << b << " is: " << min << endl;
    
    // Equivalent if-else statement
    int max2;
    if(a > b) {
        max2 = a;
    } else {
        max2 = b;
    }
    cout << "Using if-else, maximum is: " << max2 << endl;
    
    return 0;
}
```

#### Advanced Ternary Usage

```
#include <iostream>
#include <string>
using namespace std;

int main() {
    int score = 85;
    
    // Nested ternary operators
    string grade = (score >= 90) ? "A" : 
                   (score >= 80) ? "B" : 
                   (score >= 70) ? "C" : 
                   (score >= 60) ? "D" : "F";
    cout << "Score " << score << " gets grade: " << grade << endl;
    
    // Ternary with function calls
    int x = 5, y = 3;
    cout << "Absolute difference: " << ((x > y) ? (x - y) : (y - x)) << endl;
    
    // Ternary for output
    int number = 17;
    cout << number << " is " << ((number % 2 == 0) ? "even" : "odd") << endl;
    
    // Multiple conditions
    int age = 25;
    bool hasLicense = true;
    string canDrive = (age >= 18 && hasLicense) ? "Yes" : "No";
    cout << "Can drive: " << canDrive << endl;
    
    return 0;
}
```

### Practical Examples and Contest Applications

#### Problem: Find Maximum of Three Numbers

```
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    // Method 1: Using nested ternary
    int max1 = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    
    // Method 2: Using multiple comparisons
    int max2 = a;
    if(b > max2) max2 = b;
    if(c > max2) max2 = c;
    
    // Method 3: Using built-in max function (requires <algorithm>)
    // int max3 = max({a, b, c});
    
    cout << "Maximum using ternary: " << max1 << endl;
    cout << "Maximum using comparisons: " << max2 << endl;
    
    return 0;
}
```

**Sample Input/Output:**

```
Input: 15 8 23
Output:
Maximum using ternary: 23
Maximum using comparisons: 23
```

#### Problem: Check if Year is Leap Year

```
#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    
    // Leap year logic: divisible by 4, but not by 100, unless also divisible by 400
    bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    
    cout << year << " is " << (isLeap ? "a leap year" : "not a leap year") << endl;
    
    // Alternative using nested conditions
    if(year % 400 == 0) {
        cout << "Leap year (divisible by 400)" << endl;
    } else if(year % 100 == 0) {
        cout << "Not a leap year (divisible by 100 but not 400)" << endl;
    } else if(year % 4 == 0) {
        cout << "Leap year (divisible by 4)" << endl;
    } else {
        cout << "Not a leap year" << endl;
    }
    
    return 0;
}
```

### Common Mistakes and Best Practices

#### Assignment vs Comparison

```
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    
    // Common mistake: using = instead of ==
    // if(x = 10) {  // This assigns 10 to x, then checks if 10 is true (it is)
    //     cout << "This will always execute!" << endl;
    // }
    
    // Correct comparison
    if(x == 5) {
        cout << "x equals 5" << endl;
    }
    
    // Safe practice: put constant on left (won't compile if you use =)
    if(5 == x) {  // if(5 = x) would cause compiler error
        cout << "Safe comparison" << endl;
    }
    
    return 0;
}
```

#### Operator Precedence Mistakes

```
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3;
    
    // Mistake: not understanding precedence
    bool result1 = a + 1 > b * 2;  // (a + 1) > (b * 2) = 6 > 6 = false
    cout << "a + 1 > b * 2: " << result1 << endl;
    
    // Clear with parentheses
    bool result2 = (a + 1) > (b * 2);
    cout << "With parentheses: " << result2 << endl;
    
    // Another common mistake
    bool result3 = a & 1 == 0;     // a & (1 == 0) = a & false = 0
    bool result4 = (a & 1) == 0;   // (a & 1) == 0 = 1 == 0 = false
    cout << "Without parentheses: " << result3 << endl;
    cout << "With parentheses: " << result4 << endl;
    
    return 0;
}
```

**Contest Programming Tips for Operators:**

1. **Use parentheses liberally** to make expressions clear and avoid precedence errors

1. **Master bitwise operations** - they're often key to efficient solutions

1. **Understand integer division** - it truncates, which can be useful or problematic

1. **Use compound assignment operators** (+=, -=, etc.) for cleaner code

1. **Be careful with floating-point comparisons** - use tolerance-based comparison

1. **Learn common bitwise tricks** for optimization

1. **Use ternary operator for simple conditions** to make code more concise

Understanding operators thoroughly will make you more efficient in competitive programming, allowing you to write cleaner, faster code and solve problems more effectively.

---

## Conditional Statements

Conditional statements allow your program to make decisions and execute different blocks of code based on certain conditions. They are fundamental to controlling the flow of your program.

### If-Else Statement

The `if-else` statement is the most basic form of conditional control. It executes a block of code if a condition is true, and optionally another block if the condition is false.

#### Basic If Statement

```
#include <iostream>
using namespace std;

int main() {
    int num = 10;
    
    if (num > 0) {
        cout << "The number is positive." << endl;
    }
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
The number is positive.
```

#### If-Else Statement

```
#include <iostream>
using namespace std;

int main() {
    int num = -5;
    
    if (num > 0) {
        cout << "The number is positive." << endl;
    } else {
        cout << "The number is non-positive." << endl;
    }
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
The number is non-positive.
```

#### Else-If Ladder (Nested If-Else)

Used when there are multiple conditions to check sequentially.

```
#include <iostream>
using namespace std;

int main() {
    int score = 75;
    
    if (score >= 90) {
        cout << "Grade: A" << endl;
    } else if (score >= 80) {
        cout << "Grade: B" << endl;
    } else if (score >= 70) {
        cout << "Grade: C" << endl;
    } else if (score >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
Grade: C
```

#### Nested If Statements

One `if` statement inside another.

```
#include <iostream>
using namespace std;

int main() {
    int age = 20;
    bool hasLicense = true;
    
    if (age >= 18) {
        if (hasLicense) {
            cout << "You are old enough to drive and have a license." << endl;
        } else {
            cout << "You are old enough to drive, but don't have a license." << endl;
        }
    } else {
        cout << "You are not old enough to drive." << endl;
    }
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
You are old enough to drive and have a license.
```

### Switch-Case Statement

The `switch-case` statement is an alternative to a long `if-else if` ladder when you are checking a single variable against multiple constant values.

```
#include <iostream>
using namespace std;

int main() {
    char grade = 'B';
    
    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Very Good!" << endl;
            break;
        case 'C':
            cout << "Good!" << endl;
            break;
        case 'D':
            cout << "Pass!" << endl;
            break;
        case 'F':
            cout << "Fail!" << endl;
            break;
        default:
            cout << "Invalid grade." << endl;
            break;
    }
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
Very Good!
```

#### Important Notes on Switch-Case

- **`break`**** statement:** The `break` statement is crucial. Without it, execution will

fall through to the next `case` label. This is often a source of bugs.

- **`default`**** case:** The `default` case is optional and is executed if none of the `case` labels match the expression.

- **Expression type:** The expression in `switch` must evaluate to an integer type (int, char, short, long, long long, or enum).

- **Case labels:** `case` labels must be constant expressions.

#### Fall-through Example (Avoid unless intentional)

```
#include <iostream>
using namespace std;

int main() {
    int day = 3;
    
    switch (day) {
        case 1:
            cout << "Monday" << endl;
        case 2:
            cout << "Tuesday" << endl;
        case 3:
            cout << "Wednesday" << endl; // This will execute
        case 4:
            cout << "Thursday" << endl; // This will also execute due to fall-through
            break; // Stops here
        case 5:
            cout << "Friday" << endl;
            break;
        default:
            cout << "Weekend" << endl;
            break;
    }
    
    return 0;
}
```

**Sample Input/Output (for day = 3):**

```
Output:
Wednesday
Thursday
```

### Ternary Operator (Conditional Operator)

As discussed in the Operators section, the ternary operator `? :` provides a concise way to write simple `if-else` statements, especially for assigning a value based on a condition.

#### Syntax and Example

`condition ? expression_if_true : expression_if_false;`

```
#include <iostream>
#include <string>
using namespace std;

int main() {
    int num = 7;
    string result = (num % 2 == 0) ? "Even" : "Odd";
    cout << num << " is " << result << endl;
    
    int a = 10, b = 5;
    int max_val = (a > b) ? a : b;
    cout << "Maximum value is: " << max_val << endl;
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
7 is Odd
Maximum value is: 10
```

### Practical Examples and Contest Applications

#### Problem: Determine if a character is a vowel or a consonant

```
#include <iostream>
#include <cctype> // For tolower
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    
    ch = tolower(ch); // Convert to lowercase for easier comparison
    
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << ch << " is a vowel." << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is a consonant." << endl;
    } else {
        cout << ch << " is not an alphabet character." << endl;
    }
    
    return 0;
}
```

**Sample Input/Output:**

```
Input: E
Output:
e is a vowel.

Input: k
Output:
k is a consonant.

Input: 7
Output:
7 is not an alphabet character.
```

#### Problem: Check if a number is positive, negative, or zero

```
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (num > 0) {
        cout << num << " is positive." << endl;
    } else if (num < 0) {
        cout << num << " is negative." << endl;
    } else {
        cout << num << " is zero." << endl;
    }
    
    return 0;
}
```

**Sample Input/Output:**

```
Input: -10
Output:
-10 is negative.
```

### Common Pitfalls and Best Practices

#### Dangling Else Problem

When you have nested `if` statements without curly braces, an `else` statement always associates with the nearest `if`.

```
#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 20;
    
    if (x > 5)
        if (y > 15)
            cout << "Both conditions met." << endl;
    else // This else belongs to `if (y > 15)`
        cout << "x > 5 but y <= 15." << endl;
        
    // To make it clear, use curly braces:
    if (x > 5) {
        if (y > 15) {
            cout << "Both conditions met (with braces)." << endl;
        }
    } else {
        cout << "x <= 5 (with braces)." << endl;
    }
    
    return 0;
}
```

#### Forgetting Curly Braces

If an `if` or `else` block contains more than one statement, curly braces `{}` are mandatory. Forgetting them can lead to logical errors.

```
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    
    if (x > 0)
        cout << "x is positive." << endl;
        cout << "This line always executes." << endl; // Not part of the if block
        
    // Correct way:
    if (x > 0) {
        cout << "x is positive (correct)." << endl;
        cout << "This line executes only if x > 0." << endl;
    }
    
    return 0;
}
```

#### Using Assignment Instead of Comparison

This is a very common mistake. Using `=` (assignment) instead of `==` (comparison) inside an `if` condition will assign the value and then evaluate the assigned value as a boolean.

```
#include <iostream>
using namespace std;

int main() {
    int x = 0;
    
    if (x = 5) { // Assigns 5 to x, then evaluates 5 (which is true)
        cout << "This will always print, and x is now 5!" << endl;
    }
    cout << "x after assignment in if: " << x << endl;
    
    // Correct comparison
    if (x == 5) {
        cout << "x is indeed 5." << endl;
    }
    
    return 0;
}
```

**Contest Programming Tips for Conditional Statements:**

1. **Use curly braces ****`{}`**** consistently** for `if`, `else`, `else if` blocks, even for single statements, to avoid ambiguity and errors.

1. **Prefer ****`if-else if-else`**** ladder** for sequential checks of multiple conditions.

1. **Use ****`switch-case`** when checking a single variable against multiple discrete constant values. Remember `break`!

1. **Leverage the ternary operator ****`? :`** for concise conditional assignments or expressions.

1. **Be mindful of floating-point comparisons**; always use a small tolerance (`epsilon`) instead of direct `==`.

1. **Always double-check ****`==`**** vs ****`=`** in conditions.

Mastering conditional statements is crucial for implementing logic in your programs and solving problems that require different actions based on varying inputs or states.

---

## Loops

Loops are fundamental control structures that allow you to execute a block of code repeatedly. They are essential for tasks that involve iteration, such as processing lists of data, performing calculations multiple times, or generating sequences.

### For Loop

The `for` loop is typically used when you know in advance how many times you want to iterate.

#### Basic For Loop Syntax

```
#include <iostream>
using namespace std;

int main() {
    // Syntax: for (initialization; condition; update)
    for (int i = 0; i < 5; i++) {
        cout << "Iteration: " << i << endl;
    }
    
    // Counting down
    for (int i = 5; i > 0; i--) {
        cout << "Countdown: " << i << endl;
    }
    
    // Looping with step other than 1
    for (int i = 0; i <= 10; i += 2) {
        cout << "Even number: " << i << endl;
    }
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
Iteration: 0
Iteration: 1
Iteration: 2
Iteration: 3
Iteration: 4
Countdown: 5
Countdown: 4
Countdown: 3
Countdown: 2
Countdown: 1
Even number: 0
Even number: 2
Even number: 4
Even number: 6
Even number: 8
Even number: 10
```

#### Infinite Loop (Avoid)

```
// for (;;) {
//     cout << "This will print forever!" << endl;
// }
```

#### For-Each Loop (Range-based for loop - C++11 and later)

This loop simplifies iterating over elements of a range (like arrays or STL containers).

```
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};
    
    cout << "Elements in vector (by value):" << endl;
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    cout << "Elements in vector (by reference - for modification):" << endl;
    for (int& num : numbers) { // Use reference to modify elements
        num += 1;
        cout << num << " ";
    }
    cout << endl;
    
    cout << "Elements in vector (with auto):" << endl;
    for (auto num : numbers) { // auto automatically deduces type
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
Elements in vector (by value):
10 20 30 40 50 
Elements in vector (by reference - for modification):
11 21 31 41 51 
Elements in vector (with auto):
11 21 31 41 51 
```

### While Loop

The `while` loop is used when you don't know the exact number of iterations beforehand, but you want to continue looping as long as a certain condition is true.

#### Basic While Loop Syntax

```
#include <iostream>
using namespace std;

int main() {
    int count = 0;
    
    // Syntax: while (condition)
    while (count < 5) {
        cout << "Count: " << count << endl;
        count++; // Important: update loop control variable
    }
    
    // Summing digits of a number
    int number = 12345;
    int sumDigits = 0;
    while (number > 0) {
        sumDigits += number % 10; // Add last digit
        number /= 10;             // Remove last digit
    }
    cout << "Sum of digits: " << sumDigits << endl;
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
Count: 0
Count: 1
Count: 2
Count: 3
Count: 4
Sum of digits: 15
```

#### Infinite Loop (Avoid)

```
// while (true) {
//     cout << "This will print forever!" << endl;
// }
```

### Do-While Loop

The `do-while` loop is similar to the `while` loop, but it guarantees that the loop body executes at least once, because the condition is checked *after* the first iteration.

#### Basic Do-While Loop Syntax

```
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    
    // Syntax: do { ... } while (condition);
    do {
        cout << "Do-While Iteration: " << i << endl;
        i++;
    } while (i < 3);
    
    // Example where do-while runs once even if condition is false initially
    int j = 5;
    do {
        cout << "Do-While (j=5, condition j<3): " << j << endl;
        j++;
    } while (j < 3);
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
Do-While Iteration: 0
Do-While Iteration: 1
Do-While Iteration: 2
Do-While (j=5, condition j<3): 5
```

### Nested Loops

Loops can be nested inside one another. This is common for processing 2D data structures (like matrices) or generating patterns.

#### Example: Printing a Rectangle Pattern

```
#include <iostream>
using namespace std;

int main() {
    int rows = 3;
    int cols = 5;
    
    for (int i = 0; i < rows; i++) { // Outer loop for rows
        for (int j = 0; j < cols; j++) { // Inner loop for columns
            cout << "* ";
        }
        cout << endl; // Move to next line after each row
    }
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
* * * * * 
* * * * * 
* * * * * 
```

#### Example: Printing a Right-Angled Triangle Pattern

```
#include <iostream>
using namespace std;

int main() {
    int height = 5;
    
    for (int i = 1; i <= height; i++) { // Outer loop for rows
        for (int j = 1; j <= i; j++) { // Inner loop for columns (prints 'i' stars)
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
* 
* * 
* * * 
* * * * 
* * * * * 
```

### Loop Control Statements

#### `break` Statement

The `break` statement immediately terminates the innermost loop (or `switch` statement) and transfers control to the statement immediately following the loop.

```
#include <iostream>
using namespace std;

int main() {
    cout << "Using break:" << endl;
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break; // Exit the loop when i is 5
        }
        cout << i << " ";
    }
    cout << endl;
    
    // Example with nested loops
    cout << "\nUsing break in nested loops:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 1 && j == 1) {
                break; // Only breaks the inner loop
            }
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
Using break:
0 1 2 3 4 

Using break in nested loops:
(0,0) (0,1) (0,2) 
(1,0) 
(2,0) (2,1) (2,2) 
```

#### `continue` Statement

The `continue` statement skips the rest of the current iteration of the innermost loop and proceeds to the next iteration.

```
#include <iostream>
using namespace std;

int main() {
    cout << "Using continue (skip even numbers):" << endl;
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            continue; // Skip even numbers
        }
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
Using continue (skip even numbers):
1 3 5 7 9 
```

### Practical Examples and Contest Applications

#### Problem: Sum of N Numbers

```
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    long long sum = 0;
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        sum += num;
    }
    cout << "Sum of numbers: " << sum << endl;
    
    return 0;
}
```

**Sample Input/Output:**

```
Input:
Enter the number of elements: 5
Enter 5 numbers: 10 20 30 40 50
Output:
Sum of numbers: 150
```

#### Problem: Find Factorial of a Number

```
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;
    
    long long factorial = 1;
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " is: " << factorial << endl;
    }
    
    return 0;
}
```

**Sample Input/Output:**

```
Input: 5
Output:
Factorial of 5 is: 120
```

### Common Pitfalls and Best Practices

#### Off-by-One Errors

Carefully check loop conditions (`<` vs `<=`, `>` vs `>=`) and initialization/update steps to ensure the loop runs the correct number of times.

```
#include <iostream>
using namespace std;

int main() {
    // Loop 5 times (0 to 4)
    for (int i = 0; i < 5; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    // Loop 5 times (1 to 5)
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}
```

#### Infinite Loops

Ensure that the loop's condition eventually becomes false. For `while` and `do-while` loops, make sure the loop control variable is updated inside the loop.

```
// int i = 0;
// while (i < 5) {
//     cout << i << endl;
//     // Forgot i++; -> Infinite loop
// }
```

#### Performance of Nested Loops

Nested loops can lead to high time complexity. For example, two nested loops iterating `N` times each result in `O(N^2)` complexity. Be mindful of constraints.

**Contest Programming Tips for Loops:**

1. **Choose the right loop type:** `for` when iterations are known, `while` when based on a condition, `do-while` when at least one execution is needed.

1. **Use ****`for-each`**** (range-based for) for convenience** when iterating over collections, but remember it's read-only by default (use `&` for modification).

1. **Be careful with ****`break`**** and ****`continue`****:** Use them judiciously to improve readability, but don't overuse them as they can make code harder to follow.

1. **Always ensure loop termination:** Avoid infinite loops by correctly updating loop control variables.

1. **Consider time complexity:** Nested loops can be slow for large inputs. Always check constraints.

Loops are indispensable for competitive programming. Mastering their various forms and control mechanisms will enable you to solve a wide range of problems efficiently.

---

## Arrays

Arrays are fundamental data structures in C++ used to store a fixed-size sequential collection of elements of the same data type. They are crucial for competitive programming problems that involve lists, sequences, or grids of data.

### One-Dimensional Arrays

A one-dimensional array is a list of elements of the same type, stored in contiguous memory locations.

#### Declaration and Initialization

```
#include <iostream>
#include <numeric> // For std::iota
using namespace std;

int main() {
    // Declaration without initialization (contains garbage values)
    int numbers[5]; 
    cout << "Uninitialized array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Declaration and initialization
    int scores[5] = {10, 20, 30, 40, 50};
    cout << "Initialized array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;

    // Omitting size - compiler calculates it
    int grades[] = {90, 85, 70, 95};
    cout << "Grades array size: " << sizeof(grades) / sizeof(grades[0]) << endl;

    // Initialize all elements to 0 (or a specific value for aggregate types)
    int arr_zeros[5] = {}; // All elements are 0
    cout << "Array initialized to zeros: ";
    for (int i = 0; i < 5; i++) {
        cout << arr_zeros[i] << " ";
    }
    cout << endl;

    // Using std::iota (requires <numeric>) to fill with sequential values
    int sequential_arr[5];
    iota(sequential_arr, sequential_arr + 5, 1); // Fills with 1, 2, 3, 4, 5
    cout << "Sequential array: ";
    for (int i = 0; i < 5; i++) {
        cout << sequential_arr[i] << " ";
    }
    cout << endl;

    return 0;
}
```

**Sample Input/Output:**

```
Output:
Uninitialized array elements: 0 0 0 0 0 
Initialized array elements: 10 20 30 40 50 
Grades array size: 4
Array initialized to zeros: 0 0 0 0 0 
Sequential array: 1 2 3 4 5 
```

*(Note: Uninitialized array elements might show different garbage values depending on the compiler and environment, but often appear as 0 in modern compilers for global/static arrays or when compiled with certain flags. It's best practice to always initialize.)*

#### Accessing Elements

Array elements are accessed using their index, which starts from 0.

```
#include <iostream>
using namespace std;

int main() {
    int data[4] = {100, 200, 300, 400};
    
    cout << "First element: " << data[0] << endl;   // Index 0
    cout << "Third element: " << data[2] << endl;   // Index 2
    
    // Modifying an element
    data[1] = 250;
    cout << "Modified second element: " << data[1] << endl;
    
    // Iterating through an array
    cout << "All elements: ";
    for (int i = 0; i < 4; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
First element: 100
Third element: 300
Modified second element: 250
All elements: 100 250 300 400 
```

### Two-Dimensional Arrays (Matrices)

A two-dimensional array is an array of arrays, often used to represent tables or grids.

#### Declaration and Initialization

```
#include <iostream>
using namespace std;

int main() {
    // Declaration: type arrayName[rows][columns];
    int matrix[2][3]; // 2 rows, 3 columns
    
    // Initialization during declaration
    int grid[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    // Accessing elements
    cout << "Element at [0][0]: " << grid[0][0] << endl; // 1
    cout << "Element at [1][2]: " << grid[1][2] << endl; // 6
    
    // Modifying an element
    grid[0][1] = 25;
    cout << "Modified element at [0][1]: " << grid[0][1] << endl; // 25
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
Element at [0][0]: 1
Element at [1][2]: 6
Modified element at [0][1]: 25
```

#### Iterating Through Two-Dimensional Arrays

Nested loops are commonly used to process 2D arrays.

```
#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    cout << "Matrix elements:" << endl;
    for (int i = 0; i < 3; i++) { // Loop through rows
        for (int j = 0; j < 3; j++) { // Loop through columns
            cout << matrix[i][j] << " ";
        }
        cout << endl; // New line after each row
    }
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
Matrix elements:
1 2 3 
4 5 6 
7 8 9 
```

### Practical Examples and Contest Applications

#### Problem: Find the maximum element in a 1D array

```
#include <iostream>
#include <algorithm> // For std::max
using namespace std;

int main() {
    int arr[] = {12, 45, 1, 89, 34, 7};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate size of array
    
    int max_val = arr[0]; // Assume first element is max
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    cout << "Maximum element: " << max_val << endl;
    
    // Using std::max_element (requires <algorithm> and <iterator>)
    // cout << "Maximum element (STL): " << *max_element(arr, arr + n) << endl;
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
Maximum element: 89
```

#### Problem: Sum of all elements in a 2D array

```
#include <iostream>
using namespace std;

int main() {
    int matrix[2][2] = {{10, 20}, {30, 40}};
    int rows = 2;
    int cols = 2;
    long long sum = 0;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }
    cout << "Sum of all elements: " << sum << endl;
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
Sum of all elements: 100
```

### Common Pitfalls and Best Practices

#### Array Out-of-Bounds Access

Accessing an array element using an index that is outside its valid range (0 to size-1) leads to undefined behavior. This is a common and dangerous error in C++.

```
#include <iostream>
using namespace std;

int main() {
    int arr[3] = {1, 2, 3};
    
    // Valid access
    cout << arr[0] << endl;
    cout << arr[2] << endl;
    
    // Invalid access (out of bounds) - will compile but crash or give garbage
    // cout << arr[3] << endl; // Accessing index 3 for array of size 3
    // arr[5] = 10;           // Writing to out of bounds memory
    
    return 0;
}
```

#### Fixed Size Limitation

C-style arrays have a fixed size determined at compile time. This means you cannot resize them after creation. For dynamic sizing, use `std::vector` (covered in STL section).

#### Passing Arrays to Functions

When you pass an array to a function, it decays into a pointer to its first element. The function loses information about the array's size. You must pass the size separately.

```
#include <iostream>
using namespace std;

void printArray(int arr[], int size) { // arr[] is equivalent to int* arr
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int myArr[] = {10, 20, 30};
    int n = sizeof(myArr) / sizeof(myArr[0]);
    
    printArray(myArr, n);
    
    return 0;
}
```

**Contest Programming Tips for Arrays:**

1. **Always initialize arrays:** Uninitialized arrays contain garbage values, leading to unpredictable behavior.

1. **Be vigilant about array bounds:** Off-by-one errors are common. Always ensure your indices are within `[0, size-1]`.

1. **For dynamic sizing, prefer ****`std::vector`****:** It handles memory management automatically and is safer.

1. **When passing arrays to functions, pass their size** as a separate argument.

1. **Use ****`long long`**** arrays** if element values or sums might exceed `int` limits.

1. **For 2D arrays, remember ****`[row][column]`**** indexing.**

Arrays are fundamental for many competitive programming problems. A solid understanding of their behavior, especially indexing and memory, is crucial for success.

---

## Strings

Strings are sequences of characters. C++ supports two main types of strings: C-style strings (inherited from C) and C++-style strings (`std::string`). In competitive programming, `std::string` is generally preferred due to its safety and ease of use, but understanding C-style strings is also important.

### C-Style Strings (Character Arrays)

C-style strings are arrays of characters terminated by a null character (`\0`). They are essentially `char` arrays.

#### Declaration and Initialization

```
#include <iostream>
#include <cstring> // For C-style string functions like strlen, strcpy, strcmp
using namespace std;

int main() {
    // Declaring a C-style string (character array)
    char greeting[6] = {"H", "e", "l", "l", "o", "\0"}; // Explicit null termination
    cout << "Greeting: " << greeting << endl;

    // Shorthand initialization (compiler adds null terminator automatically)
    char name[] = "World"; // Size will be 6 (5 for "World" + 1 for '\0')
    cout << "Name: " << name << endl;

    // Declaring with fixed size, ensure enough space for null terminator
    char city[10]; // Can hold up to 9 characters + null terminator
    // city = "New York"; // ERROR: Cannot assign array like this
    strcpy(city, "London"); // Use strcpy to copy string (from <cstring>)
    cout << "City: " << city << endl;

    // Reading C-style string from input
    char input_str[100];
    cout << "Enter a word (C-style): ";
    cin >> input_str; // Reads until whitespace
    cout << "You entered: " << input_str << endl;

    // Reading a line with spaces (use cin.getline())
    cin.ignore(); // Clear buffer from previous cin
    char full_line[100];
    cout << "Enter a line (C-style): ";
    cin.getline(full_line, 100); // Reads up to 99 chars or until newline
    cout << "You entered: " << full_line << endl;

    return 0;
}
```

**Sample Input/Output:**

```
Output:
Greeting: Hello
Name: World
City: London
Enter a word (C-style): Programming
You entered: Programming
Enter a line (C-style): Competitive Programming
You entered: Competitive Programming
```

#### Common C-Style String Functions (from `<cstring>`)

| Function | Description | Example |
| --- | --- | --- |
| `strlen(s)` | Returns the length of string `s` (excluding null terminator). | `strlen("hello")` returns 5 |
| `strcpy(dest, src)` | Copies `src` string to `dest`. **Beware of buffer overflow!** | `strcpy(buffer, "test")` |
| `strncpy(dest, src, n)` | Copies at most `n` characters from `src` to `dest`. Safer. | `strncpy(buffer, "test", 5)` |
| `strcat(dest, src)` | Concatenates `src` to `dest`. **Beware of buffer overflow!** | `strcat(s1, s2)` |
| `strncat(dest, src, n)` | Concatenates at most `n` characters from `src` to `dest`. Safer. | `strncat(s1, s2, 3)` |
| `strcmp(s1, s2)` | Compares `s1` and `s2` lexicographically. Returns 0 if equal, <0 if `s1` < `s2`, >0 if `s1` > `s2`. | `strcmp("a", "b")` returns <0 |
| `strncmp(s1, s2, n)` | Compares at most `n` characters of `s1` and `s2`. | `strncmp("apple", "apricot", 2)` returns 0 |

```
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50] = "Hello";

    // strlen
    cout << "Length of str1: " << strlen(str1) << endl; // 5

    // strcpy
    char dest[50];
    strcpy(dest, str1);
    cout << "Copied string: " << dest << endl; // Hello

    // strcat
    strcat(str1, " ");
    strcat(str1, str2);
    cout << "Concatenated string: " << str1 << endl; // Hello World

    // strcmp
    cout << "strcmp(str1, str2): " << strcmp(str1, str2) << endl; // >0 (H > W)
    cout << "strcmp(str1, str3): " << strcmp(str1, str3) << endl; // >0 (Hello World > Hello)
    cout << "strcmp(\"Hello\", str3): " << strcmp("Hello", str3) << endl; // 0

    return 0;
}
```

**Sample Input/Output:**

```
Output:
Length of str1: 5
Copied string: Hello
Concatenated string: Hello World
strcmp(str1, str2): 1
strcmp(str1, str3): 1
strcmp("Hello", str3): 0
```

### C++-Style Strings (`std::string`)

`std::string` is a class in the C++ Standard Library that provides a much safer and more convenient way to handle strings compared to C-style strings. It automatically manages memory, handles resizing, and offers a rich set of member functions.

#### Declaration and Initialization

```
#include <iostream>
#include <string> // For std::string
using namespace std;

int main() {
    // Default initialization (empty string)
    string s1;
    cout << "s1 (empty): \"" << s1 << "\"" << endl;

    // Initialization with a string literal
    string s2 = "Hello C++!";
    cout << "s2: " << s2 << endl;

    // Initialization from another string
    string s3 = s2;
    cout << "s3 (copy of s2): " << s3 << endl;

    // Initialization with part of a string
    string s4(s2, 6); // Starts from index 6 of s2
    cout << "s4 (substring): " << s4 << endl; // C++!

    // Initialization with repeating characters
    string s5(5, "*"); // Five asterisks
    cout << "s5: " << s5 << endl;

    // Reading std::string from input
    string word;
    cout << "Enter a word (std::string): ";
    cin >> word; // Reads until whitespace
    cout << "You entered: " << word << endl;

    // Reading a line with spaces (use getline)
    cin.ignore(); // Clear buffer from previous cin
    string line;
    cout << "Enter a line (std::string): ";
    getline(cin, line); // Reads until newline
    cout << "You entered: " << line << endl;

    return 0;
}
```

**Sample Input/Output:**

```
Output:
s1 (empty): ""
s2: Hello C++!
s3 (copy of s2): Hello C++!
s4 (substring): C++!
s5: *****
Enter a word (std::string): Programming
You entered: Programming
Enter a line (std::string): Competitive Programming is fun!
You entered: Competitive Programming is fun!
```

#### Common `std::string` Operations

`std::string` provides many useful member functions. Here are some of the most common ones:

| Function | Description | Example |
| --- | --- | --- |
| `length()` or `size()` | Returns the length of the string. | `s.length()` |
| `empty()` | Returns `true` if the string is empty. | `s.empty()` |
| `operator[]` | Accesses character at a specific index. | `s[0]` |
| `at(pos)` | Accesses character at `pos`, with bounds checking. | `s.at(0)` |
| `append(str)` or `+=` | Appends `str` to the end of the string. | `s1.append(s2)` or `s1 += s2` |
| `push_back(char)` | Appends a single character. | `s.push_back("!")` |
| `pop_back()` | Removes the last character (C++11). | `s.pop_back()` |
| `insert(pos, str)` | Inserts `str` at `pos`. | `s.insert(6, "beautiful ")` |
| `erase(pos, len)` | Erases `len` characters starting at `pos`. | `s.erase(0, 6)` |
| `substr(pos, len)` | Returns a new string with `len` characters from `pos`. | `s.substr(6, 3)` |
| `find(str, pos)` | Finds the first occurrence of `str` from `pos`. Returns `string::npos` if not found. | `s.find("world")` |
| `rfind(str, pos)` | Finds the last occurrence of `str`. | `s.rfind("o")` |
| `compare(str)` | Compares with `str`. Returns 0 if equal, <0 if `*this` < `str`, >0 if `*this` > `str`. | `s1.compare(s2)` |
| `clear()` | Clears the contents of the string. | `s.clear()` |
| `c_str()` | Returns a pointer to a null-terminated C-style string. Useful for functions requiring `const char*`. | `s.c_str()` |

```
#include <iostream>
#include <string>
#include <algorithm> // For std::reverse
using namespace std;

int main() {
    string s = "Programming";
    cout << "Original string: " << s << endl;

    // Length and size
    cout << "Length: " << s.length() << endl; // 11
    cout << "Size: " << s.size() << endl;     // 11

    // Accessing characters
    cout << "First char: " << s[0] << endl; // P
    cout << "Last char: " << s.back() << endl; // g (C++11)

    // Concatenation
    string s2 = " is fun!";
    s += s2; // or s.append(s2);
    cout << "Concatenated: " << s << endl; // Programming is fun!

    // Substring
    string sub = s.substr(0, 11); // "Programming"
    cout << "Substring: " << sub << endl;

    // Finding
    size_t pos = s.find("fun");
    if (pos != string::npos) {
        cout << "\"fun\" found at position: " << pos << endl; // 15
    }

    // Erasing
    s.erase(11, 7); // Erase " is fun!"
    cout << "After erase: " << s << endl; // Programming

    // Inserting
    s.insert(0, "C++ ");
    cout << "After insert: " << s << endl; // C++ Programming

    // Comparison (using operators)
    string s_comp1 = "apple";
    string s_comp2 = "banana";
    cout << "s_comp1 == s_comp2: " << (s_comp1 == s_comp2) << endl; // 0 (false)
    cout << "s_comp1 < s_comp2: " << (s_comp1 < s_comp2) << endl;   // 1 (true)

    // Reversing a string (using std::algorithm)
    string rev_str = "reverse";
    reverse(rev_str.begin(), rev_str.end());
    cout << "Reversed string: " << rev_str << endl; // esrever

    return 0;
}
```

**Sample Input/Output:**

```
Output:
Original string: Programming
Length: 11
Size: 11
First char: P
Last char: g
Concatenated: Programming is fun!
Substring: Programming
"fun" found at position: 15
After erase: Programming
After insert: C++ Programming
s_comp1 == s_comp2: 0
s_comp1 < s_comp2: 1
Reversed string: esrever
```

### Practical Examples and Contest Applications

#### Problem: Check if a string is a palindrome

```
#include <iostream>
#include <string>
#include <algorithm> // For std::reverse
using namespace std;

bool isPalindrome(const string& s) {
    string reversed_s = s;
    reverse(reversed_s.begin(), reversed_s.end());
    return s == reversed_s;
}

int main() {
    string str1 = "madam";
    string str2 = "hello";
    
    cout << str1 << " is palindrome: " << (isPalindrome(str1) ? "Yes" : "No") << endl;
    cout << str2 << " is palindrome: " << (isPalindrome(str2) ? "Yes" : "No") << endl;
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
madam is palindrome: Yes
hello is palindrome: No
```

#### Problem: Count occurrences of a character in a string

```
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "programming is fun";
    char target = "g";
    int count = 0;
    
    for (char c : text) { // Using range-based for loop
        if (c == target) {
            count++;
        }
    }
    cout << "Character \'" << target << "\' appears " << count << " times." << endl;
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
Character 'g' appears 2 times.
```

### Common Pitfalls and Best Practices

#### C-Style String Buffer Overflows

Using `strcpy`, `strcat` without checking buffer sizes can lead to serious security vulnerabilities and crashes. Always use `strncpy`, `strncat` or, even better, `std::string`.

#### Mixing C-Style and C++-Style Strings

While possible, it can be confusing. When interacting with C APIs that require `const char*`, use `std::string::c_str()`.

#### Performance Considerations

`std::string` operations can sometimes involve memory reallocations, which might be slower than fixed-size C-style string operations for very performance-critical scenarios (though rare in typical competitive programming problems for beginners). However, the safety and convenience of `std::string` usually outweigh this.

**Contest Programming Tips for Strings:**

1. **Prefer ****`std::string`**** over C-style strings:** It's safer, easier to use, and handles memory automatically. This reduces common errors like buffer overflows.

1. **Use ****`getline(cin, str)`**** for reading lines with spaces** into `std::string`.

1. **Familiarize yourself with ****`std::string`**** member functions:** `length()`, `substr()`, `find()`, `append()`, `insert()`, `erase()` are very useful.

1. **For character-by-character processing, use ****`operator[]`**** or range-based for loops.**

1. **Remember ****`std::string::npos`** when checking results of `find()` operations.

1. **Use ****`std::algorithm`**** functions** like `std::reverse` with `std::string::begin()` and `std::string::end()` for common string manipulations.

Strings are ubiquitous in competitive programming. Mastering `std::string` will significantly simplify your code and reduce debugging time.

---

## Functions

Functions are blocks of code that perform a specific task. They help organize code, make it reusable, and improve readability. In competitive programming, using functions effectively can simplify complex problems and reduce redundancy.

### Defining and Calling Functions

#### Function Definition

A function definition specifies what the function does. It consists of a return type, a function name, a parameter list, and the function body.

```
return_type function_name(parameter_list) {
    // Function body
    // Statements to perform the task
    return value; // Optional, if return_type is not void
}
```

- **`return_type`**: The data type of the value the function returns. If the function doesn't return a value, use `void`.

- **`function_name`**: A unique identifier for the function.

- **`parameter_list`**: A comma-separated list of input parameters, each with its data type. If no parameters, use `()`.

- **Function body**: The code block enclosed in curly braces `{}` that performs the function's task.

#### Function Declaration (Prototype)

A function declaration (or prototype) tells the compiler about the function's existence, its return type, name, and parameters, before its actual definition. This is necessary if you define a function after `main()` or other functions that call it.

```
return_type function_name(parameter_list); // Semicolon at the end
```

#### Example: Simple Function

```
#include <iostream>
using namespace std;

// Function declaration (prototype)
void greet(); 

// Function definition
void greet() {
    cout << "Hello from a function!" << endl;
}

int main() {
    // Calling the function
    greet(); 
    return 0;
}
```

**Sample Input/Output:**

```
Output:
Hello from a function!
```

### Function Parameters and Arguments

Functions can accept input values through parameters. These values are called arguments when the function is called.

#### Pass by Value

When arguments are passed by value, a copy of the argument's value is made and passed to the function. Changes made to the parameter inside the function do not affect the original argument.

```
#include <iostream>
using namespace std;

void addOne(int num) { // num is a copy
    num = num + 1;
    cout << "Inside function (pass by value): num = " << num << endl;
}

int main() {
    int myNum = 10;
    cout << "Before function call: myNum = " << myNum << endl;
    addOne(myNum); // Pass by value
    cout << "After function call: myNum = " << myNum << endl;
    return 0;
}
```

**Sample Input/Output:**

```
Output:
Before function call: myNum = 10
Inside function (pass by value): num = 11
After function call: myNum = 10
```

#### Pass by Reference

When arguments are passed by reference, the function receives a reference (an alias) to the original variable. Changes made to the parameter inside the function directly affect the original argument.

```
#include <iostream>
using namespace std;

void addOneRef(int& num) { // num is a reference to the original variable
    num = num + 1;
    cout << "Inside function (pass by reference): num = " << num << endl;
}

int main() {
    int myNum = 10;
    cout << "Before function call: myNum = " << myNum << endl;
    addOneRef(myNum); // Pass by reference
    cout << "After function call: myNum = " << myNum << endl;
    return 0;
}
```

**Sample Input/Output:**

```
Output:
Before function call: myNum = 10
Inside function (pass by reference): num = 11
After function call: myNum = 11
```

**When to use pass by value vs. pass by reference:**

- **Pass by value:** Use when you don't need to modify the original argument, or when passing small, simple data types (like `int`, `char`, `bool`).

- **Pass by reference:** Use when you need to modify the original argument, or when passing large objects (like `std::string`, `std::vector`) to avoid expensive copying. For large objects that you don't want to modify, use `const` reference (`const Type&`).

### Return Values

Functions can return a single value using the `return` statement. The type of the returned value must match the function's `return_type`.

```
#include <iostream>
using namespace std;

// Function that returns an int
int add(int a, int b) {
    return a + b;
}

// Function that returns a bool
bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    int sum = add(5, 3);
    cout << "Sum: " << sum << endl; // 8
    
    cout << "Is 4 even? " << (isEven(4) ? "Yes" : "No") << endl; // Yes
    cout << "Is 7 even? " << (isEven(7) ? "Yes" : "No") << endl; // No
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
Sum: 8
Is 4 even? Yes
Is 7 even? No
```

### Function Overloading

Function overloading allows you to define multiple functions with the same name but different parameter lists (different number of parameters, different types of parameters, or different order of parameters). The compiler determines which function to call based on the arguments provided.

```
#include <iostream>
#include <string>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    cout << "Adding two integers: ";
    return a + b;
}

// Function to add two doubles
double add(double a, double b) {
    cout << "Adding two doubles: ";
    return a + b;
}

// Function to concatenate two strings
string add(string s1, string s2) {
    cout << "Concatenating two strings: ";
    return s1 + s2;
}

int main() {
    cout << add(5, 10) << endl;         // Calls int add(int, int)
    cout << add(5.5, 10.5) << endl;     // Calls double add(double, double)
    cout << add("Hello ", "World!") << endl; // Calls string add(string, string)
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
Adding two integers: 15
Adding two doubles: 16
Concatenating two strings: Hello World!
```

### Practical Examples and Contest Applications

#### Problem: Calculate power (x^n)

```
#include <iostream>
using namespace std;

// Function to calculate x raised to the power n
long long power(int base, int exp) {
    long long res = 1;
    for (int i = 0; i < exp; i++) {
        res *= base;
    }
    return res;
}

int main() {
    cout << "2^3 = " << power(2, 3) << endl; // 8
    cout << "5^0 = " << power(5, 0) << endl; // 1
    cout << "10^4 = " << power(10, 4) << endl; // 10000
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
2^3 = 8
5^0 = 1
10^4 = 10000
```

#### Problem: Swap two numbers using a function

```
#include <iostream>
using namespace std;

// Function to swap two integers using pass by reference
void swapNumbers(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapNumbers(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
Before swap: x = 10, y = 20
After swap: x = 20, y = 10
```

### Common Pitfalls and Best Practices

#### Forgetting Function Prototypes

If you define a function after `main()` (or any function that calls it), you must provide a function prototype before the call. Otherwise, the compiler won't know about the function's signature.

```
// This would cause a compile error if `printMessage` is defined after main
// int main() {
//     printMessage();
//     return 0;
// }
// void printMessage() { cout << "Hello"; }

// Correct way:
#include <iostream>
using namespace std;

void printMessage(); // Prototype

int main() {
    printMessage();
    return 0;
}

void printMessage() { // Definition
    cout << "Hello from correct function!" << endl;
}
```

#### Incorrect Pass-by-Value/Reference Usage

- If you intend to modify the original variable, use pass by reference (`&`).

- If you want to protect the original variable from modification, use pass by value or `const` reference.

#### Returning Local Variable by Reference/Pointer

Never return a reference or pointer to a local variable that will be destroyed when the function exits. This leads to undefined behavior.

```
// DANGEROUS!
// int& createLocal() {
//     int local_var = 10;
//     return local_var; // local_var will be destroyed after function returns
// }
```

**Contest Programming Tips for Functions:**

1. **Modularize your code:** Break down complex problems into smaller, manageable functions. This makes your code easier to write, debug, and understand.

1. **Use meaningful function names:** `calculateSum` is better than `cs`.

1. **Prefer ****`const`**** references for large input parameters** that you don't intend to modify (e.g., `const std::vector<int>& arr`). This avoids expensive copying and ensures data integrity.

1. **Keep functions focused:** Each function should ideally do one thing well.

1. **Use function prototypes** when defining functions after `main()`.

1. **Consider ****`inline`**** keyword** for very small, frequently called functions (though modern compilers often optimize this automatically).

Functions are a cornerstone of structured programming. Mastering them will greatly enhance your ability to write clean, efficient, and maintainable code in competitive programming.

---

## Basic Recursion

Recursion is a programming technique where a function calls itself to solve a problem. It's a powerful concept often used to solve problems that can be broken down into smaller, self-similar subproblems. Understanding recursion is crucial for many algorithms in competitive programming.

### How Recursion Works

A recursive function typically has two main parts:

1. **Base Case:** A condition that stops the recursion. Without a base case, the function would call itself indefinitely, leading to a stack overflow.

1. **Recursive Step:** The part where the function calls itself with a modified input, moving closer to the base case.

### Example: Factorial Calculation

The factorial of a non-negative integer `n` (denoted as `n!`) is the product of all positive integers less than or equal to `n`. For example, `5! = 5 * 4 * 3 * 2 * 1 = 120`. The base case is `0! = 1`.

```
#include <iostream>
using namespace std;

// Recursive function to calculate factorial
long long factorial(int n) {
    // Base case: if n is 0, return 1
    if (n == 0) {
        return 1;
    }
    // Recursive step: n * factorial(n-1)
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    }

    return 0;
}
```

**Sample Input/Output:**

```
Input: 5
Output:
Factorial of 5 is: 120

Input: 0
Output:
Factorial of 0 is: 1
```

**How ****`factorial(5)`**** works:**

1. `factorial(5)` calls `5 * factorial(4)`

1. `factorial(4)` calls `4 * factorial(3)`

1. `factorial(3)` calls `3 * factorial(2)`

1. `factorial(2)` calls `2 * factorial(1)`

1. `factorial(1)` calls `1 * factorial(0)`

1. `factorial(0)` returns `1` (base case)

1. `factorial(1)` returns `1 * 1 = 1`

1. `factorial(2)` returns `2 * 1 = 2`

1. `factorial(3)` returns `3 * 2 = 6`

1. `factorial(4)` returns `4 * 6 = 24`

1. `factorial(5)` returns `5 * 24 = 120`

### Example: Fibonacci Sequence

The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1. (e.g., 0, 1, 1, 2, 3, 5, 8, ...).

```
#include <iostream>
using namespace std;

// Recursive function to find the nth Fibonacci number
int fibonacci(int n) {
    // Base cases
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    // Recursive step
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int num;
    cout << "Enter a non-negative integer (n-th Fibonacci number): ";
    cin >> num;

    if (num < 0) {
        cout << "Fibonacci is not defined for negative numbers." << endl;
    } else {
        cout << "The " << num << "-th Fibonacci number is: " << fibonacci(num) << endl;
    }

    return 0;
}
```

**Sample Input/Output:**

```
Input: 6
Output:
The 6-th Fibonacci number is: 8

Input: 0
Output:
The 0-th Fibonacci number is: 0
```

### Practical Examples and Contest Applications

#### Problem: Sum of Digits of a Number

```
#include <iostream>
using namespace std;

// Recursive function to calculate sum of digits
int sumDigits(int n) {
    // Base case: if n is 0, sum is 0
    if (n == 0) {
        return 0;
    }
    // Recursive step: last digit + sum of remaining digits
    else {
        return (n % 10) + sumDigits(n / 10);
    }
}

int main() {
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Please enter a non-negative integer." << endl;
    } else {
        cout << "Sum of digits of " << num << " is: " << sumDigits(num) << endl;
    }

    return 0;
}
```

**Sample Input/Output:**

```
Input: 12345
Output:
Sum of digits of 12345 is: 15

Input: 7
Output:
Sum of digits of 7 is: 7
```

### Common Pitfalls and Best Practices

#### Missing Base Case or Incorrect Base Case

This is the most common error in recursion. Without a proper base case, the function will call itself infinitely, leading to a stack overflow error (the program runs out of memory for function calls).

```
// DANGEROUS: Missing base case
// int infiniteRecursion(int n) {
//     return infiniteRecursion(n + 1);
// }
```

#### No Progress Towards Base Case

If the recursive step doesn't modify the input in a way that eventually reaches the base case, it will also lead to infinite recursion.

```
// DANGEROUS: No progress towards base case
// int noProgress(int n) {
//     if (n == 0) return 0;
//     return noProgress(n); // Calls itself with same 'n' indefinitely
// }
```

#### Stack Overflow

Each recursive call adds a new frame to the call stack. If the recursion depth is too large (e.g., calculating `factorial(100000)`), it can exceed the stack limit, causing a stack overflow. Iterative solutions are often preferred for very deep recursions.

#### Performance (Redundant Calculations)

In some recursive functions (like the naive Fibonacci implementation), the same subproblems are calculated multiple times. This leads to exponential time complexity. Techniques like memoization or dynamic programming (more advanced topics) can optimize these.

**Contest Programming Tips for Recursion:**

1. **Identify the Base Case(s):** This is the most critical step. What is the simplest form of the problem that can be solved directly?

1. **Define the Recursive Step:** How can you break down the larger problem into smaller, similar subproblems?

1. **Ensure Termination:** Make sure each recursive call brings you closer to a base case.

1. **Consider Iteration:** For problems that can be easily solved iteratively (e.g., simple factorials), an iterative solution is often more efficient and avoids stack overflow issues.

1. **Visualize with a Call Stack:** Trace the execution of a recursive function with a small input to understand its flow.

Recursion is an elegant way to solve certain problems, especially those involving tree structures, graphs, or divide-and-conquer strategies. Practice identifying recursive patterns and implementing them correctly.

---

## STL Containers

The Standard Template Library (STL) is a powerful set of C++ template classes that provide generic data structures and algorithms. Containers are classes that store collections of objects. Using STL containers can significantly speed up development and improve code reliability in competitive programming.

### `std::vector` (Dynamic Array)

`std::vector` is a sequence container that encapsulates dynamic size arrays. It is similar to a C-style array but can grow and shrink in size dynamically. It provides fast random access to elements.

#### Declaration and Initialization

```
#include <iostream>
#include <vector> // Required for std::vector
#include <numeric> // For std::iota
#include <algorithm> // For std::sort, std::reverse, etc.
using namespace std;

int main() {
    // Empty vector of integers
    vector<int> vec1;
    cout << "vec1 size: " << vec1.size() << endl;

    // Vector initialized with size 5, all elements 0
    vector<int> vec2(5); 
    cout << "vec2 size: " << vec2.size() << ", elements: ";
    for (int x : vec2) cout << x << " ";
    cout << endl;

    // Vector initialized with size 3, all elements 10
    vector<int> vec3(3, 10);
    cout << "vec3 size: " << vec3.size() << ", elements: ";
    for (int x : vec3) cout << x << " ";
    cout << endl;

    // Vector initialized from an initializer list
    vector<int> vec4 = {1, 2, 3, 4, 5};
    cout << "vec4 size: " << vec4.size() << ", elements: ";
    for (int x : vec4) cout << x << " ";
    cout << endl;

    // Copy constructor
    vector<int> vec5(vec4); 
    cout << "vec5 (copy of vec4): ";
    for (int x : vec5) cout << x << " ";
    cout << endl;

    // Using std::iota to fill with sequential values
    vector<int> vec_seq(5);
    iota(vec_seq.begin(), vec_seq.end(), 10); // Fills with 10, 11, 12, 13, 14
    cout << "vec_seq: ";
    for (int x : vec_seq) cout << x << " ";
    cout << endl;

    return 0;
}
```

**Sample Input/Output:**

```
Output:
vec1 size: 0
vec2 size: 5, elements: 0 0 0 0 0 
vec3 size: 3, elements: 10 10 10 
vec4 size: 5, elements: 1 2 3 4 5 
vec5 (copy of vec4): 1 2 3 4 5 
vec_seq: 10 11 12 13 14 
```

#### Common `std::vector` Operations

| Function | Description | Example |
| --- | --- | --- |
| `push_back(val)` | Adds `val` to the end. | `vec.push_back(5)` |
| `pop_back()` | Removes the last element. | `vec.pop_back()` |
| `size()` | Returns the number of elements. | `vec.size()` |
| `empty()` | Returns `true` if vector is empty. | `vec.empty()` |
| `clear()` | Removes all elements. | `vec.clear()` |
| `operator[]` | Accesses element at index (no bounds check). | `vec[0]` |
| `at(idx)` | Accesses element at index (with bounds check). | `vec.at(0)` |
| `front()` | Returns reference to first element. | `vec.front()` |
| `back()` | Returns reference to last element. | `vec.back()` |
| `begin()` | Returns iterator to beginning. | `vec.begin()` |
| `end()` | Returns iterator to end (one past last element). | `vec.end()` |
| `insert(pos, val)` | Inserts `val` before `pos`. | `vec.insert(vec.begin() + 1, 99)` |
| `erase(pos)` | Erases element at `pos`. | `vec.erase(vec.begin())` |
| `erase(first, last)` | Erases range `[first, last)`. | `vec.erase(vec.begin(), vec.begin() + 2)` |
| `sort(begin, end)` | Sorts elements (from `<algorithm>`). | `sort(vec.begin(), vec.end())` |
| `reverse(begin, end)` | Reverses elements (from `<algorithm>`). | `reverse(vec.begin(), vec.end())` |

```
#include <iostream>
#include <vector>
#include <algorithm> // For sort, reverse
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30};
    cout << "Initial vector: ";
    for (int x : numbers) cout << x << " ";
    cout << endl;

    // Add elements
    numbers.push_back(40);
    numbers.push_back(50);
    cout << "After push_back: ";
    for (int x : numbers) cout << x << " ";
    cout << endl;

    // Access elements
    cout << "First element: " << numbers[0] << endl;
    cout << "Last element: " << numbers.back() << endl;

    // Remove elements
    numbers.pop_back(); // Removes 50
    cout << "After pop_back: ";
    for (int x : numbers) cout << x << " ";
    cout << endl;

    // Insert element
    numbers.insert(numbers.begin() + 1, 15); // Insert 15 at index 1
    cout << "After insert: ";
    for (int x : numbers) cout << x << " ";
    cout << endl;

    // Erase element
    numbers.erase(numbers.begin() + 2); // Erase element at index 2 (which is 20)
    cout << "After erase: ";
    for (int x : numbers) cout << x << " ";
    cout << endl;

    // Sort vector
    vector<int> unsorted = {5, 2, 8, 1, 9};
    sort(unsorted.begin(), unsorted.end());
    cout << "Sorted vector: ";
    for (int x : unsorted) cout << x << " ";
    cout << endl;

    // Reverse vector
    reverse(unsorted.begin(), unsorted.end());
    cout << "Reversed vector: ";
    for (int x : unsorted) cout << x << " ";
    cout << endl;

    return 0;
}
```

**Sample Input/Output:**

```
Output:
Initial vector: 10 20 30 
After push_back: 10 20 30 40 50 
First element: 10
Last element: 50
After pop_back: 10 20 30 40 
After insert: 10 15 20 30 40 
After erase: 10 15 30 40 
Sorted vector: 1 2 5 8 9 
Reversed vector: 9 8 5 2 1 
```

#### 2D Vectors (Vector of Vectors)

`std::vector` can be used to create dynamic 2D arrays, similar to matrices.

```
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare a 2D vector (3 rows, 4 columns)
    vector<vector<int>> matrix(
        3,                  // 3 rows
        vector<int>(4, 0)   // Each row is a vector of 4 integers, initialized to 0
    );

    // Initialize with values
    matrix[0][0] = 1;
    matrix[1][2] = 5;
    matrix[2][3] = 9;

    // Iterate and print
    cout << "2D Vector (Matrix):" << endl;
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Add a new row
    matrix.push_back({10, 11, 12, 13});
    cout << "\nAfter adding a row:" << endl;
    for (const auto& row : matrix) { // Using range-based for for rows
        for (int val : row) { // Using range-based for for elements in row
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
```

**Sample Input/Output:**

```
Output:
2D Vector (Matrix):
1 0 0 0 
0 0 5 0 
0 0 0 9 

After adding a row:
1 0 0 0 
0 0 5 0 
0 0 0 9 
10 11 12 13 
```

### `std::pair`

`std::pair` is a simple container that stores two heterogeneous objects as a single unit. It is useful for returning two values from a function, or for storing key-value pairs in containers like `std::map`.

#### Declaration and Initialization

```
#include <iostream>
#include <utility> // Required for std::pair
#include <string>
using namespace std;

int main() {
    // Declare and initialize
    pair<int, string> p1(1, "apple");
    cout << "p1: (" << p1.first << ", " << p1.second << ")" << endl;

    // Using make_pair (convenience function)
    pair<double, char> p2 = make_pair(3.14, "Z");
    cout << "p2: (" << p2.first << ", " << p2.second << ")" << endl;

    // Using curly braces (C++11 initializer list)
    pair<int, int> p3 = {10, 20};
    cout << "p3: (" << p3.first << ", " << p3.second << ")" << endl;

    // Modifying elements
    p1.first = 100;
    p1.second = "banana";
    cout << "p1 (modified): (" << p1.first << ", " << p1.second << ")" << endl;

    // Comparing pairs (lexicographical comparison)
    pair<int, int> pa = {1, 5};
    pair<int, int> pb = {2, 3};
    pair<int, int> pc = {1, 5};

    cout << "pa == pc: " << (pa == pc) << endl; // true
    cout << "pa < pb: " << (pa < pb) << endl;   // true (1 < 2)
    cout << "pb < pa: " << (pb < pa) << endl;   // false

    return 0;
}
```

**Sample Input/Output:**

```
Output:
p1: (1, apple)
p2: (3.14, Z)
p3: (10, 20)
p1 (modified): (100, banana)
pa == pc: 1
pa < pb: 1
pb < pa: 0
```

### `std::map` (Associative Array)

`std::map` is an associative container that stores elements formed by a combination of a key value and a mapped value, following a specific order. Keys are unique and sorted. It provides efficient lookup, insertion, and deletion operations.

#### Declaration and Initialization

```
#include <iostream>
#include <map> // Required for std::map
#include <string>
using namespace std;

int main() {
    // Declare an empty map (key: string, value: int)
    map<string, int> ages;

    // Insert elements
    ages["Alice"] = 30;
    ages["Bob"] = 25;
    ages["Charlie"] = 35;

    // Another way to insert using insert() and make_pair()
    ages.insert(make_pair("David", 28));
    // Or using initializer list (C++11)
    ages.insert({"Eve", 22});

    // Access elements
    cout << "Alice's age: " << ages["Alice"] << endl; // If key not found, inserts with default value (0 for int)

    // Iterate through map (elements are sorted by key)
    cout << "\nMap elements (sorted by key):" << endl;
    for (const auto& pair : ages) { // Using range-based for loop
        cout << pair.first << ": " << pair.second << endl;
    }

    // Check if key exists
    if (ages.count("Bob")) { // count() returns 0 or 1 for map
        cout << "\nBob is in the map." << endl;
    }

    // Erase element
    ages.erase("Charlie");
    cout << "\nAfter erasing Charlie:" << endl;
    for (const auto& pair : ages) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
```

**Sample Input/Output:**

```
Output:
Alice's age: 30

Map elements (sorted by key):
Alice: 30
Bob: 25
Charlie: 35
David: 28
Eve: 22

Bob is in the map.

After erasing Charlie:
Alice: 30
Bob: 25
David: 28
Eve: 22
```

#### `std::unordered_map` (Hash Map)

`std::unordered_map` is similar to `std::map` but stores elements in an unordered fashion, using hash tables. This means elements are not sorted by key, but average time complexity for operations like insertion, deletion, and lookup is O(1) (constant time), making it faster than `std::map` (O(log N)) for most cases. Use it when order doesn't matter and performance is critical.

```
#include <iostream>
#include <unordered_map> // Required for std::unordered_map
#include <string>
using namespace std;

int main() {
    unordered_map<string, int> scores;

    scores["John"] = 95;
    scores["Jane"] = 88;
    scores["Mike"] = 72;

    cout << "Jane's score: " << scores["Jane"] << endl;

    cout << "\nUnordered Map elements (order is not guaranteed):" << endl;
    for (const auto& pair : scores) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
```

**Sample Input/Output (order may vary):**

```
Output:
Jane's score: 88

Unordered Map elements (order is not guaranteed):
Mike: 72
Jane: 88
John: 95
```

### `std::set`

`std::set` is an associative container that stores unique elements in a sorted order. It is useful for maintaining a collection of distinct items and performing efficient lookups.

#### Declaration and Initialization

```
#include <iostream>
#include <set> // Required for std::set
#include <string>
using namespace std;

int main() {
    // Declare an empty set of integers
    set<int> uniqueNumbers;

    // Insert elements
    uniqueNumbers.insert(10);
    uniqueNumbers.insert(5);
    uniqueNumbers.insert(20);
    uniqueNumbers.insert(5); // Duplicate, will not be inserted

    // Iterate through set (elements are sorted)
    cout << "Set elements (sorted and unique): ";
    for (int num : uniqueNumbers) {
        cout << num << " ";
    }
    cout << endl;

    // Check if element exists
    if (uniqueNumbers.count(10)) { // count() returns 0 or 1 for set
        cout << "10 is in the set." << endl;
    }
    if (uniqueNumbers.find(15) == uniqueNumbers.end()) { // find() returns iterator to end if not found
        cout << "15 is not in the set." << endl;
    }

    // Erase element
    uniqueNumbers.erase(5);
    cout << "After erasing 5: ";
    for (int num : uniqueNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
```

**Sample Input/Output:**

```
Output:
Set elements (sorted and unique): 5 10 20 
10 is in the set.
15 is not in the set.
After erasing 5: 10 20 
```

#### `std::unordered_set` (Hash Set)

`std::unordered_set` is similar to `std::set` but stores unique elements in an unordered fashion, using hash tables. Average time complexity for operations is O(1). Use it when order doesn't matter and performance is critical.

```
#include <iostream>
#include <unordered_set> // Required for std::unordered_set
using namespace std;

int main() {
    unordered_set<string> fruits;

    fruits.insert("apple");
    fruits.insert("banana");
    fruits.insert("orange");
    fruits.insert("apple"); // Duplicate, not inserted

    cout << "Unordered Set elements (order is not guaranteed): ";
    for (const string& fruit : fruits) {
        cout << fruit << " ";
    }
    cout << endl;

    if (fruits.count("banana")) {
        cout << "Banana is in the set." << endl;
    }

    return 0;
}
```

**Sample Input/Output (order may vary):**

```
Output:
Unordered Set elements (order is not guaranteed): orange banana apple 
Banana is in the set.
```

### `std::stack`

`std::stack` is a container adapter that provides LIFO (Last-In, First-Out) functionality. It is implemented on top of other containers (by default `std::deque`).

#### Common `std::stack` Operations

| Function | Description | Example |
| --- | --- | --- |
| `push(val)` | Adds `val` to the top. | `s.push(10)` |
| `pop()` | Removes the top element. | `s.pop()` |
| `top()` | Returns a reference to the top element. | `s.top()` |
| `empty()` | Returns `true` if stack is empty. | `s.empty()` |
| `size()` | Returns the number of elements. | `s.size()` |

```
#include <iostream>
#include <stack> // Required for std::stack
using namespace std;

int main() {
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack size: " << s.size() << endl; // 3
    cout << "Top element: " << s.top() << endl; // 30

    s.pop(); // Removes 30
    cout << "Top element after pop: " << s.top() << endl; // 20

    s.push(40);
    cout << "Top element after push: " << s.top() << endl; // 40

    cout << "\nElements in stack (LIFO):" << endl;
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
```

**Sample Input/Output:**

```
Output:
Stack size: 3
Top element: 30
Top element after pop: 20
Top element after push: 40

Elements in stack (LIFO):
40 20 10 
```

### `std::queue`

`std::queue` is a container adapter that provides FIFO (First-In, First-Out) functionality. It is implemented on top of other containers (by default `std::deque`).

#### Common `std::queue` Operations

| Function | Description | Example |
| --- | --- | --- |
| `push(val)` | Adds `val` to the back. | `q.push(10)` |
| `pop()` | Removes the front element. | `q.pop()` |
| `front()` | Returns a reference to the front element. | `q.front()` |
| `back()` | Returns a reference to the back element. | `q.back()` |
| `empty()` | Returns `true` if queue is empty. | `q.empty()` |
| `size()` | Returns the number of elements. | `q.size()` |

```
#include <iostream>
#include <queue> // Required for std::queue
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Queue size: " << q.size() << endl; // 3
    cout << "Front element: " << q.front() << endl; // 10
    cout << "Back element: " << q.back() << endl; // 30

    q.pop(); // Removes 10
    cout << "Front element after pop: " << q.front() << endl; // 20

    q.push(40);
    cout << "Back element after push: " << q.back() << endl; // 40

    cout << "\nElements in queue (FIFO):" << endl;
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
```

**Sample Input/Output:**

```
Output:
Queue size: 3
Front element: 10
Back element: 30
Front element after pop: 20
Back element after push: 40

Elements in queue (FIFO):
20 30 40 
```

### Practical Examples and Contest Applications

#### Problem: Remove duplicates from a vector using `std::set`

```
#include <iostream>
#include <vector>
#include <set>
#include <algorithm> // For std::copy
using namespace std;

int main() {
    vector<int> numbers = {1, 5, 2, 5, 1, 8, 2, 9};
    cout << "Original vector: ";
    for (int x : numbers) cout << x << " ";
    cout << endl;

    set<int> uniqueNumbers(numbers.begin(), numbers.end()); // Insert all elements into set
    
    // Copy unique elements back to a vector (optional, can just use the set)
    vector<int> result(uniqueNumbers.begin(), uniqueNumbers.end());

    cout << "Vector after removing duplicates (and sorted): ";
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
```

**Sample Input/Output:**

```
Output:
Original vector: 1 5 2 5 1 8 2 9 
Vector after removing duplicates (and sorted): 1 2 5 8 9 
```

#### Problem: Valid Parentheses Check using `std::stack`

```
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValidParentheses(const string& s) {
    stack<char> st;
    for (char c : s) {
        if (c == "(" || c == "[" || c == "{") {
            st.push(c);
        } else if (c == ")") {
            if (st.empty() || st.top() != "(") return false;
            st.pop();
        } else if (c == "]") {
            if (st.empty() || st.top() != "[") return false;
            st.pop();
        } else if (c == "}") {
            if (st.empty() || st.top() != "{") return false;
            st.pop();
        }
    }
    return st.empty(); // Stack should be empty if all parentheses matched
}

int main() {
    cout << "{}[]() is valid: " << (isValidParentheses("{}[][]") ? "Yes" : "No") << endl;
    cout << "([{}]) is valid: " << (isValidParentheses("([{}])") ? "Yes" : "No") << endl;
    cout << "({[}) is valid: " << (isValidParentheses("({[})") ? "Yes" : "No") << endl;
    cout << "[ is valid: " << (isValidParentheses("[") ? "Yes" : "No") << endl;
    
    return 0;
}
```

**Sample Input/Output:**

```
Output:
{}[]() is valid: Yes
([{}]) is valid: Yes
({[}) is valid: No
[ is valid: No
```

### Common Pitfalls and Best Practices

#### `std::vector` Resizing Cost

While `std::vector` handles dynamic resizing, frequent `push_back` operations can lead to reallocations, which can be slow. If you know the approximate size beforehand, use `vec.reserve(capacity)` to pre-allocate memory.

#### Iterators Invalidation

Operations like `insert()` and `erase()` on `std::vector` can invalidate iterators and references to elements after the insertion/erasure point. Be careful when using iterators in loops that modify the vector.

#### `std::map` vs `std::unordered_map`

- Use `std::map` when you need elements to be sorted by key, or when keys are complex objects that don't have a hash function.

- Use `std::unordered_map` when average O(1) performance is critical and element order doesn't matter. Be aware of worst-case O(N) performance if hash collisions are frequent.

#### `std::set` vs `std::unordered_set`

- Similar to maps, use `std::set` for sorted unique elements, and `std::unordered_set` for faster average performance when order is not important.

#### Empty Stack/Queue Access

Accessing `top()` on an empty `std::stack` or `front()`/`back()` on an empty `std::queue` leads to undefined behavior. Always check `empty()` before accessing elements.

**Contest Programming Tips for STL Containers:**

1. **`std::vector`**** is your default dynamic array:** Use it instead of raw arrays unless there's a specific reason not to (e.g., fixed small size, very low-level memory control).

1. **`std::pair`**** is great for simple groupings:** Use it to return multiple values or store related data.

1. **Choose ****`std::map`**** or ****`std::unordered_map`**** wisely:** `unordered_map` is generally faster for lookups, but `map` keeps keys sorted. Know the difference and pick based on problem constraints and requirements.

1. **`std::set`**** and ****`std::unordered_set`**** for unique elements:** Use them to quickly check for existence or remove duplicates.

1. **`std::stack`**** for LIFO, ****`std::queue`**** for FIFO:** These are essential for problems involving specific order of processing (e.g., parsing, BFS/DFS).

1. **Always check ****`empty()`**** before ****`top()`****, ****`front()`****, ****`back()`****, or ****`pop()`** for stacks and queues.

1. **Familiarize yourself with common algorithms** that work with containers (e.g., `sort`, `reverse`, `find`, `min_element`, `max_element`).

Mastering STL containers is a game-changer in competitive programming. They provide robust, efficient, and well-tested implementations of common data structures, allowing you to focus on the problem logic rather than reimplementing basic structures.

---

## STL Utility Functions

The C++ Standard Library provides a rich set of utility functions, many of which are found in the `<algorithm>` and `<numeric>` headers. These functions operate on ranges of elements (often defined by iterators) and are incredibly useful for common tasks in competitive programming.

### General Utility Functions

#### `std::swap`

Exchanges the values of two variables. It's a fundamental operation used in many algorithms (e.g., sorting, partitioning).

```
#include <iostream>
#include <utility> // Required for std::swap
using namespace std;

int main() {
    int a = 10, b = 20;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;

    string s1 = "hello", s2 = "world";
    cout << "Before swap: s1 = " << s1 << ", s2 = " << s2 << endl;
    swap(s1, s2);
    cout << "After swap: s1 = " << s1 << ", s2 = " << s2 << endl;

    return 0;
}
```

**Sample Input/Output:**

```
Output:
Before swap: a = 10, b = 20
After swap: a = 20, b = 10
Before swap: s1 = hello, s2 = world
After swap: s1 = world, s2 = hello
```

#### `std::min` and `std::max`

Return the smaller or larger of two (or more) values. These are overloaded to work with initializer lists (C++11) for multiple arguments.

```
#include <iostream>
#include <algorithm> // Required for std::min, std::max
using namespace std;

int main() {
    int x = 15, y = 7;
    cout << "Min of " << x << " and " << y << ": " << min(x, y) << endl; // 7
    cout << "Max of " << x << " and " << y << ": " << max(x, y) << endl; // 15

    // With initializer list (C++11)
    cout << "Min of (3, 9, 1, 6): " << min({3, 9, 1, 6}) << endl; // 1
    cout << "Max of (3, 9, 1, 6): " << max({3, 9, 1, 6}) << endl; // 9

    return 0;
}
```

**Sample Input/Output:**

```
Output:
Min of 15 and 7: 7
Max of 15 and 7: 15
Min of (3, 9, 1, 6): 1
Max of (3, 9, 1, 6): 9
```

### Algorithms on Ranges

Many algorithms in `<algorithm>` operate on ranges defined by iterators (e.g., `begin()` and `end()` from containers).

#### `std::sort`

Sorts elements in a range in ascending order. For custom sorting, a comparison function (lambda or functor) can be provided.

```
#include <iostream>
#include <vector>
#include <algorithm> // Required for std::sort
using namespace std;

int main() {
    vector<int> vec = {5, 2, 8, 1, 9, 4};
    cout << "Original vector: ";
    for (int x : vec) cout << x << " ";
    cout << endl;

    sort(vec.begin(), vec.end()); // Sorts in ascending order
    cout << "Sorted vector: ";
    for (int x : vec) cout << x << " ";
    cout << endl;

    // Custom sort (descending order) using a lambda function
    sort(vec.begin(), vec.end(), [](int a, int b) { return a > b; });
    cout << "Sorted descending: ";
    for (int x : vec) cout << x << " ";
    cout << endl;

    return 0;
}
```

**Sample Input/Output:**

```
Output:
Original vector: 5 2 8 1 9 4 
Sorted vector: 1 2 4 5 8 9 
Sorted descending: 9 8 5 4 2 1 
```

#### `std::reverse`

Reverses the order of elements in a range.

```
#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // Required for std::reverse
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Original vector: ";
    for (int x : vec) cout << x << " ";
    cout << endl;

    reverse(vec.begin(), vec.end());
    cout << "Reversed vector: ";
    for (int x : vec) cout << x << " ";
    cout << endl;

    string s = "programming";
    cout << "Original string: " << s << endl;
    reverse(s.begin(), s.end());
    cout << "Reversed string: " << s << endl;

    return 0;
}
```

**Sample Input/Output:**

```
Output:
Original vector: 1 2 3 4 5 
Reversed vector: 5 4 3 2 1 
Original string: programming
Reversed string: gnimmargorp
```

#### `std::find`

Searches for the first occurrence of a value in a range. Returns an iterator to the element if found, otherwise `last` iterator.

```
#include <iostream>
#include <vector>
#include <algorithm> // Required for std::find
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};
    int target1 = 30;
    int target2 = 60;

    auto it1 = find(vec.begin(), vec.end(), target1);
    if (it1 != vec.end()) {
        cout << target1 << " found at index: " << distance(vec.begin(), it1) << endl;
    } else {
        cout << target1 << " not found." << endl;
    }

    auto it2 = find(vec.begin(), vec.end(), target2);
    if (it2 != vec.end()) {
        cout << target2 << " found at index: " << distance(vec.begin(), it2) << endl;
    } else {
        cout << target2 << " not found." << endl;
    }

    return 0;
}
```

**Sample Input/Output:**

```
Output:
30 found at index: 2
60 not found.
```

#### `std::count`

Counts the number of occurrences of a value in a range.

```
#include <iostream>
#include <vector>
#include <algorithm> // Required for std::count
using namespace std;

int main() {
    vector<int> vec = {1, 2, 2, 3, 2, 4, 5};
    int val = 2;
    int occurrences = count(vec.begin(), vec.end(), val);
    cout << val << " appears " << occurrences << " times." << endl; // 3

    string s = "banana";
    char ch = 'a';
    int char_occurrences = count(s.begin(), s.end(), ch);
    cout << ch << " appears " << char_occurrences << " times in \"" << s << "\"." << endl; // 3

    return 0;
}
```

**Sample Input/Output:**

```
Output:
2 appears 3 times.
a appears 3 times in "banana".
```

#### `std::min_element` and `std::max_element`

Return an iterator to the smallest or largest element in a range.

```
#include <iostream>
#include <vector>
#include <algorithm> // Required for std::min_element, std::max_element
using namespace std;

int main() {
    vector<int> vec = {5, 2, 8, 1, 9, 4};

    auto min_it = min_element(vec.begin(), vec.end());
    cout << "Smallest element: " << *min_it << endl; // 1

    auto max_it = max_element(vec.begin(), vec.end());
    cout << "Largest element: " << *max_it << endl; // 9

    return 0;
}
```

**Sample Input/Output:**

```
Output:
Smallest element: 1
Largest element: 9
```

### Character Handling Functions (from `<cctype>`)

These functions are useful for checking properties of characters.

| Function | Description | Example |
| --- | --- | --- |
| `isalpha(c)` | Checks if `c` is an alphabetic character. | `isalpha('A')` -> true |
| `isdigit(c)` | Checks if `c` is a digit (0-9). | `isdigit('7')` -> true |
| `isalnum(c)` | Checks if `c` is alphanumeric (letter or digit). | `isalnum('Z')` -> true, `isalnum('5')` -> true |
| `islower(c)` | Checks if `c` is a lowercase letter. | `islower('a')` -> true |
| `isupper(c)` | Checks if `c` is an uppercase letter. | `isupper('B')` -> true |
| `isspace(c)` | Checks if `c` is a whitespace character (space, tab, newline, etc.). | `isspace(' ')` -> true |
| `tolower(c)` | Converts `c` to lowercase. | `tolower('A')` -> 'a' |
| `toupper(c)` | Converts `c` to uppercase. | `toupper('b')` -> 'B' |

```
#include <iostream>
#include <cctype> // Required for character functions
using namespace std;

int main() {
    char ch1 = 'A', ch2 = '7', ch3 = '$', ch4 = ' ';

    cout << "Character: " << ch1 << endl;
    cout << "Is alphabetic? " << (bool)isalpha(ch1) << endl;
    cout << "Is digit? " << (bool)isdigit(ch1) << endl;
    cout << "Is alphanumeric? " << (bool)isalnum(ch1) << endl;
    cout << "Is uppercase? " << (bool)isupper(ch1) << endl;
    cout << "Lowercase: " << (char)tolower(ch1) << endl;

    cout << "\nCharacter: " << ch2 << endl;
    cout << "Is alphabetic? " << (bool)isalpha(ch2) << endl;
    cout << "Is digit? " << (bool)isdigit(ch2) << endl;
    cout << "Is alphanumeric? " << (bool)isalnum(ch2) << endl;

    cout << "\nCharacter: " << ch4 << endl;
    cout << "Is space? " << (bool)isspace(ch4) << endl;

    return 0;
}
```

**Sample Input/Output:**

```
Output:
Character: A
Is alphabetic? 1
Is digit? 0
Is alphanumeric? 1
Is uppercase? 1
Lowercase: a

Character: 7
Is alphabetic? 0
Is digit? 1
Is alphanumeric? 1

Character: 
Is space? 1
```

### String Conversion Functions

These functions allow conversion between numeric types and `std::string`.

#### `std::to_string`

Converts a numeric value to a `std::string`.

```
#include <iostream>
#include <string>
using namespace std;

int main() {
    int i = 123;
    double d = 45.67;
    long long ll = 9876543210LL;

    string s_i = to_string(i);
    string s_d = to_string(d);
    string s_ll = to_string(ll);

    cout << "Int to string: \"" << s_i << "\"" << endl;
    cout << "Double to string: \"" << s_d << "\"" << endl;
    cout << "Long long to string: \"" << s_ll << "\"" << endl;

    // Concatenate strings
    string combined = "Number: " + s_i;
    cout << combined << endl;

    return 0;
}
```

**Sample Input/Output:**

```
Output:
Int to string: "123"
Double to string: "45.670000"
Long long to string: "9876543210"
Number: 123
```

#### `std::stoi`, `std::stoll`, `std::stod`, etc.

Convert `std::string` to numeric types.

- `stoi(str)`: converts string to `int`

- `stoll(str)`: converts string to `long long`

- `stod(str)`: converts string to `double`

- `stof(str)`: converts string to `float`

```
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s_int = "12345";
    string s_double = "3.14159";
    string s_long_long = "987654321098765";
    string s_invalid = "abc";

    int i = stoi(s_int);
    double d = stod(s_double);
    long long ll = stoll(s_long_long);

    cout << "String \"" << s_int << "\" to int: " << i << endl;
    cout << "String \"" << s_double << "\" to double: " << d << endl;
    cout << "String \"" << s_long_long << "\" to long long: " << ll << endl;

    // Error handling for invalid conversions (using try-catch)
    try {
        int invalid_i = stoi(s_invalid);
        cout << "Converted invalid string: " << invalid_i << endl;
    } catch (const std::invalid_argument& e) {
        cout << "Error converting \"" << s_invalid << "\" to int: " << e.what() << endl;
    } catch (const std::out_of_range& e) {
        cout << "Error converting \"" << s_invalid << "\" to int (out of range): " << e.what() << endl;
    }

    return 0;
}
```

**Sample Input/Output:**

```
Output:
String "12345" to int: 12345
String "3.14159" to double: 3.14159
String "987654321098765" to long long: 987654321098765
Error converting "abc" to int: stoi
```

### Other Useful Functions and Concepts

#### `std::abs` (from `<cmath>` or `<cstdlib>`)

Returns the absolute value of a number. Overloaded for various numeric types.

```
#include <iostream>
#include <cmath> // For std::abs (for floating-point types)
#include <cstdlib> // For std::abs (for integer types)
using namespace std;

int main() {
    int i = -10;
    double d = -3.14;
    long long ll = -1234567890123LL;

    cout << "Absolute value of " << i << ": " << abs(i) << endl;
    cout << "Absolute value of " << d << ": " << abs(d) << endl;
    cout << "Absolute value of " << ll << ": " << abs(ll) << endl;

    return 0;
}
```

**Sample Input/Output:**

```
Output:
Absolute value of -10: 10
Absolute value of -3.14: 3.14
Absolute value of -1234567890123: 1234567890123
```

#### `std::pow` (from `<cmath>`)

Calculates `base` raised to the power of `exponent`.

```
#include <iostream>
#include <cmath> // Required for std::pow
using namespace std;

int main() {
    cout << "2^3 = " << pow(2, 3) << endl; // 8.0
    cout << "5^0 = " << pow(5, 0) << endl; // 1.0
    cout << "10^4 = " << pow(10, 4) << endl; // 10000.0
    cout << "2.5^2 = " << pow(2.5, 2) << endl; // 6.25

    return 0;
}
```

**Sample Input/Output:**

```
Output:
2^3 = 8
5^0 = 1
10^4 = 10000
2.5^2 = 6.25
```

#### `std::sqrt` (from `<cmath>`)

Calculates the square root of a number.

```
#include <iostream>
#include <cmath> // Required for std::sqrt
#include <iomanip> // For setprecision
using namespace std;

int main() {
    cout << fixed << setprecision(5);
    cout << "sqrt(9) = " << sqrt(9) << endl; // 3.00000
    cout << "sqrt(2) = " << sqrt(2) << endl; // 1.41421
    cout << "sqrt(16.81) = " << sqrt(16.81) << endl; // 4.10000

    return 0;
}
```

**Sample Input/Output:**

```
Output:
sqrt(9) = 3.00000
sqrt(2) = 1.41421
sqrt(16.81) = 4.10000
```

#### `std::gcd` and `std::lcm` (from `<numeric>` - C++17)

Calculate the greatest common divisor and least common multiple of two integers.

```
#include <iostream>
#include <numeric> // Required for std::gcd, std::lcm (C++17)
using namespace std;

int main() {
    int a = 48, b = 18;
    cout << "GCD of " << a << " and " << b << ": " << gcd(a, b) << endl; // 6
    cout << "LCM of " << a << " and " << b << ": " << lcm(a, b) << endl; // 144

    return 0;
}
```

**Sample Input/Output:**

```
Output:
GCD of 48 and 18: 6
LCM of 48 and 18: 144
```

### Practical Examples and Contest Applications

#### Problem: Convert a string of digits to an integer sum

```
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "12345";
    int sum = 0;
    for (char c : s) {
        if (isdigit(c)) {
            sum += (c - '0'); // Convert char digit to int
        }
    }
    cout << "Sum of digits in \"" << s << "\": " << sum << endl; // 15

    return 0;
}
```

**Sample Input/Output:**

```
Output:
Sum of digits in "12345": 15
```

#### Problem: Check if a string contains only digits

```
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isNumeric(const string& s) {
    for (char c : s) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return !s.empty(); // An empty string is not numeric
}

int main() {
    string s1 = "12345";
    string s2 = "123a45";
    string s3 = "";

    cout << "\"" << s1 << "\" is numeric: " << (isNumeric(s1) ? "Yes" : "No") << endl;
    cout << "\"" << s2 << "\" is numeric: " << (isNumeric(s2) ? "Yes" : "No") << endl;
    cout << "\"" << s3 << "\" is numeric: " << (isNumeric(s3) ? "Yes" : "No") << endl;

    return 0;
}
```

**Sample Input/Output:**

```
Output:
"12345" is numeric: Yes
"123a45" is numeric: No
"" is numeric: No
```

### Common Pitfalls and Best Practices

#### Including Necessary Headers

Always remember to include the correct headers for the functions you use (e.g., `<algorithm>` for `sort`, `<string>` for `to_string`, `<cctype>` for `isdigit`).

#### Iterators with Algorithms

Many STL algorithms work with iterators. Understand that `begin()` gives an iterator to the first element and `end()` gives an iterator to one past the last element. Ranges are typically `[first, last)`, meaning `first` is included, `last` is excluded.

#### `std::stoi` and Error Handling

`std::stoi` (and similar functions) throw exceptions (`std::invalid_argument` or `std::out_of_range`) if the string cannot be converted. In competitive programming, you might sometimes assume valid input or use `try-catch` blocks if robustness is required.

#### Character Conversion (`char` to `int`)

When converting a `char` digit (e.g., `'5'`) to its integer value (e.g., `5`), subtract the ASCII value of `'0'`: `int_val = char_digit - '0';`.

**Contest Programming Tips for STL Utility Functions:**

1. **Don't reinvent the wheel:** Before writing your own sorting, searching, or string manipulation logic, check if an STL algorithm or utility function already exists. It's almost always more efficient and less error-prone.

1. **Master ****`sort`**** and ****`reverse`****:** These are used constantly. Know how to use them with different containers and how to provide custom comparison functions.

1. **Use ****`min`**** and ****`max`**** for simple comparisons.**

1. **Leverage ****`<cctype>`**** functions** for character validation and conversion, especially in string processing problems.

1. **Know ****`to_string`**** and ****`stoi`**** (and variants)** for quick conversions between numbers and strings.

1. **Be aware of ****`std::abs`****, ****`std::pow`****, ****`std::sqrt`** for mathematical operations.

1. **For C++17 and later, ****`std::gcd`**** and ****`std::lcm`** are very convenient for number theory problems.

These utility functions are your best friends in competitive programming. They allow you to write concise, efficient, and correct code quickly, freeing up your time to focus on the core logic of the problem.

---

## Contest Programming Tips

Competitive programming is not just about knowing the language; it's also about applying that knowledge efficiently under time pressure. Here are some essential tips to help you succeed in contests:

### 1. Standard Template Library (STL) is Your Best Friend

- **Use ****`std::vector`**** instead of raw arrays:** Safer, more flexible, and handles memory automatically. `std::vector<int> arr(N);`

- **Leverage ****`std::map`**** and ****`std::set`**** (or their ****`unordered`**** variants):** For efficient key-value storage or unique element tracking. Remember `unordered_map`/`unordered_set` are generally faster (average O(1)) but don't maintain order.

- **Utilize ****`std::stack`**** and ****`std::queue`****:** For problems requiring LIFO/FIFO behavior (e.g., BFS/DFS, expression parsing).

- **Don't reinvent the wheel:** Use `std::sort`, `std::reverse`, `std::min`, `std::max`, `std::find`, `std::count`, etc. from `<algorithm>` and `<numeric>`. They are highly optimized.

### 2. Fast I/O (Input/Output)

Standard C++ I/O (`cin`/`cout`) can be slow for large inputs, leading to Time Limit Exceeded (TLE). For competitive programming, it's common practice to speed them up:

```
#include <iostream>

int main() {
    // These two lines speed up cin/cout significantly
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    // Your code here
    int a, b;
    std::cin >> a >> b;
    std::cout << a + b << std::endl;
    
    return 0;
}
```

- `std::ios_base::sync_with_stdio(false);`: Unties C++ streams from C standard I/O. This means `cin`/`cout` will no longer synchronize with `printf`/`scanf`, making them faster.

- `std::cin.tie(NULL);`: Unties `cin` from `cout`. By default, `cin` flushes `cout` before reading input. This line prevents that, further speeding up input operations.

### 3. Use `long long` for Large Numbers

- Always consider potential integer overflow. If intermediate or final results might exceed `2 * 10^9` (the approximate limit of `int`), use `long long`.

- Remember to use `LL` suffix for `long long` literals (e.g., `10000000000LL`).

### 4. Precision for Floating-Point Numbers

- Avoid direct equality comparisons (`==`) with `float` or `double` due to precision issues. Instead, check if the absolute difference is less than a small epsilon value.

```
#include <cmath> // For std::abs
#include <iomanip> // For std::setprecision
#include <iostream>

int main() {
    double a = 0.1 + 0.2;
    double b = 0.3;
    double epsilon = 1e-9; // A small tolerance value

    if (std::abs(a - b) < epsilon) {
        std::cout << "a and b are approximately equal." << std::endl;
    } else {
        std::cout << "a and b are different." << std::endl;
    }
    
    std::cout << std::fixed << std::setprecision(17) << a << std::endl;
    
    return 0;
}
```

### 5. Be Mindful of Time and Memory Limits

- **Time Complexity:** Understand the time complexity of your algorithms (e.g., O(N), O(N log N), O(N^2)). For N up to 10^5, O(N log N) is usually acceptable. For N up to 1000, O(N^2) might pass. For N up to 100, O(N^3) might pass. Always check problem constraints.

- **Memory Limits:** Be aware of how much memory your data structures consume. Large arrays or vectors can quickly exceed memory limits.

### 6. Use `const` Correctly

- Use `const` for variables whose values should not change. This helps prevent accidental modifications and can sometimes aid compiler optimizations.

- For function parameters, use `const` references (`const Type&`) for large objects that are passed as input but not modified.

### 7. Debugging Techniques

- **Print statements:** The simplest and often most effective way to debug. Print intermediate values to understand program flow.

- **Small test cases:** Create and test your code with small, simple inputs for which you know the expected output.

- **Edge cases:** Test with minimum/maximum values, empty inputs, or other boundary conditions.

### 8. Practice, Practice, Practice

- The best way to improve is to solve many problems. Start with easier problems and gradually move to harder ones.

- Participate in online contests regularly to get used to the time pressure.

- Review solutions of problems you couldn't solve. Learn from others' approaches.

### 9. Code Structure and Templates

- Develop a personal template with common includes, fast I/O setup, and frequently used functions/macros. This saves time during contests.

- Use meaningful variable names, but don't overdo it. In contests, brevity is sometimes preferred for speed, but clarity is still important.

### 10. Read Problem Statements Carefully

- Understand all constraints (time, memory, input ranges).

- Pay attention to input/output formats.

- Don't make assumptions that are not explicitly stated.

By internalizing these tips, you'll not only write better C++ code but also become a more effective competitive programmer.

---

## Quick Reference

This section provides a concise summary of frequently used syntax, functions, and concepts for quick lookup during a contest.

### Basic Syntax & Structure

```
#include <iostream> // For input/output operations (cin, cout)
#include <vector>   // Example for std::vector
#include <string>   // Example for std::string
#include <algorithm> // Example for std::sort, std::min, std::max

// Fast I/O setup (put at the beginning of main)
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}

int main() {
    fast_io(); // Call fast I/O function

    // Variable declaration
    int num = 10;
    long long big_num = 1234567890123LL;
    double pi = 3.14159;
    char grade = 'A';
    bool is_valid = true;

    // Input/Output
    std::cin >> num; // Read integer
    std::cout << "Value: " << num << std::endl; // Print integer with newline
    std::string s;
    std::cin >> s; // Read word
    std::getline(std::cin, s); // Read line with spaces

    // Conditional Statements
    if (num > 0) {
        // ...
    } else if (num < 0) {
        // ...
    } else {
        // ...
    }

    switch (grade) {
        case 'A': /* ... */ break;
        default: /* ... */ break;
    }

    // Ternary Operator
    int result = (num % 2 == 0) ? 0 : 1;

    // Loops
    for (int i = 0; i < 10; ++i) { /* ... */ }
    for (int x : some_vector) { /* ... */ }
    int i = 0;
    while (i < 5) { /* ... */ ++i; }

    // Arrays
    int arr[5] = {1, 2, 3, 4, 5};
    int matrix[2][2] = {{1, 2}, {3, 4}};

    // Functions
    // int sum(int a, int b) { return a + b; }

    return 0;
}
```

### Essential STL Containers

| Container | Header | Description | Common Operations |
| --- | --- | --- | --- |
| `std::vector` | `<vector>` | Dynamic array. Fast random access. | `push_back()`, `pop_back()`, `size()`, `empty()`, `operator[]`, `begin()`, `end()`, `insert()`, `erase()` |
| `std::pair` | `<utility>` | Stores two heterogeneous values. | `first`, `second`, `make_pair()` |
| `std::map` | `<map>` | Sorted key-value pairs (unique keys). O(log N) operations. | `operator[]`, `insert()`, `erase()`, `find()`, `count()` |
| `std::set` | `<set>` | Sorted unique elements. O(log N) operations. | `insert()`, `erase()`, `find()`, `count()` |
| `std::unordered_map` | `<unordered_map>` | Unsorted key-value pairs (unique keys). Average O(1) operations. | `operator[]`, `insert()`, `erase()`, `find()`, `count()` |
| `std::unordered_set` | `<unordered_set>` | Unsorted unique elements. Average O(1) operations. | `insert()`, `erase()`, `find()`, `count()` |
| `std::stack` | `<stack>` | LIFO adapter. | `push()`, `pop()`, `top()`, `empty()`, `size()` |
| `std::queue` | `<queue>` | FIFO adapter. | `push()`, `pop()`, `front()`, `back()`, `empty()`, `size()` |

### Common STL Algorithms & Utility Functions

| Function | Header | Description | Example |
| --- | --- | --- | --- |
| `std::swap(a, b)` | `<utility>` | Exchanges values of `a` and `b`. | `swap(x, y);` |
| `std::min(a, b)` | `<algorithm>` | Returns the smaller of `a` and `b`. | `min(x, y); min({1,2,3});` |
| `std::max(a, b)` | `<algorithm>` | Returns the larger of `a` and `b`. | `max(x, y); max({1,2,3});` |
| `std::sort(b, e)` | `<algorithm>` | Sorts elements in range `[b, e)`. | `sort(vec.begin(), vec.end());` |
| `std::reverse(b, e)` | `<algorithm>` | Reverses elements in range `[b, e)`. | `reverse(vec.begin(), vec.end());` |
| `std::find(b, e, val)` | `<algorithm>` | Finds first occurrence of `val` in `[b, e)`. | `find(vec.begin(), vec.end(), 5);` |
| `std::count(b, e, val)` | `<algorithm>` | Counts occurrences of `val` in `[b, e)`. | `count(vec.begin(), vec.end(), 5);` |
| `std::min_element(b, e)` | `<algorithm>` | Iterator to smallest element in `[b, e)`. | `*min_element(vec.begin(), vec.end());` |
| `std::max_element(b, e)` | `<algorithm>` | Iterator to largest element in `[b, e)`. | `*max_element(vec.begin(), vec.end());` |
| `std::abs(x)` | `<cmath>` / `<cstdlib>` | Absolute value. | `abs(-5);` |
| `std::pow(b, e)` | `<cmath>` | `b` raised to power `e`. | `pow(2, 3);` |
| `std::sqrt(x)` | `<cmath>` | Square root. | `sqrt(9);` |
| `std::gcd(a, b)` | `<numeric>` (C++17) | Greatest Common Divisor. | `gcd(12, 18);` |
| `std::lcm(a, b)` | `<numeric>` (C++17) | Least Common Multiple. | `lcm(12, 18);` |

### Character Functions (`<cctype>`)

| Function | Description | Example |
|---|---|---|---|
| `isalpha(c)` | Is `c` an alphabet? | `isalpha('A')` |
| `isdigit(c)` | Is `c` a digit (0-9)? | `isdigit('7')` |
| `isalnum(c)` | Is `c` alphanumeric? | `isalnum('Z')` |
| `islower(c)` | Is `c` lowercase? | `islower('a')` |
| `isupper(c)` | Is `c` uppercase? | `isupper('B')` |
| `isspace(c)` | Is `c` whitespace? | `isspace(' ')` |
| `tolower(c)` | Convert `c` to lowercase. | `tolower('A')` |
| `toupper(c)` | Convert `c` to uppercase. | `toupper('b')` |

### String Conversion Functions (`<string>`)

| Function | Description | Example |
|---|---|---|---|
| `std::to_string(val)` | Converts numeric `val` to `std::string`. | `to_string(123);` |
| `std::stoi(str)` | Converts `str` to `int`. | `stoi("123");` |
| `std::stoll(str)` | Converts `str` to `long long`. | `stoll("1234567890123");` |
| `std::stod(str)` | Converts `str` to `double`. | `stod("3.14");` |

### Time Complexity Cheat Sheet

| Complexity | Description | Typical Operations | Max N (approx.) for 1 sec | Example Algorithm |
| --- | --- | --- | --- | --- |
| O(1) | Constant | Accessing array element, stack/queue push/pop | Very large | Hash table lookup |
| O(log N) | Logarithmic | Binary search, map/set operations | 10^18 | Binary search |
| O(N) | Linear | Iterating through array/vector, string traversal | 10^8 | Linear search, sum of array |
| O(N log N) | Linearithmic | Efficient sorting, some divide & conquer | 10^6 | `std::sort`, Merge Sort |
| O(N^2) | Quadratic | Nested loops, bubble sort | 5000 | Simple graph traversal, selection sort |
| O(N^3) | Cubic | Triple nested loops, matrix multiplication | 500 | Floyd-Warshall (all-pairs shortest path) |
| O(2^N) | Exponential | Brute force for small N | 20-25 | Recursive Fibonacci (naive) |
| O(N!) | Factorial | Permutations | 10-12 | Traveling Salesperson (brute force) |

---

