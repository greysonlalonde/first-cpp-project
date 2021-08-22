#include <iostream>

#include <string>

#include <map>

#include "../include/institution.hpp"

Institution::Institution(std::string newName, int newNumber, int numStudents, std::string newAddress):
institutionName(newName),
institutionNumber(newNumber),
institutionStudents(numStudents),
institutionAddress(newAddress) {}

Institution::~Institution() {}

void Institution::set_institution(std::string newName) {
    institutionName = newName;
}

std::string Institution::get_institution() {
    std::string institutionStatement = "Institution Name: " + institutionName;
    return institutionStatement;
}

void Institution::set_contact(int newNumber) {
    institutionNumber = newNumber;
}

int Institution::get_contact() {
    return institutionNumber;
}

void Institution::set_population(int newStudents) {
    institutionStudents = newStudents;
}

int Institution::get_population() {
    return institutionStudents;
}

void Institution::set_location(std::string newAddress) {
    institutionAddress = newAddress;
}

std::string Institution::get_location() {
    return institutionAddress;
}

