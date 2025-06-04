#include "JuniorDeveloper.h"

JuniorDeveloper::JuniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias) {
}

void JuniorDeveloper::solve_problem() {
    std::cout << "Solving a problem:" << std::endl;
    std::cout << *this;
    std::cout << "Ha, that was EZ!" << std::endl;
    drink_coffee();
}
