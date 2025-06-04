#ifndef SENIOR_DEVELOPER_H
#define SENIOR_DEVELOPER_H

#include "Developer.h"

/**
 * @brief Class representing a Senior Developer
 * 
 * This class inherits from Developer and implements the solve_problem method
 * with senior-specific behavior.
 */
class SeniorDeveloper : public Developer {
public:
    /**
     * @brief Constructor for SeniorDeveloper
     * 
     * @param name The name of the developer
     * @param alias The alias of the developer
     */
    SeniorDeveloper(const std::string& name, const std::string& alias);
    
    /**
     * @brief Implementation of solve_problem for SeniorDeveloper
     * 
     * This method outputs a senior-specific message and calls drink_coffee.
     */
    void solve_problem() override;
};

#endif // SENIOR_DEVELOPER_H
