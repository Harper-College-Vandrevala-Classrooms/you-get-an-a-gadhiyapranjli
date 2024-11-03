#include "Assignment.h"

Assignment::Assignment(const std::string& name, int total_points) 
    : name(name), total_points(total_points) {}

std::string Assignment::getName() const {
    return name;
}
