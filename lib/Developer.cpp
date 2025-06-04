#include "Developer.h"
#include <fstream>
#include <stdexcept>

Developer::Developer(const std::string& name, const std::string& alias)
    : name(name), alias(alias), logo("") {
}

void Developer::drink_coffee() {
    std::cout << "Ahhhh, I needed that coffee!!!" << std::endl;
}

void Developer::load_logo_from_file(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Could not open file: " + filename);
    }
    
    std::string content;
    std::string line;
    while (std::getline(file, line)) {
        content += line + "\n";
    }
    
    logo = content;
}

const std::string& Developer::get_name() const {
    return name;
}

const std::string& Developer::get_alias() const {
    return alias;
}

const std::string& Developer::get_logo() const {
    return logo;
}

std::ostream& operator<<(std::ostream& os, const Developer& dev) {
    os << "Name: " << dev.name << std::endl;
    os << "Alias: " << dev.alias << std::endl;
    if (!dev.logo.empty()) {
        os << dev.logo;
    }
    return os;
}
