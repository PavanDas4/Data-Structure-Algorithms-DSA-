// finding the largest digit
#include <iostream> // header file : std I/O
#include <conio.h> // header file : console I/O
using namespace std;
//main function
int main() {
  int lr, num[3]; // initialize variable and array of size 3
  cout << "Enter three numbers: ";
  for (int i = 0; i < 3; i++) { // input of three numbers
    cin >> num[i];
  } 
  // finding largest number using conditional operator
  lr = (num[0] > num[1]) ? (num[0] > num[2]) ? num[0] : num[2] : (num[1] > num[2]) ? num[1] : num[2];
  cout << "Greatest number among three numbers is: " << lr; // return greatest value
  getch();
  return 0;
} 