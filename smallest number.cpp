// find the smallest value
#include <iostream>
#include <conio.h>
#include <algorithm> // header file
using namespace std;
// main function
int main()
{
  int num[20], count; // initialize an array and a variable determining the size
  cout << "Enter number of elements: ";
  cin >> count; // size of the array
  cout << "Enter the numbers: ";
  for (int i = 0; i < count; i++)
  {
    cin >> num[i]; // entering the elements
  }
  sort(num, num + count); // sorting the array in ascending
  cout << "Smallest number is: " << num[0]; // displaying the first element
  getch();
  return 0;
}