//height conversion
#include <iostream>
#include <conio.h>
using namespace std;
// void function for conversion based on what user want
void conv(char co = 'c', float num = 0) { // function has set with the default value
  switch (co) {
  case 'c': // case if user has given the number in centimeter
    cout << "In centimeter: " << num << "\nMeter: " << num / 100 << "\nFoot: " << num / 30.48 << "\nInch: " << num / 2.54;
    break;
  case 'm': // case if user has given the number in meter
    cout << "In meter: " << num << "\ncentimeter: " << num * 100 << "\nFoot: " << num * 3.281 << "\nInch: " << num * 39.37;
    break;
  case 'f': // case if user has given the number in foot
    cout << "In Foot: " << num << "\nMeter: " << num / 3.281 << "\ncentimeter: " << num * 30.48 << "\nInch: " << num * 12;
    break;
  case 'i': // case if user has given the number in inch
    cout << "In Inch: " << num << "\ncentimeter: " << num * 2.54 << "\nMeter: " << num / 39.37 << "\nFoot: " << num / 12;
    break;
  default: // invalid unit
    cout << "Invalid unit";
    break;
  }
}
// main function
int main() {
  float val; // float number
  char set; // setting unit
  cout << "Height conversion:\nEnter the measurment unit:\n\'c\' for centimeter\n\'m\' for meter\n\'f\' for foot\n\'i\' for inch" << endl;
  cin >> set;
  cout << "Enter the value: ";
  cin >> val;
  conv(set, val); // call function with parameters
  getch();
  return 0;
}