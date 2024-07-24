// find the second smallest value
#include <iostream>
#include <conio.h>
#include <algorithm> // header file
using namespace std;
// main function
int main() {
  int num[20], k, count; // initialize an array and a variable determining the size
  cout << "Enter number of elements: ";
  cin >> count; // size of the array
  cout << "Enter the numbers: ";
  for (int i = 0; i < count; i++)
  {
    cin >> num[i]; // entering the elements
  }
  sort(num, num + count, greater<int>()); // sorting the array in descending
  cout << "Second smallest number is: " << num[count - 2]; // displaying the second last element
  getch();
  return 0;
}