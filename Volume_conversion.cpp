// volume conversion
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
  char unit; // input unit
  float val; // user input
  cout << "Convert volume: \nEnter the unit: \n\t'l' for liter\n\t'g' for gallon:" << endl;
  cin >> unit;
  cout << "Enter the value: ";
  cin >> val;
  switch (unit) { // unit swich
  case 'l':
    cout << "liter: " << val << "\ngallon: " << val / 3.785;
    break;
  case 'g':
    cout << "gallon: " << val << "\nliter: " << val * 3.785;
    break;
  default:
    cout << "Invlaid unit";
    break;
  }
  getch();
  return 0;
}