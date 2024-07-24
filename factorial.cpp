// Find the factorial of a number
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
  int num, f = 1; // initialize factorial var 'f' as 1 to
  cout << "Enter the number: ";
  cin >> num; // user number
  for (int i = 1; i <= num; i++) {
    f *= i; // factorial of a number multiply f by increment of a number till i is equal to user number
  }
  cout << "Factorial of a number: " << f;
  getch();
  return 0;
}