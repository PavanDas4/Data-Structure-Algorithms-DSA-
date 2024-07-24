// Find all prime factors of a number
/* prime factors are 
  the factors of a number which is prime*/
#include <iostream>
#include <conio.h>
#include <math.h> // math header file
using namespace std;
int main() {
  int num;
  cout << "Enter the number: ";
  cin >> num; // user value
  cout << "Prime factors of number is: ";
  while (num % 2 == 0) { // 2 is prime and can be a factor if remainder is zero
    cout << 2 << " "; // print 2 as a factor and divide the number
    num /= 2;
  }
  for (int i = 3; i < sqrt(num); i++) { // check if other numbers are factors of a divided number
    while (num % i == 0) { // print i if the remainder is zero
      cout << i << " "; 
      num /= i;
    }
  }
  if (num > 2) { // if still the number is greater than 2 after dividing
    cout << num << " "; // the resultant number is itself is a prime factor
  }
  getch();
  return 0;
}