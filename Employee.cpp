/**
 * @file Employee.cpp
 * @author Jason Moss
 * @date 2023-10-26
 * @brief methods for employee class
 * 
 * methods for employee class
 */

#include "Employee.h"
#include <iostream>

using namespace std;


/**
 * constructor
 *
 * @pre 
 * @post 
 * 
 */
Employee::Employee() {
  ID = years = hoursWorked = hourlyRate = -1;
}


/**
 * sets employee
 *
 * @param int ID id number
 * @param int years years worked
 * @param double hourlyRate rate
 * @param float hoursWorked 
 * @pre valid constructor
 * @post set
 * 
 */
Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}


/**
 * prints
 *
 * @pre employee has been set
 * @return void 
 * @post printed
 * 
 */
void Employee::print() {
  cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
       << endl;
}


/**
 * checks for employee anniversary
 *
 * @pre valid employee
 * @return void 
 * @post employee anniversary checked
 * 
 */
void Employee::anniversary() {
  years++;
  hourlyRate = hourlyRate + hourlyRate * .002;
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!"
       << endl;
}


/**
 * figures out pay
 *
 * @pre valid employee
 * @return double pay
 * @post pay is calculated
 * 
 */
double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}

