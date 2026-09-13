#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    std::cout << "Привет, мир!" << std::endl;
    return 0;
}
