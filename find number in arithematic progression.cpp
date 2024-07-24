// Find a number in AP(Arithematic Progression) sequence
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
  int a, n, d, stage; // intialize 4 variables
  cout << "Find a number in Airthematic progression" << endl;
  cout << "Enter the first number or element of an AP: ";
  cin >> a; //first element
  cout << "Enter the difference of an AP: ";
  cin >> d; // difference
  cout << "Enter the nth term to find: ";
  cin >> n; // nth term 
  stage = a + (n - 1) * d; // AP formula
  cout << "The " << n << "th term is: " << stage;
  getch();
  return 0;
} 