// find the sum of 'n' numbers
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
  int n, num[50], sum = 0; // initialize the sum = 0 and create an array to store the numbers
  cout << "Enter number of digits: ";
  cin >> n; // length of the array
  cout << "Enter the numbers: ";
  for (int i = 0; i < n; i++) {
    cin >> num[i]; // insert number into array
    sum += num[i]; // adding the number one by one
  }
  cout << "Sum of numbers is " << sum; // display the sum
  getch();
  return 0;
}