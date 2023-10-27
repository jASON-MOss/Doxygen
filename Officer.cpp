/**
 * @file Officer.cpp
 * @author Jason Moss
 * @date 2023-10-26
 * @brief implementation for officer class
 * 
 * implementation for officer class
 */

#include "Officer.h"
#include <iostream>

using namespace std;


/**
 * constructor for officer
 *
 * @pre 
 * @post constructed
 * 
 */
Officer::Officer() {
  evilness = 500;
}


/**
 * sets officer
 *
 * @param int ID id num
 * @param int years total years
 * @param double hourlyRate rate
 * @param float hoursWorked 
 * @param double evilness 
 * @pre constructor works
 * @post officer
 * 
 */
Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}


/**
 * prints officer
 *
 * @pre valid officer
 * @return void 
 * @post printed
 * 
 */
void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}


/**
 * calculates pay
 *
 * @pre valid employee
 * @return double pay
 * @post pay is calculated
 * 
 */
double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
