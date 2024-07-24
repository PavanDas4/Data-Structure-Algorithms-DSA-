//weight conversion
#include <iostream>
#include <conio.h>
using namespace std;
void weight(char conv = 'k', float num = 0) {
  switch (conv) {
  case 'k': // case if user has given the number in kilogram
    cout << "In kilogram: " << num << "\ngram: " << num * 1000 << "\npound: " << num * 2.205;
    break;
  case 'g': // case if user has given the number in gram
    cout << "In gram: " << num << "\nkilogram: " << num / 1000 << "\npound: " << num / 453.6;
    break;
  case 'p': // case if user has given the number in pound
    cout << "In pound: " << num << "\ngram: " << num * 453.6 << "\nkilogram: " << num / 2.205;
    break;
  default: // invalid unit
    cout << "Invalid unit";
    break;
  }
}
// main function
int main() {
  float val; // float number
  char set;  // setting unit
  cout << "weight conversion:\nEnter the measurment unit:\n\'k\' for kilogram\n\'g\' for gram\n\'p\' for pound: ";
  cin >> set;
  cout << "Enter the value: ";
  cin >> val;
  weight(set, val); // call function with parameters
  getch();
  return 0;
}