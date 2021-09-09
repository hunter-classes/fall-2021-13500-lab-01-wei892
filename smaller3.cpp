/*
Author: Wei Lin Li
Course: CSCI-135 
Instructor: Professor Tong yi and Professor Zamansky
Assignment 1B Smaller3

This will read three integer inputs and print out the smallest of the three
 */

#include <iostream>

int main()
{
  std::cout << "Enter the first number: ";
  int num1;
  std::cin >> num1;

  std::cout << "Enter the second number: ";
  int num2;
  std::cin >> num2;

  std::cout << "Enter the third number: ";
  int num3;
  std::cin>> num3;

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

  std::cout << "The smaller of the three is " << smaller << std::endl;

  return 0;
}
