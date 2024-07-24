//reverse the digit
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
  int num, rnum = 0; // initialize the rnum variable to be zero 
  cout << "Enter the number: ";
  cin >> num; // user number
  while (num != 0) {
    rnum = (rnum * 10) + (num % 10); 
    /* first multiply the reversed numeber by 10 to increase the place value 
    than add the remainder of the user input by dividing by 10 i.e the last digit of the user value*/
    num /= 10; // divide the number by 10 it means the digit get sliced one by one at the end side
  }
  cout << "Reversed number is " << rnum;
  getch();
  return 0;
}