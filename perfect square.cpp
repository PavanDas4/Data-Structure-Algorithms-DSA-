// Check if a number is perfect square
#include <iostream>
#include <conio.h>
#include <math.h> // math header file
using namespace std;
int main() {
  float num, sr; // determiny initialize as float to carry float value
  bool flag = false; // flag for detection
  cout << "Check the number is a perfect square: ";
  cin >> num;
  sr = num / 2; // dividing the number by half to avoid the multiple calculation
  for (int i = 1; i < sr; i++) { //running the loop
    if (num == i * i) { // check if the multiple of i itself is equal to the given number if yes flag is set
      flag = true;
      break; // break the loop we have got the answer
    }
  }
  if (flag) cout << "This is a perfect square"; // if flag is set the perfect square exist
  else cout << "This is not a perfect square";
  getch();
  return 0;
}