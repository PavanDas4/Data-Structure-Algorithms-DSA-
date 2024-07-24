// number conversion
#include <iostream>
#include <conio.h>
#include <string>
#include <algorithm>
using namespace std;
void baseform(int num, int base) {
  char digits[] = "0123456789ABCDEF"; //create a string with all type of number
  char res[32]; // resultant
  int index = 0; // index of the string
  while (num != 0) {
    // get the length of the number and capture the number based on the given base
    res[index++] = digits[num % base];
    num /= base;
  }
  res[index] = '\0'; // set the last element empty
  for (int i = 0, j = index - 1; i < j; i++, j--) { // reverse the number or string
    char temp = res[i];
    res[i] = res[j];
    res[j] = temp;
  }
  cout << res;
}
int main() {
  int num, base; // getting number and base 
  cout << "Number base conversion" << endl;
  cout << "Enter the number: ";
  cin >> num;
  cout << "Enter the base: ";
  cin >> base;
  if (base >= 2 || base <= 16) { // check base is non 0 and 1 and grater than 16
    baseform(num, base); // if false call the function
  }
  getch();
  return 0;
}