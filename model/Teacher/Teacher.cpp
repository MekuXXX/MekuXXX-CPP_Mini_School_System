#include "Teacher.h"

Teacher::Teacher(int id, const std::string& name, int age, const std::string& phoneNumber, double salary):Person(id,name, age,phoneNumber),salary(salary) {}

double Teacher::getSalary() const {
    return this->salary;
}

void Teacher::setSalary(double salary) {
    this->salary = salary;  
}
