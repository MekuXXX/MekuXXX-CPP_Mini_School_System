#ifndef Student_H
#define Student_H
#include <string>
#include "../model/Person/Person.h"

class Student: public Person {
  private:
    double gpa;


  public:
  Student(int id, const std::string& name, int age, const std::string& phoneNumber, double gpa);

    void setGpa(double gpa); 
    double getGpa() const; 

    ~Student()=default;
};


#endif 