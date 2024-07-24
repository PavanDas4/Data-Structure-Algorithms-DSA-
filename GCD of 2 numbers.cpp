// Find the GCD of 2 numbers
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
  int a, b, c, i; // GCD of two number i.e a, b
  cout << "GCD of two numbers" << endl;
  cout << "Enter two number: ";
  cin >> a >> b; // get two numbers
  c = min(a, b); // find the smallest number using min()
  for (i = c; i >= 0; i--) { // initialize i = smallest number and start decrement
    if (a % i == 0 && b % i == 0) { // check if both the number divisible by i is equal to 0 
      break; // if yes than break the loop
    }
  }
  cout << "GCD of two number is: " << i; // print the number where the looped got break
  getch();
  return 0;
}