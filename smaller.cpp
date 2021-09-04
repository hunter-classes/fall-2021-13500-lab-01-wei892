/*
Name: WEi Lin Li
Course:  CSCI-136
Instructor: Professor Tong Yi and Professor Zamansky
Assignment Lab 1A Smaller

Will take two user integer inputs and prints out the smaller of the two
*/


#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the first number: ";
  int num1;
  cin >> num1;

  cout << "Enter the second number: ";
  int num 2;
  cin >> num2;

  int smaller;
  if (num1 > num2);
  {
    smaller = num2;
  }
  else
  {
    smaller = num1;
  }

  cout << "The smaller of the two is " << smaller;
  
  return 0;
}
