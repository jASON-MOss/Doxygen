/**
 * @file Officer.h
 * @author Jason Moss
 * @date 2023-10-26
 * @brief methods for officer class
 * 
 * methods for officer class
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

class Officer : public Employee {
 private:
  double evilness;
 public:
  void print();
  double calculatePay();
  Officer();
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
