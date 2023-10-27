/**
 * @file Supervisor.h
 * @author Jason Moss
 * @date 2023-10-26
 * @brief functions for supervisor class
 * 
 * functions for supervisor class
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

class Supervisor : public Employee {
 private:
  int numSupervised;
 public:
  void print();
  double calculatePay();
  Supervisor();
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
