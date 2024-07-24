// distance conversion
#include <iostream>
#include <conio.h>
using namespace std;
// main function
int main() {
  float val; // float number
  char set;  // setting unit
  cout << "distance conversion:\nEnter the measurment unit:\n\'k\' for kilometer\n\'m\' for meter: ";
  cin >> set;
  cout << "Enter the value: ";
  cin >> val;
  switch (set) {
  case 'k': // case if user has given the number in kilometer
    cout << "In kilometer: " << val << "\nmeter: " << val * 1000;
    break;
  case 'm': // case if user has given the number in meter
    cout << "In meter: " << val << "\nkilometer: " << val / 1000;
    break;
  default: // invalid unit
    cout << "Invalid unit";
    break;
  }
  getch();
  return 0;
}