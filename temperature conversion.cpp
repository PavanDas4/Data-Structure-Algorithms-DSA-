// temperature conversion
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
  int val, set;
  cout << "Temperature Conversion \nType index to convert\n1: Centigrade to Frahenheit\n2: frahenheit to centigrade" << endl;
  cin >> set; // conversion - to - from
  cout << "Enter the value: ";
  cin >> val; // temperature degree
  switch (set)
  { // using switch case fro conversion
  case 1:
    cout << "Centigrade to Frahenheit is: " << (val * 9 / 5) + 32; // Celsius to farhen fomrula
    break;
  case 2:
    cout << "Frahenheit to Centigrade is: " << (val - 32) * 5 / 9; // Farhen to celsius fomrula
    break;
  default:
    cout << "Invalid index";
    break;
  }
  getch();
  return 0;
}
