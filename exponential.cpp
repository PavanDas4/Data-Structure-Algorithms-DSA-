// Find the exponential of a number 
// power of a number 
// like 2^3 = 8
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main() {
  int exp, base;
  cout << "Enter the base: ";
  cin >> base;
  cout << "Enter the exponent: ";
  cin >> exp;
  cout << "Exponential of a number: " << pow(base, exp); // predefinde function pow(base, exponent)
  getch();
  return 0;
}