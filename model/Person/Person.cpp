#include "Person.h"


Person::Person(int id, const std::string& name, int age, const std::string& phoneNumber, double gpa):id(id), name(name), age(age), phoneNumber(phoneNumber){}

int Person::getId() const {
    return this->id;
}

void Person::setId(int id) {
    this->id = id;
}

int Person::getAge() const {
    return this->age;
}

void Person::setAge(int age) {
    this->age= age;
}


std::string Person::getPhoneNumber() const {
    return this->phoneNumber;
}

void Person::setPhoneNumber(std::string phoneNumber) {
    this->phoneNumber = phoneNumber;
}

std::string Person::getName() const {
    return this->name;
}

void Person::setName(std::string name) {
    this->name= name;
}