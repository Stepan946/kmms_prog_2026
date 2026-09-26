#include <iostream>
#include "io.hpp"
#include "sortings.hpp"

int main() {
    int size = read_size();

    if (size <= 0) {
        std::cout << "Ошибка: размер массива должен быть больше 0!" << std::endl;
        return 1;
    }

    int *arr = new int[size];

    read_array(arr, size);
    print_array(arr, size, "Первоначальный массив: ");

    my_sort(arr, size);

    print_array(arr, size, "Отсортированный массив: ");

    delete[] arr;
    return 0;
}
