// Check number is divisibility by 2, 3, 5, 9
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
  int num;
  bool flag = 1; // create a flag
  int set[4] = {2, 3, 5, 9}; // create an array for the series of divsior
  cout << "Enter the number: ";
  cin >> num; // user input
  for (int i = 0; i < 4; i++) { //creating a loop for the array to perform division 
    if (num % set[i] != 0) { // check if the remainder with every divisor is 0 if not flag will return false
      flag = 0;
    }
  }
  if (flag) cout << "The number is divisible by 2, 3, 5, 9"; // if flag is true than the number is divisible
  else cout << "The number is not divisible by 2, 3, 5, 9";  
  getch();
  return 0;
}