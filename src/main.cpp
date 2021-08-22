#include <iostream>

#include "../include/student.hpp"

int main() {
    Student student("John", "Smith", 0000000000, "no where ave", 4.0);
    std::cout << student.get_name();
}
