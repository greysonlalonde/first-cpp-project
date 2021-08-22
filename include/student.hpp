#include <iostream>
#include <string>
#include <map>

class Student {
    std::string firstName;
    std::string lastName;
    std::string homeAddress;
    int phoneNumber;
    std::string classStanding;
    float cumulativeGPA;
    bool isActive;
    std::map<std::string, char> completedCourses;
public:
    Student(std::string newFirst, std::string newLast, int newNumber, std::string newAddress, float newGPA, std::string newStanding= "Freshman", bool newActive= true);
    ~Student();
    void set_name(std::string newFirst, std::string newLast);
    std::string get_name();
    void set_standing(std::string newStanding);
    std::string get_standing();
    void set_status(bool newStatus);
    bool get_status();
private:
    void set_phone(int newPhone);
    int get_phone();
    void set_address(std::string newAddress);
    std::string get_address();
    void add_courses(std::map<std::string, char> newCourses);
    std::map<std::string, char> get_courses();
    void set_gpa(float newCredits, char newGPA);
    float get_gpa();
};