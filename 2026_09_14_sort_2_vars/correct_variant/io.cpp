#include <iostream>
#include "io.hpp"

int read_size() {
    int size = 0;
    std::cout << "Введите размер массива: ";
    std::cin >> size;
    return size;
}

void read_array(int *arr, const int size) {
    std::cout << "Введите " << size << " элементов массива:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "arr[" << i << "] = ";
        std::cin >> arr[i];
    }
}

void print_array(const int *arr, const int size, const char *message) {
    std::cout << message;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
