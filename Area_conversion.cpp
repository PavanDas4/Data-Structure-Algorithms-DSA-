// Area conversion
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
  char unit; // unit of the user
  float val; // user value
  cout << "Convert Area: " << endl << "Enter unit character:\n\t\'m\' for meter\n\t'k' for kilometer\n\t'a' for acre:" << endl; // character dictionary
  cout << "Enter the Unit: ";
  cin >> unit;
  cout << "Enter the value: ";
  cin >> val;
  switch (unit) { // unit switch for conversion
  case 'm':
    cout << "m^2: " << val << "\nkm^2: " << val / 1e+6 << "\nacre: " << val / 4047;
    break;
  case 'k':
    cout << "km^2: " << val << "\nm^2: " << val * 1e+6 << "\nacre: " << val * 247.1;
    break;
  case 'a':
    cout << "acre: " << val << "\nkm^2: " << val / 247.1 << "\nm^2: " << val * 4047;
    break;
  default:
    cout << "Invalid unit";
    break;
  }
  getch();
  return 0;
}