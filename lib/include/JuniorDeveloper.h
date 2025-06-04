#ifndef JUNIOR_DEVELOPER_H
#define JUNIOR_DEVELOPER_H

#include "Developer.h"

/**
 * @brief Class representing a Junior Developer
 * 
 * This class inherits from Developer and implements the solve_problem method
 * with junior-specific behavior.
 */
class JuniorDeveloper : public Developer {
public:
    /**
     * @brief Constructor for JuniorDeveloper
     * 
     * @param name The name of the developer
     * @param alias The alias of the developer
     */
    JuniorDeveloper(const std::string& name, const std::string& alias);
    
    /**
     * @brief Implementation of solve_problem for JuniorDeveloper
     * 
     * This method outputs a junior-specific message and calls drink_coffee.
     */
    void solve_problem() override;
};

#endif // JUNIOR_DEVELOPER_H
