// loan EMI calculator
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
struct emi { // structure to store data required
  float amount, interest, years;
};
int main() {
  struct emi e; // initialize structure
  cout << "EMI calculator:" << endl;
  cout << "Enter loan amount: ";
  cin>> e.amount;
  cout << "Enter loan interset: ";
  cin>> e.interest;
  cout << "Enter loan tenure: ";
  cin>> e.years;
  e.interest /= 12 * 100;
  e.years *= 12;
  cout << "----------------------------------------" << endl;
cout << "Monthly payable amount ... " << (e.amount * e.interest * pow(1 + e.interest, e.years)) / (pow(1 + e.interest, e.years) - 1) << " Rs";
  getch();
  return 0;
}