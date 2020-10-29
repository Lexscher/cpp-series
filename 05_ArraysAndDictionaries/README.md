# Basic Data Structures

We've made it this far, so it's time to start learning about some basic data structures.
Not basic in that way! These are the data structures that you'll see being used the most.

Our focus is on Arrays and Dictionaries because when programming, there may be times where we want to store a collection of data that we'd like to use later.

## **Arrays vs Vectors**

### _Arrays_

Arrays allow us to store data in groups of adjoining locations in memory. This makes it easy to collect and access information.

There are a few different ways to declare an array:

- ```c++
    // static implementation an array that holds the grades of 10 students
    int grades[10];
    // we can assign a value to the first index of the array like this
    grades[0] = 86;
  ```

If we want to, we can populate the array with data

- ```c++
    int grades[] = { 86, 78, 95, 99, 64, 72, 92, 83, 77, 84 };
  ```

Arrays can also be declared dynamically:

- ```c++
      // dynamic implement an array that holds the grades of 10 students
      int* grades = new int [10];
  ```

In the code snippet above, we:

- allocated the space for 10 elements in memory

- created a pointer, `grades`, which points to the first item in that block of 10 elements.

_don't worry, we'll dive into pointers in the next couple of chapters_

Arrays are zero indexed, so the first element in an array can be accessed at index zero

```c++
cout << grade[0] << endl; // => 86
```

Accessing an item in an array by index is a constant-time look up - `Big O: O(1)`

One thing to keep in mind: in c++, the size of an array is fixed.

### _Vectors_

The vector is a template class that's unique to c++. Vectors implement the list interface. Unlike arrays, vectors are resizable -- so as we add or remove elements the vector will either grow or shrink.

This is possible because vectors are stored in heap memory, which supports dynamic memory allocation.

Here's how we can create a new vector

```c++
vector<int> grades;
```

If we want to add items to the `grades` vector, we can do somethig like this

```c++
cout << "Enter ten grades: \n";
for(int i = 0; i < 10; i++) {
   cin >> int grade;
   grades.push_back(grade);
}
```

Then we can print the grades to our terminal

```c++
cout << "These are the grades got your class: ";
for(auto i = grades.begin(); i != grades.end(); ++i)
   cout << *i << " ";
```

## **Dictionaries / Hashes / associative containers**

These are associative containers that allow us to store key-value pairs.

C++ Has many implementations

### **_Unordered and Ordered_**

All items in the **unordered** implementation are placed randomly, and accessing a value in the **unordered** implementation by key normally has a constant-time lookup - `Big O: O(1)`, but it is possible for this to have a linear-time lookup - `Big O: O(n)` if there are too many collisions.
**_[Read more](https://stackoverflow.com/questions/21518704/how-does-c-stl-unordered-map-resolve-collisions/21519560#21519560)_**.

All items in the **ordered** implementation are sorted, and accessing a value in the **ordered** implementation by key has a logarithmic-time lookup - `Big O: O(log n)`

breif overview:

| implementation         | description                                                                                  | Sorted | Big O for lookup |
| ---------------------- | -------------------------------------------------------------------------------------------- | ------ | ---------------- |
| **unordered_set**      | Stores unique values that can be removed or added. Values can NOT be modified.               | NO     | O(1) or O(n)     |
| **set**                | Stores unique values that can be removed or added. Values can NOT be modified.               | YES    | O(log n)         |
| **unordered_multiset** | Stores values that can be removed or added. Values can NOT be modified.                      | NO     | O(1) or O(n)     |
| **multiset**           | Stores values that can be removed or added. Values can NOT be modified.                      | YES    | O(log n)         |
| **unordered_map**      | Stores key-value pairs that can be removed or added. Keys are unique. Values can be updated. | NO     | O(1) or O(n)     |
| **map**                | Stores key-value pairs that can be removed or added. Keys are unique. Values can be updated. | YES    | O(log n)         |
| **unordered_multimap** | Stores key-value pairs that can be removed or added. Duplicate keys can be added.            | NO     | O(1) or O(n)     |
| **multimap**           | Stores key-value pairs that can be removed or added. Duplicate keys can be added.            | YES    | O(log n)         |

#### Here's an example of how we can use an unordered map:

initialize an unordered map that holds a zipcode and its temperature in fahrenheit

```c++
   unordered_map<int, int> weather_map;

   weather_map[10023] = 51;
   weather_map[94043] = 43;
   weather_map[37204] = 69;
   weather_map[11215] = 52;
   weather_map[32830] = 83;

   int my_zipcode = 94043;

   cout << "It's " << weather_map.at(my_zipcode) << "°F over here!\n";
   // => It's 43°F over here!
```

**[prev](../04_Loops) | [home](../README.md) <!-- | [next](../06_Functions) -->**
