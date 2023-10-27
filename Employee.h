/**
 * @file Employee.h
 * @author Jason Moss
 * @date 2023-10-26
 * @brief methods for employee class
 * 
 * methods for employee class
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;
 public:

  virtual void print();
  
  virtual double calculatePay();

  void anniversary();

  Employee();

  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
