/*
Author: Wei Lin Li
Course:  CSCI-135
Instructor: Professor Tong Yi and Professor Zamansky
Assignment Lab 1A Smaller

Will take two user integer inputs and prints out the smaller of the two
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

  int smaller;
  if (num1 > num2)
    smaller = num2;
  else
    smaller = num1;
  
  std::cout << "The smaller of the two is " << smaller << std::endl;
  
  return 0;
}
