// Time conversion
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
  char unit; // value unit
  float val; // user input
  cout << "Time conversion:\nEnter the unit:\n\t's' for second\n\t'm' for minute\n\t'h' for hour: ";
  cin >> unit;
  cout << "Enter the value: ";
  cin >> val;
  cout << "converted value\n";
  switch (unit) {
  case 's': // converting seconds into hours and minutes
    cout << "hour: " << (val / 60) / 60 << "\nminute: " << val / 60 << "\nsecond: " << val;
    break;
  case 'm': // converting minutes into seconds and hours 
    cout << "hour: " << val / 60 << "\nminute: " << val << "\nsecond: " << val * 60;
    break;
  case 'h': // converting hours into seconds and minutes
    cout << "hour: " << val << "\nminute: " << val * 60 << "\nsecond: " << (val * 60) * 60;
    break;
  default:
    cout << "Invalid unit";
    break;
  }
  getch();
  return 0;
}