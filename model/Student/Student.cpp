#include "Student.h"


Student::Student(int id, const std::string& name, int age, const std::string& phoneNumber, double gpa):Person(id,name, age,phoneNumber),gpa(gpa) {}

double Student::getGpa() const {
    return this->gpa;
}

void Student::setGpa(double gpa) {
    this->gpa = gpa;
}
