/*
Author: Wei Lin Li
Course: CSCI 135
Instructor: Professor Tong yi and Professor Zamansky
Assignment Lab 1C leap year

This program will take integers that represent years and check whether
it is a leap year or a common year
 */

#include <iostream>
using namespace std;

int main()
{
  cout << "Enter year: ";
  int year;
  cin >> year;

  boolean leap_year = false;

  if (year % 4 != 0)
    leap_year = false;
  else if (year % 100 != 0)
    leap_year = true;
  else if (year % 400 != 0)
    leap_year = false;
  else
    leap_year = true;


  if (leap_year == true)
    cout << "Leap year";
  else
    cout << "Common year";
  
  return 0;
}
