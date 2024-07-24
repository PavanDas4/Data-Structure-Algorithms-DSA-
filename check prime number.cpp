// Check if a number is prime or not
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
  int num;
  bool p = true; // Create a flag denoting prime true or false
  cout << "Check if the number is prime" << endl;
  cout << "Enter the number : ";
  cin >> num; // user input
  /* create a loop with initial value as 2 
  and end value half of the user input
  eg.. 10 : 10 is divisible by 2, 5 and 10 itself so the divisor are till half the dividend*/
  for (int i = 2; i <= num/2; i++) {
    if (num % i == 0 || num == 0 || num == 1) {
      // check if the number is 0 or 1, or the remainder is 0 if yes than it is not a prime
      p = 0;
      break;
      // once we got that the remainder is 0 break the loop 
    }
    else {
      p = 1;
    }
  }
  if (p) { // if the boolean value is true than print it is prime
    cout << num << " is prime";
  }
  else {
    cout << num << " is not a prime";
  }
  getch();
  return 0;
}