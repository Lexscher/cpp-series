# Control Flow (Part 1) - Conditionals

When making a program, we may want to perform an action based on a specific condition.

This is actually something we do everyday!

- **_"If I'm hungry, then I will eat a slice of pizza."_**

- **_"If I am tired, then I will go to sleep. If I am <u>not</u> tired then I will <u>not</u> go to sleep."_**

This kind of logic is also very common in writing programs. We're be making conditional statements that tell the program that `if <something is true> then <perform one action> otherwise <perform a different action>`.

 Before we get into the main examples, let me share some of the operators that we'll be using.

## Relational Operators

| symbol | name                         | example  |
| ------ | ---------------------------- | -------- |
| **<**  | **Less Than**                | `a < b`  |
| **>**  | **Greater Than**             | `a > b`  |
| **==** | **Equal To**                 | `a == b` |
| **<=** | **Less Than or Equal To**    | `a <= b` |
| **>=** | **Greater Than or Equal To** | `a >= b` |
| **!=** | **Not Equal To**             | `a != b` |

## Conditional Operators

| symbol   | name    | example                |
| -------- | ------- | ----------             |
| **&&**   | **And** | `(a > b) && (b > c)`   |
| **\|\|** | **Or**  | `(a > b) \|\| (b > c)` |
| **!**    | **Not** | `!(a > b)`             |
<!-- COME BACK HERE -->

## If Statements

If statements are great for handling this kind of logic. The item(s) we put in the clam shells after the word `if` gets evaluated.
- ```c++
   if (/* thing we're testing for */)
  ```
If that statement evaluates to true, then we can run the code inside of the corresponding block.
- ```c++
   if (/* thing we're testing for is true */) {
      // then run this code
   }
  ```

Here's a live example.

```c++
int a = 14;
int b = 25;
if (a > b) {
   cout << a << " is greater than " << b << ".\n";
} else if (a < b) {
   cout << a << " is less than " << b << ".\n";
} else {
   cout << a << " is equal to " << b << ".\n";
}

// => 14 is less than 25.
```

this program compares two numbers and prints a message that tells us which number is larger, or if the two numbers are the same.

If statements can also be written without the curly braces:

```c++
int a = 14;
int b = 25;
if (a > b)
   cout << a << " is greater than " << b << ".\n";
else if (a < b)
   cout << a << " is less than " << b << ".\n";
else
   cout << a << " is equal to " << b << ".\n";

// => 14 is less than 25.
```

## Switch Statements

We can also use switch statements instead of if statements. These are good when we have a lot of different cases to handle.

Imagine we're creating a game, and we want to move the character based on what key the user pressed.

```c++
string direction;
char key;
cout << "Your turn, press a key to make your next move! "
cin >> key;

switch (key) {
   case 'W' : direction = "Up";
   break;
   case 'A' : direction = "Left";
   break;
   case 'S' : direction = "Down";
   break;
   case 'D' : direction = "Right";
   break;
   default: direction = "invalid direction";
   break;
}

std::cout << "You moved " << direction + "\n";
```

The switch statement always has a default case that we can use to handle anything we didn't specify. We'll build on this a bit more in the next chapter.

**[prev](../02_Types) | [home](../README.md) <!-- | [next](../04_Loops) -->**
