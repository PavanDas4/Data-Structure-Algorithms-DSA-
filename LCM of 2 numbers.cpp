// Find the LCM of 2 numbers
// LCM is the greatest among two numbers least common divisor 
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
  int n1, n2, m;
  cout << "Enter two numbers: ";
  cin >> n1 >> n2; // two numbers
  m = max(n1, n2); // greatest number
  while (1) { // run the loop till it gets break
    if (m % n1 == 0 && m % n2 == 0) { // check the remainder is zero
      cout << "LCM of two numbers: " << m;
      break; // break the loop you got the number which is the lcm
    }
    m++; // increment till the loop is breaked
  }
  getch();
  return 0;
}