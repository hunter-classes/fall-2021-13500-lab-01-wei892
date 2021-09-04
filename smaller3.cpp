/*
Author: Wei Lin Li
Course: CSCI-135 
Instructor: Professor Tong yi and Professor Zamansky
Assignment 1B Smaller3

This will read three integer inputs and print out the smallest of the three
 */

#include <iostream>
using namespace std;

int main()
{
  cout << "Enter the first number: ";
  int num1;
  cin >> num1;

  cout << "Enter the second number: ";
  int num2;
  cin >> num2;

  cout << "Enter the third number: ";
  int num3;
  cin>> num3;

  int smaller;
  if (num1 > num2)
  {
    if (num3 > num2)
    {
      smaller = num2;
    }
    else
      smaller = num3;
  }
  else
  {
    if (num3 > num1)
    {
      smaller = num1;
    }
    else
      smaller = num3;
  }

  cout << "The smaller of the three is " << smaller;

  return 0;
}
