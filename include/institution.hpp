#include <iostream>

#include <string>

#include <map>

class Institution {
    std::string institutionName;
    int institutionNumber;
    int institutionStudents;
    std::string institutionAddress;
public:
    Institution(std::string newName= "", int newNumber= 0, int numStudents= 0, std::string newAddress= "");
    ~Institution();
    void set_institution(std::string newName);
    std::string get_institution();
    void set_contact(int newNumber);
    int get_contact();
    void set_population(int newStudents);
    int get_population();
    void set_location(std::string newAddress);
    std::string get_location();
};