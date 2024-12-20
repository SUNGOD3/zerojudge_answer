#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    int n;
    std::cin >> n;
    std::cin.ignore();  // Ignore the newline character after n

    std::vector<std::string> names(n);
    for (int i = 0; i < n; ++i) {
        std::getline(std::cin, names[i]);
    }

    std::sort(names.begin(), names.end(), [](const std::string& a, const std::string& b) {
        if (a.size() == b.size()) {
            return a < b;  // Alphabetical order for names of the same length
        } else {
            return a.size() < b.size();  // Length order
        }
    });

    for (const auto& name : names) {
        std::cout << name << '\n';
    }

    return 0;
}