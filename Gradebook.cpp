#include "Gradebook.h"
#include <sstream>
#include <algorithm>

void Gradebook::add_student(const std::string& full_name, const std::string& student_id) {
    students.emplace_back(full_name, student_id);
}

void Gradebook::add_assignment(const std::string& name, int total_points) {
    assignments.emplace_back(name, total_points);
}

void Gradebook::enter_grade(const std::string& full_name, const std::string& assignment_name, int grade) {
    for (auto& student : students) {
        if (student.getFullName() == full_name) {
            student.addGrade(assignment_name, grade);
            break;
        }
    }
}

std::string Gradebook::report() const {
    std::ostringstream oss;
    oss << "Last_Name,First_Name,Student_Id";

    
    for (const auto& assignment : assignments) {
        std::string name_with_underscore = assignment.getName();
        std::replace(name_with_underscore.begin(), name_with_underscore.end(), ' ', '_');
        oss << "," << name_with_underscore; 
    }
    oss << "\n";

    for (const auto& student : students) {
      
        oss << student.getLastName() << "," 
            << student.getFullName().substr(0, student.getFullName().find(' ')) << "," 
            << student.getStudentId();
        for (const auto& assignment : assignments) {
            int grade = student.getGrade(assignment.getName());
            if (grade == -1) {
                oss << ",none"; 
            } else {
                oss << "," << grade;
            }
        }
        oss << "\n";
    }
    return oss.str();
}
