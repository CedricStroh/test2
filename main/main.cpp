#include <memory>
#include <vector>
#include <iostream>
#include "Developer.h"
#include "JuniorDeveloper.h"
#include "SeniorDeveloper.h"

int main() {
    // Create a vector of shared pointers to Developer objects
    std::vector<std::shared_ptr<Developer>> developers;
    
    // Create a SeniorDeveloper using dynamic memory allocation
    auto senior = std::make_shared<SeniorDeveloper>("Diana Prince", "Wonder Woman");
    
    // Create a JuniorDeveloper
    auto junior = std::make_shared<JuniorDeveloper>("Peter Parker", "Spiderman");
    
    // Add developers to the vector
    developers.push_back(senior);
    developers.push_back(junior);
    
    // Try to load logos (this would throw an exception if file doesn't exist)
    try {
        // In a real application, we would load actual logo files
        // For this example, we'll just print the solving problems part
    } catch (const std::exception& e) {
        std::cerr << "Error loading logo: " << e.what() << std::endl;
    }
    
    // Iterate through developers and solve problems
    for (const auto& dev : developers) {
        dev->solve_problem();
        std::cout << std::endl;
    }
    
    return 0;
}
