/*
Author: Wei Lin Li
Course: CSCI 135
Instructor: Professor Tong yi and Professor Zamansky
Assignment Lab 1C leap year

This program will take integers that represent years and check whether
it is a leap year or a common year
 */

#include <iostream>

int main()
{
  std::cout << "Enter year: ";
  int year;
  std::cin >> year;

  bool leap_year = false;

  if (year % 4 != 0)
    leap_year = false;
  else if (year % 100 != 0)
    leap_year = true;
  else if (year % 400 != 0)
    leap_year = false;
  else
    leap_year = true;


  if (leap_year == true)
    std::cout << "Leap year" << std::endl;
  else
    std::cout << "Common year" << std::endl;
  
  return 0;
}
