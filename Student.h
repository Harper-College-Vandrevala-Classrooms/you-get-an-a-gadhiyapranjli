#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <map>

class Student {
public:
    Student(const std::string& full_name, const std::string& student_id);
    
    std::string getFullName() const;
    std::string getLastName() const;
    std::string getStudentId() const;
    void addGrade(const std::string& assignment_name, int grade);
    int getGrade(const std::string& assignment_name) const;

private:
    std::string full_name;
    std::string last_name;
    std::string student_id;
    std::map<std::string, int> grades;
};

#endif // STUDENT_H
