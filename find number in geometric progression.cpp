// Find a number in GP sequence
#include <iostream>
#include <conio.h>
#include <math.h> // header file 
using namespace std;
int main() {
  int a, r, n=0, num; // var 'a' as a initial sequence, 'r' as a common ratio, and n is the nth term
  cout << "Enter the nth term: ";
  cin >> num;
  cout << "Enter the first sequence: ";
  cin >> a;
  cout << "Enter the common ratio: ";
  cin >> r;
  // formula for gp nth term = a*r^n-1
  for (int i = 0; i < num; i++) {
    n = a * pow(r, i);
  }
  cout << n;
  getch();
  return 0;
}