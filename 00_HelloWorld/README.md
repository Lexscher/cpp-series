# Hello World

**[Check out the video if you haven't already](https://youtu.be/crYV_y3BwT4)**

We'll breifly go over the parts of a computer, some history on programminig languages, then write our first c++ program!

## Parts of the Computer

### **Motherboard**

This is like the "heart" of the computer. All the parts in the computer communicate with eachother by connecting to this circuit board. This normally holds many subunits, including the **CPU**.

### **Central Processinig Unit (CPU)**

This is the "brain" of the computer. Responsable for handling the bulk of our processes/calculations.

### **Memory**

When working with computers, we have to allocate space to store/save different bits of data. Because there are different ways we want to store and/or access this information, there are different subunits for each usecase.

- **Random Access Memory (RAM)** - This handles all the information and data that is actively being used. _If you're ever unsure of what's running behind the scenes on your computer, you can always check your Activity Montor._

- **Read Only Memory (ROM)** - Stores the Basic Input Output System (BOIS). The BOIS contains low level code/firmware that runs when we turn on our computer.

### **Storage and Hard Drives**

This is the digital media and computing hardware that's responsible for permanent and temporary storage of data, files and information.

Examples:

- **Hard Disk Drive (HDD)** - Uses at least one rotating disc, and depends on magnetic storage. *_Cheaper than its SSD equivalent_.

- **Solid-State Drive (SSD)** - Stores data in flash memory (Like what's used in a USB flash drive). *_Known for being smaller, and having faster read and write access than its HDD counterpart_.

## Programming Languages

### What is Machine Language?

How do we communicate with these crazy machines? By writing code!

Unfortunately, computers can only understand **machine language**, not the spoken languages we use to communicate with eachother.

Take a look at a simple "Hello, World!" application in machine code:

_**[source](https://stackoverflow.com/questions/5267988/how-to-write-and-execute-pure-machine-code-manually-without-containers-like-exe)**_

```m

b8   21 0a 00 00     #moving "!\n" into eax
a3   0c 10 00 06     #moving eax into first memory location
b8   6f 72 6c 64     #moving "orld" into eax
a3   08 10 00 06     #moving eax into next memory location
b8   6f 2c 20 57     #moving "o, W" into eax
a3   04 10 00 06     #moving eax into next memory location
b8   48 65 6c 6c     #moving "Hell" into eax
a3   00 10 00 06     #moving eax into next memory location

b9   00 10 00 06     #moving pointer to start of memory location into ecx
ba   10 00 00 00     #moving string size into edx
bb   01 00 00 00     #moving "stdout" number to ebx
b8   04 00 00 00     #moving "print out" syscall number to eax
cd   80              #calling the linux kernel to execute our print to stdout
b8   01 00 00 00     #moving "sys_exit" call number to eax
cd   80              #executing it via linux sys_call
```

Not so simple, right?

Lucky for us, great minds have been able to create more and more programming languages (**like C/C++ and Java**) that we can read and write, which then gets compiled into the code that machines can understand.

**[Home](../README.md) <!-- | [next](../01_Structure) -->**
