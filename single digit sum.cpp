// sum of all the digits of a number
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
  int num, mem, sum = 0; // initialize the sum = 0
  cout << "Enter the number: ";
  cin >> num;// user value
  while (num != 0) { // run the loop when the num is not equal to zero
    mem = num % 10; // slice each number
    sum += mem; // add the sliced number
    num /= 10; // divide the user value by 10 so that the last element is removed one by one
    if (num ==  0) { //check if num is 0 or not if yes
      if (sum> 9) { // check is the sum is single digit number if no
        num = sum;
        /* again carry out the process of while loop with the user value as the sum of user value like 1234 = 1+2+3+4 = 10 which is greater than 9 now the var num contains the sum which is 10 */
        sum = 0; // initalize the sum equal to 0
      }
    }
  }
  cout << "Generic root is " << sum;
  getch();
  return 0;
}