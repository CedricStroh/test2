#include "SeniorDeveloper.h"

SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias) {
}

void SeniorDeveloper::solve_problem() {
    std::cout << "Solving a problem:" << std::endl;
    std::cout << *this;
    std::cout << "Puh, that was tough" << std::endl;
    drink_coffee();
}
