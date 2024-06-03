#include <iostream>
int main() {
    double R;
    std::cin >> R;
    if (R >= 17.43) {
        std::cout << 0;
    } else if (R >= 17.00) {
        std::cout << 1;
    } else if (R >= 16.50) {
        std::cout << 3;
    } else if (R >= 16.00) {
        std::cout << 7;
    } else if (R >= 15.50) {
        std::cout << 10;
    } else if (R >= 15.00) {
        std::cout << 15;
    } else {
        std::cout << 20;
    }
    return 0;
}