#ifndef SENIOR_DEVELOPER_HPP
#define SENIOR_DEVELOPER_HPP

#include "developer.hpp"

class SeniorDeveloper : public Developer {
public:
    SeniorDeveloper(const std::string& name, const std::string& alias);
    void solve_problem() const override;
};

#endif