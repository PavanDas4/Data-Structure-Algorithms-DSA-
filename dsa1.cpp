// program to find the length of the user integer
#include <iostream> //header file : std I/O
#include <conio.h> //header file : console I/O
using namespace std;
// main function
int main(){
  int num, n; // Declaring variables
  cout << "Enter the number: ";
  cin >> num; // user input
  n = 0; // intitalize, for the increment
  //defining while loop for the increment of the 'n' and the decrement of the user input
  while (num != 0){
    num /= 10; // dividing the user input by 10 till it becomes 0
    n++; // increment on each division 
  }
  // display the length
  cout << "Length of the number " << n;
  getch();
  return 0;
}


