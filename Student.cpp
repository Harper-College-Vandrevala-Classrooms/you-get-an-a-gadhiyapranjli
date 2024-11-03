#include "Student.h"
#include <sstream>

Student::Student(const std::string& full_name, const std::string& student_id)
    : full_name(full_name), student_id(student_id) {
    std::istringstream iss(full_name);
    std::string word;
    while (iss >> word) {
        last_name = word; 
    }
}

std::string Student::getFullName() const {
    return full_name;
}

std::string Student::getLastName() const {
    return last_name;
}

std::string Student::getStudentId() const {
    return student_id;
}

void Student::addGrade(const std::string& assignment_name, int grade) {
    grades[assignment_name] = grade;
}

int Student::getGrade(const std::string& assignment_name) const {
    auto it = grades.find(assignment_name);
    if (it != grades.end()) {
        return it->second;
    }
    return -1; // Indicate no grade
}
