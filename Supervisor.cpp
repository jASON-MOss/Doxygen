/**
 * @file Supervisor.cpp
 * @author Jason Moss
 * @date 2023-10-26
 * @brief implementation for supervisor class
 * 
 * implements supervisor class
 */

#include "Supervisor.h"
#include <iostream>

using namespace std;


/**
 * constructor
 *
 * @pre 
 * @post constructed
 * 
 */
Supervisor::Supervisor() {
  numSupervised = -1;
}


/**
 * sets supervisor
 *
 * @param int ID id num
 * @param int years years worked
 * @param double hourlyRate rate
 * @param float hoursWorked 
 * @param int numSupervised 
 * @pre constructer called
 * @post supervisor set
 * 
 */
Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->numSupervised = numSupervised;
}


/**
 * prints supervisor
 *
 * @pre valid supervisor
 * @return void 
 * @post printed
 * 
 */
void Supervisor::print() {
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}


/**
 * calculates pay
 *
 * @pre valid supervisor
 * @return double val
 * @post pay is calculated
 * 
 */
double Supervisor::calculatePay() {
  double val = Employee::calculatePay();
  val = val + val * (.01 * numSupervised);
  return val;
}
