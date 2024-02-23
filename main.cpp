#include <iostream>
#include "model/Student/Student.h"

int main() {
  Student student_1(5,"Mohamed",18,"0106163725", 5);
  std::cout << student_1.getId() << std::endl;
}