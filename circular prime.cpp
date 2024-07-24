// Check if a number is circular prime or not
// circular prime number is a prime number where each rotated number is prime e.g 1193 
// 1193 is a prime, 3119 is a prime, 9311 is a prime, 1931 is a prime // hence this is a circular prime
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
// check the number is prime
int prime(int p) {
  for (int i = 2; i <= p/2; i++) {
    if (p % i == 0 || p == 0 || p == 1) {
      return false;
      break;
    }
    return true;
  }
}
int main() {
  int divisor, num, temo, len = 0;
  bool flag = true;
  cout << "Enter the prime number: ";
  cin >> num;
  temo = num; // temporarily save number 
  // find the length
  while (temo > 0) {
    temo /= 10;
    len++;
  }
  // rotate the given number
  int n = len; // save the length
  while (n > 0) { // till n is greater than 0
    divisor = pow(10, len - (n - 1));
    temo = (num % divisor) * pow(10, n) + num / divisor; // new rotated number
    if (prime(temo)) {  // check the rotated number is prime
      flag = false; // set flag off and break
      break;
    }
    n--; //decrement
  }
  if (flag) cout << "This number is a circular prime"; // if flag is set print its circular prime
  else cout << "This is not a circular prime";
  getch();
  return 0;
}