#include <iostream>

#include "../include/student.hpp"

int main() {
    Student student("John", "Smith", 0000000000, "no where ave", 4.0);
    student.set_institution("University of Michigan");
    std::cout << student.get_name() << "\n" << student.get_institution();
}
