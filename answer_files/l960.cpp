#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> days = {
        {"Sunday", 0},
        {"Monday", 1},
        {"Tuesday", 2},
        {"Wednesday", 3},
        {"Thursday", 4},
        {"Friday", 5},
        {"Saturday", 6}
    };

    std::string input;
    std::getline(std::cin, input);

    if (days.count(input)) {
        std::cout << days[input] << '\n';
    } else {
        std::cout << "error" << '\n';
    }

    return 0;
}