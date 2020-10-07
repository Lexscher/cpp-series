#include <iostream>

using namespace std;

int main() {
  int age = 51;
  string message;
  if(age >= 50) {
    message = "Welcome to the club! Your fist drink is on us!";
  } else if (age >= 21) {
    message = "Welcome to the club!";
  } else {
    message = "Sorry! You're too young to enter this club! Try again in a few years!!";
  }
  cout << message << "\n";
}