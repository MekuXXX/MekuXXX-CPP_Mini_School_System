#ifndef Student_H
#define Student_H
#include <string>
#include "../model/Person/Person.h"

class Teacher: public Person {
  private:
    double salary;


  public:
  Teacher(int id, const std::string& name, int age, const std::string& phoneNumber, double salary);

    void setSalary(double salary); 
    double getSalary() const; 

    ~Teacher()=default;
};


#endif 