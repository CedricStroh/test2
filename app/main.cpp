#include "junior_developer.hpp"
#include "senior_developer.hpp"
#include <vector>
#include <memory>

int main() {
    std::vector<std::shared_ptr<Developer>> team;

    auto senior = std::make_shared<SeniorDeveloper>("Jannis Messer", "CodeMasterJ");
    auto junior = std::make_shared<JuniorDeveloper>("Cedric Stroh", "CodeKidC");

    try {
        senior->load_logo_from_file("senior.txt");
        junior->load_logo_from_file("junior.txt");
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }

    team.push_back(senior);
    team.push_back(junior);

    for (const auto& dev : team) {
        dev->solve_problem();
        std::cout << "\n";
    }
    return 0;
}
