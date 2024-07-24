// Rotate the digits in a number
#include <iostream>
#include <conio.h>
#include <math.h> ///Math header file
using namespace std;
int main() {
  int n = 0, num, k, divisor; 
  // n for number of digits, num user value, k for number of rotation, divisor for rotation 
  cout << "Enter the number: ";
  cin >> num;
  int temp = num; // temporary save the value
  cout << "Enter the number of rotations: ";
  cin >> k; 
  // get the number of digits
  while (temp > 0) {
    n++;
    temp /= 10;
  }
  // divisor, divide the number by 10 of power n-k 
  divisor = pow(10, n - k);
  cout << "Rotated number is: " << (num % divisor) * pow(10, k) + num / divisor;
  /*suppose num = 12345, k=2
    12345 % 1000 = 345
    345 x 100 = 34500
    34500 + 12 = 34512*/
  getch();
  return 0;
}