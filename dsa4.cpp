// find the kth largest number in an array
#include <iostream>
#include <conio.h>
#include <algorithm> // library for the sort 
using namespace std;
int main() {
  int num[20], k, count;
  cout << "Enter number of elements: ";
  cin >> count; // array size
  cout << "Enter the numbers: ";
  for (int i = 0; i < count; i++) {
    cin >> num[i]; // inserting the elements
  }
  cout << "Which largest number: ";
  cin >> k; // largest number to be
  sort(num, num + count); // sorting the array in ascending order
  cout << k <<"th largest number is " << num[count - k]; // finding the kth largest number
  getch();
  return 0;
}