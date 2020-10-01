# The Structure of a C++ Program

**[Check out the video if you haven't already](.)**

## Comments

In any project, no matter what language we use, we may need to add instructions or notes to make our program easier for others to understand.
Writing comments in our code is an easy way to do this. Comments don't get read by the compiler, so they're specifically meant to add that extra level of clarity to our code.

### different ways to comment our code

#### **Multi-line Comments:**

```c++
/***
 * Multi-line comments are great for adding documentation to files
 * special instructions for handling the code below and/or the repository may be added here
 * /
```

#### **Single-line Comments:**

```c++
// Single-line comments are great for adding clarity to a line of code or function declaration
```

**_Note:_** While comments do help add clarity to our code, if your variable and function names are descriptive enough, then you won't have to write excessive comments in your code. Too many comments may end up looking a _tad_ messy...

## Headers and System resources for Input and Output

You may have noticed this line of code in the program, somewhere above the declaration of the `main` function:

```c++
#include <iostream>
```

This is actually a header that gives us access to the `Standard input/output stream`. This C++ library gives us access to specific class templates and functions, which allows us to read and write data to our files.

Two of the streams we'll use most in this series is:

1. cin lets us get data/user input
2. cout lets us print/display results

```c++
// This code is inside the main() function
int num;
std::cin >> num;
std::cout << num << "\n";
```

### **namespaces**

If you get tired of writng `std::cin` or `std::cout` all the time, then you can declare a **namespace**.

Example:

```c++
using namespace std;
```

Adding the line from the example above before the `main()` function will our program easy access to the functions and variables inside of the standard library (`std`) namespace.

Now we can re-write the lines above to simply be:

```c++
// This code is inside the main() function
int num;
cin >> num;
cout << num << "\n";
```

## The Main Function

This is the method that is called when we actually run our c++ program.

Body of the `main()` function has the following:

- statements/logic
- variable declarations
- final return statement `return 0;`

### **statements and/or logic**

#### **arithmetic operators**

| symbol | use                                        | example |
| ------ | ------------------------------------------ | ------- |
| **+**  | **Add** two items together                 | `a + b` |
| **-**  | **Subtract** one item from another         | `a - b` |
| **\*** | **Multiply** two items                     | `a * b` |
| **/**  | **Divide** one item by another             | `a / b` |
| **%**  | **Modulus** returns the division remainder | `a % b` |
| **++** | **Increment** a number by one              | `a++`   |
| **--** | **Decrement** a number by one              | `a--`   |

### **variable declarations/declarative statements**

When programming, we may want to save data/information to a variable so that we may reference it later. In fact, we did that earlier to save a user's input so that we could print it later.

You've probably seen this before this series as well, we do this in math:

```math
x = 3
```

In this case, we assign the value `3` the variable named `x`

We can do the same thing in c++, however, we need to declare what **type** the variable is.

```c++
int x = 3;
```

Just like that! Also, _check out that semicolon at the end:_ `;`

In c++, we always need a **semicolon** at the end of a statement, otherwise we'll end up with errors when we try to compile our program.

As for types, we'll save them for the next chapter.

**[prev](../00_HelloWorld) | [home](../) <!-- | [next](../02_Types) -->**
