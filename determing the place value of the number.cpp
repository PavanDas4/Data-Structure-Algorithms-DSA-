//search a digit at specific place in a number
#include <iostream> //header file : std I/O
#include <conio.h> //header file : console I/O
using namespace std;
//Main function
int main() {
  int num, f, n; //initialize variables in integer
  n = 1; // Assign value 1 to var 'n' Where 'n' is used for place value multiple
  cout << "Enter the number: ";
  cin >> num; // user input of the number
  cout << "Find the digit: ";
  cin >> f; // user input to find the digit in the var 'num'
  // using while loop until the num = 0
  while (num != 0) {
    // value inside the num is divided by 10 to pass on the next digit of the number
    // check if the remainder of the num is equal to the search value
    if (num % 10 == f) {
      cout << "Place value is: " << (f * n); 
      /* display the searched number by multiplying the var 'n' as to assign the place value */
      break; // break the loop
    }
    num /= 10;
    n *= 10; // multiplying the var 'n' until we get the digit
  }
  getch();
  return 0;
}
