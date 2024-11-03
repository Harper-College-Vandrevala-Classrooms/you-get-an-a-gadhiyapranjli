#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

#include <string>

class Assignment {
public:
    Assignment(const std::string& name, int total_points);
    
    std::string getName() const;

private:
    std::string name;
    int total_points;
};

#endif // ASSIGNMENT_H
