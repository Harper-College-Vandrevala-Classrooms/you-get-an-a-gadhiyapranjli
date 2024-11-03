#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <vector>
#include <string>
#include "Student.h"
#include "Assignment.h"

class Gradebook {
public:
    void add_student(const std::string& full_name, const std::string& student_id);
    void add_assignment(const std::string& name, int total_points);
    void enter_grade(const std::string& full_name, const std::string& assignment_name, int grade);
    std::string report() const;

private:
    std::vector<Student> students;
    std::vector<Assignment> assignments;
};

#endif // GRADEBOOK_H
