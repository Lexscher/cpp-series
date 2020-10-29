# Control Flow (Part 2) - Loops

Now let's say we want to perform an action a certain amount of times?

We can use loops to help us perform simple tasks x times to get our desired output.

Let me give you an example:

<img src="./assets/Unella-the-Shame-Nun.png" alt="image of Unella the shame Nun"/>


```c++
std::cout << "Shame!\n";
std::cout << "Shame!\n";
std::cout << "Shame!\n";
std::cout << "Shame!\n";
std::cout << "Shame!\n";
std::cout << "Shame!\n";
std::cout << "Shame!\n";
std::cout << "Shame!\n";
std::cout << "Shame!\n";
std::cout << "Shame!\n";
std::cout << "Shame!\n";
```

This code prints out `Shame!` ten times, each on a new line. Awesome, right? but typing all this out can be quite bothersome. This doesn't only take up more of our time, but it makes our code base a lot busier than it needs to be.

We can use loops to complete a lot of repetitive tasks for us!

## While Loops

```c++
int i = 0;
while (i < 10){
    std::cout << "Shame!\n";
    i++;
}
```

It's very easy to forget to increment, and if we do that we'll end up with an infinite loop! In the worst cases, an infinite loop can totally crash your program or computer, so be careful!

While loops don't have to be used with just numbers! We can test for specific values as well. Let's take a look at that game logic from the previous chapter. 

Remember how we had the default case handling any key that wasn't `W`, `A`, `S`, or `D`? 

We can actually use a while loop to keep asking for user input until they press a valid key:

```c++
string direction = "invalid direction";
char key;
cout << "Your turn, press a key to make your next move! "
cin >> key;

while (direction == "invalid direction") {
    switch (key) {
        case 'W' : direction = "Up";
        break;
        case 'A' : direction = "Left";
        break;
        case 'S' : direction = "Down";
        break;
        case 'D' : direction = "Right";
        break;
        default: 
            direction = "invalid direction";
            cout << "Please press one of the valid keys:\n W, A, S or D ";
            cin >> key;
        break;
    }
}

std::cout << "You moved " << direction + "\n";
```

Pretty cool, right?

## For Loops

The for loop is like a while loop, but it has the declaration and incrementing built in.

```c++
// set i to 0, as long as i is less than ten, execute the code in the for block and then increment i by 1
for (int i = 0; i < 10; i++) {
    std::cout << "Shame!\n";
}
```

We'll see more ways that for loops can be used in the next chapter.

**[prev](../03_Conditionals) | [home](../README.md) | [next](../05_ArraysAndDictionaries)**
