// Print prime number to a given limit
#include <iostream>
#include <conio.h>
using namespace std;
// Create a function to check the a number is prime or not
int prime(int n) {
  for (int i = 2; i <= n/2; i++) {
    if (n % i == 0 ) { // check if remainder is 0 than return false and break the loop
      return false;
      break;
    }
    return true; // if not false than true
  }
}
int main() {
  int num;
  cout << "Printing prime numbers to a given limit" << endl;
  cout << "Enter the number: ";
  cin >> num; // user define length
  if (num < 2) { // if number is less than 2, is not valid
    cout << "CHECK THE NUMBER!" << endl;
  }
  for (int i = 2; i <= num; i++) { // start the number sequence
    if (prime(i)) { // call function and return value
      cout << i << " "; // print if yes
    }
  }
  getch();
  return 0;
}