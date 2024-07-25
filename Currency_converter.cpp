// Currency converter into US dollar, Euros, and INR
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
  char unit; // currency type
  float amt; // amount
  cout << "Currency converter:\nEnter currency type:\n\t'u' for US dollar\n\t'e' for Euros\n\t'i' for Rupees: ";
  cin >> unit;
  cout << "Enter the amount: ";
  cin >> amt;
  cout << "Converted amount\n";
  switch (unit) {
  case 'u':
    cout << "Dollar: " << amt << "\nEuros: " << amt * 0.9207 << "\nRupees: " << amt * 83.78;
    break;
  case 'e':
    cout << "Dollar: " << amt * 1.0861 << "\nEuros: " << amt << "\nRupees: " << amt * 90.9943;
    break;
  case 'i':
    cout << "Dollar: " << 0.0119 * amt << "\nEuros: " << amt * 0.011 << "\nRupees: " << amt;
    break;
  default:
    cout << "Invalid currency type";
    break;
  }
  getch();
  return 0;
}