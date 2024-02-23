#ifndef Person_H 
#define Person_H
#include <string>

class Person{
  private:
    int id;
    std::string name;
    int age;
    std::string phoneNumber;


  public:

    Person(int id,const std::string& name, int age,const std::string& phoneNumber);


    void setId(int id); 
    int getId() const; 
    

    void setAge(int age); 
    int getAge() const; 


    void setName(std::string name); 
    std::string getName() const; 


    void setPhoneNumber(std::string phoneNumber); 
    std::string getPhoneNumber() const; 
    

    ~Person()=default;
};


#endif 