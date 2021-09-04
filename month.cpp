/*
Author: Wei Lin Li
Course: CSCI-135
Instructor: Professor Tong yi and Professor Zamansky
Assignment: Lab 1D  month
 */

#include <iostream>
using namespace std;

int main()
{
  cout << "Enter year: ";
  int year;
  cin >> year;

  cout << "Enter month: ";
  int month;
  cin << month;

  //testing years for leap year/common year
  boolean leap_year = false;

  if (year % 4 != 0)
    leap_year = false;
  else if (year % 100 != 0)
    leap_year = true;
  else if (year % 400 != 0)
    leap_year = false;
  else
    leap_year = true;

  //testing months for 30/31 days
  int days;
  //before july, odd months have 31 days including july
  //after july, even months have 31 days
  if ((month <= 7 && month % 2 = 1) || (month > 7 && month % 2 = 0))
    days = 31;
  else
    days =30;

  if (days = 2)
  {
    if (leap_year = false)
      days = 28;
    else
      days = 29;
  }

  cout << days << " days";
  
    
  
  return 0;
}
