// is the number palindrome or not
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
  int num, temp, rnum = 0; // one variable for temperoray storing the user value and rnum is to reverse the number
  cout << "Enter the numeber: ";
  cin >> num; // user value
  temp = num; // store it into the temp
  while (temp != 0) { // loop untill temp is not zero
    rnum = (rnum * 10) + (temp % 10); //rnum storing the reverse of a user value 
    // place the value and store the remainder
    temp /= 10; // divide by 10 to remove the unit place value
  }
  if (rnum == num) cout << num << " is a palindrome"; // if reversed number is same as user value
  else cout << num <<" is not a palindrome";
  getch();
  return 0;
}