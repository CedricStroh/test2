#include "senior_developer.hpp"
#include <iostream>

SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias) {}

void SeniorDeveloper::solve_problem() const {
    std::cout << "Solving a problem:\n";
    std::cout << *this;
    std::cout << "Ha, that was EZ!\n";
    drink_coffee();
}