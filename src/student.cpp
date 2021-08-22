#include <iostream>
#include <string>
#include <map>
#include "../include/student.hpp"

Student::Student(std::string newFirst, std::string newLast, int newNumber, std::string newAddress, float newGPA, std::string newStanding, bool newActive):
    firstName(newFirst),
    lastName(newLast),
    phoneNumber(newNumber),
    homeAddress(newAddress),
    classStanding(newStanding),
    cumulativeGPA(newGPA),
    isActive(newActive) {}

Student::~Student() {
}

void Student::set_name(std::string newFirst, std::string newLast) {
    firstName = newFirst;
    lastName = newLast;
}

std::string Student::get_name() {
    std::string fullName = "Student Name: " + firstName + " " + lastName;
    return fullName;
};

void Student::set_address(std::string newAddress) {
    homeAddress = newAddress;
}

std::string Student::get_address() {
    return homeAddress;
}

void Student::set_phone(int newNumber) {
    phoneNumber = newNumber;
}

int Student::get_phone() {
    return phoneNumber;
}

void Student::set_standing(std::string newStanding) {
    classStanding = newStanding;
}

std::string Student::get_standing() {
    return classStanding;
}

void Student::set_gpa(float newCredits, char newGrade) {
    cumulativeGPA = newGrade;
}

float Student::get_gpa() {
    return cumulativeGPA;
}

void Student::set_status(bool newStatus) {
    isActive = newStatus;
}

bool Student::get_status() {
    return isActive;
}

void Student::add_courses(std::map<std::string, char> newCourses) {
    completedCourses = newCourses;
}

std::map<std::string, char> Student::get_courses() {
    return completedCourses;
}



