#include "junior_developer.hpp"
#include <iostream>

JuniorDeveloper::JuniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias) {}

void JuniorDeveloper::solve_problem() const {
    std::cout << "Solving a problem:\n";
    std::cout << *this;
    std::cout << "Puh, that was tough\n";
    drink_coffee();
}
