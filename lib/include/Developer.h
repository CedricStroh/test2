#ifndef DEVELOPER_H
#define DEVELOPER_H

#include <string>
#include <iostream>

/**
 * @brief Base class for all developer types
 * 
 * This class represents a generic developer with name, alias and logo.
 * It serves as a base class for JuniorDeveloper and SeniorDeveloper.
 */
class Developer {
public:
    /**
     * @brief Constructor for Developer
     * 
     * @param name The name of the developer
     * @param alias The alias of the developer
     */
    Developer(const std::string& name, const std::string& alias);
    
    /**
     * @brief Virtual destructor
     */
    virtual ~Developer() = default;
    
    /**
     * @brief Static method to drink coffee
     */
    static void drink_coffee();
    
    /**
     * @brief Virtual method to solve a problem
     * 
     * This method should be overridden by derived classes.
     */
    virtual void solve_problem() = 0;
    
    /**
     * @brief Load a logo from a file
     * 
     * @param filename The name of the file to load
     * @throws std::runtime_error if the file cannot be opened
     */
    void load_logo_from_file(const std::string& filename);
    
    /**
     * @brief Get the name of the developer
     * 
     * @return const std::string& The name
     */
    const std::string& get_name() const;
    
    /**
     * @brief Get the alias of the developer
     * 
     * @return const std::string& The alias
     */
    const std::string& get_alias() const;
    
    /**
     * @brief Get the logo of the developer
     * 
     * @return const std::string& The logo
     */
    const std::string& get_logo() const;
    
    /**
     * @brief Stream operator for Developer
     * 
     * @param os The output stream
     * @param dev The developer to output
     * @return std::ostream& The output stream
     */
    friend std::ostream& operator<<(std::ostream& os, const Developer& dev);
    
private:
    std::string name;    ///< The name of the developer
    std::string alias;   ///< The alias of the developer
    std::string logo;    ///< The logo of the developer
};

#endif // DEVELOPER_H
