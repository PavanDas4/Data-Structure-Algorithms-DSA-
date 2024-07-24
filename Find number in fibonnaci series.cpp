// Find a number in fibonacci sequence 
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
  int num, a, b, c;
  cout << "Find the fibonacci series: ";
  cin >> num;
  a = 0; // fibonnaci series 1 i.e fn-2
  b = 1; // fibonnaci series 2 i.e fn-1
  c = 0; // sum 
  for (int i = 2; i <= num; i++) {
    c = a + b; // sum of a & b
    a = b; //swapping
    b = c;
  }
  cout << c; //display
  getch();
  return 0;
}