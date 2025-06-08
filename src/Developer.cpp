#include "developer.hpp"
#include <fstream>
#include <sstream>
#include <stdexcept>

Developer::Developer(const std::string& name, const std::string& alias)
    : name(name), alias(alias), logo("") {}

void Developer::drink_coffee() {
    std::cout << "Ahhhh, I needed that coffee!!!\n";
}

void Developer::load_logo_from_file(const std::string& filename) {
    std::ifstream file(std::string(LOGO_PATH) + "/" + filename);
    if (!file) throw std::runtime_error("Invalid logo file: " + filename);

    std::ostringstream ss;
    ss << file.rdbuf();
    logo = ss.str();
}

std::string Developer::get_name() const { return name; }
std::string Developer::get_alias() const { return alias; }
std::string Developer::get_logo() const { return logo; }

std::ostream& operator<<(std::ostream& os, const Developer& dev) {
    if (!dev.logo.empty()) os << dev.logo << "\n";
    os << "Name: " << dev.name << "\nAlias: " << dev.alias << "\n";
    return os;
}