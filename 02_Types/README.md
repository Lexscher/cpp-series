# Types in C++

## Speaking of Memory

Remember our talk in the first part of the series (Chapter 00)?
It may not have seemed like it at the time, but I had a good reason for sharing some information about how computers work. If we don't have enough memory, then we might not be able to complete cetain tasks/processes.

### **How we measure memory**

Memory is measured in **Bytes**.

You may be thinking _"Hmm... But how big is that?"_

A byte is the amount of memory required to represent a sincle character (i.e. 'Z' or 'a'). You can even think about all those characters on your keyboard. _"Well, how is a byte measured?"_

#### **One Byte contains 8 Bits. A bit is the smallest unit of measurement for memory. These are the 1's and 0's, or that our computers actually understand!**

Each character has an **ASCII value**, which is it's unique numerical value. These standard values range from _0 - 127_, and extended values are from _128 - 255_.

Here's a few examples:

| Character | ASCII Value | Byte Size | Bit Sequence |
| --------- | ----------- | --------- | ------------ |
| **null**  | **000**     | **1**     | `00000000`   |
| **!**     | **033**     | **1**     | `00100001`   |
| **A**     | **065**     | **1**     | `01000001`   |
| **a**     | **097**     | **1**     | `01100001`   |

You can find more of these on any ASCII character table **[on the web](https://www.ascii-code.com/)**

#### **Here's a chart that should really help you understand how small a byte is**

If we remember that **1 Byte is equal to 8 Bits**:

| measurement | Binary value            | Decimal value           |
| ----------- | ----------------------- | ----------------------- |
| 1 Kilobyte  | 1,024 Bytes             | 1,000 Bytes             |
| 1 Megabyte  | 1,024<sup>2</sup> Bytes | 1,000<sup>2</sup> Bytes |
| 1 Gigabyte  | 1,024<sup>3</sup> Bytes | 1,000<sup>3</sup> Bytes |
| 1 Terabyte  | 1,024<sup>4</sup> Bytes | 1,000<sup>4</sup> Bytes |
| 1 Petabyte  | 1,024<sup>5</sup> Bytes | 1,000<sup>5</sup> Bytes |
| 1 Exabyte   | 1,024<sup>6</sup> Bytes | 1,000<sup>6</sup> Bytes |
| 1 Zettabyte | 1,024<sup>7</sup> Bytes | 1,000<sup>7</sup> Bytes |
| 1 Yottabyte | 1,024<sup>8</sup> Bytes | 1,000<sup>8</sup> Bytes |

Pretty cool, right?

<!-- If you're wondering why I'm showing both Binary and Decimal values, that's okay! This got me too, because in my college classes I've only seen the binary values haha.

I found a great answer to this question on Quora: _**"Is 1 GB equal to 1024 MB or 1000 MB?"**_

**[Taciano Dreckmann Perez](https://www.quora.com/profile/Taciano-Dreckmann-Perez), a Persistent Memory researcher's answer: https://qr.ae/pNPRyF** -->

### **Re-visiting Variables**

_This was breifly mentioned towards the end of the previous chapter._

When we create a variable, we're making an association with a location in memory. We can then use that memory location to store data.

Remember, in C++ when declaring a variable, we must also say what type this variable is. This way our program can determine how much space to put aside for that variable.

## Types

- Integer (int) - These store whole numbers and uses about 4 bytes of memory space. The numbers range from **-2147483647** to **2147483647**. Example:

  - ```c++
    int a = 1080;
    ```

- Floating Point (float) - These also use about 4 bytes of memory space. This is different from Integer because it can store decimal values at 32 bit precision. Example:

  - ```c++
    float pi = 3.1415926;
    ```

- Double Floating Point (double) - These can use about 8 bytes of memory and stores decimal values at 64 bit precision. Example:

  - ```c++
    double pi = 3.14159265358979;
    ```

- Boolean (bool) - These store True/False values. Example:

  - ```c++
    bool hungry = true;
    ```

- Character (char) - These can use about 1 byte of memory, and store actual characters. They range from **0** to **255**. Example:

  - ```c++
    char initial = 'A';
    ```

- void - This means something has no value. It's normally used when you have a \*_function_ that doesn't return anything.

  - ```c++
    void greeting(){
      std::cout << "Hello!\n";
    }
    ```

- Wide Character (wchar_t) - This is related to `char`, but at least double it's size (normally 2 - 4 bytes). Example:

  - ```c++
    wchar_t hello_world_in_russian[] = L"Привет мир\n";
    ```

- String (std::string) - This is actually a collection of characters. Example:

  - ```c++
    std::string full_name = "John Jacob Jingleheimer Schmidt";
    ```

**[prev](../01_Structure) | [home](../README.md) <!-- | [next](../03_Conditionals) -->**
