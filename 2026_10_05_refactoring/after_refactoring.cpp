#include <iostream>

bool is_sequence_increasing(const double* arr, const int n);
void print_array(const char* const comment, const double* arr, const int n);

int main() {
    static const int ARRAY_SIZE = 10;
    double arr[ARRAY_SIZE];

    std::cout << "Надо ввести массив из 10-и элементов." << std::endl;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        std::cout << "Введите " << i + 1 << "-й элемент: ";
        std::cin >> arr[i];
    }

    print_array("Введенный массив: ", arr, ARRAY_SIZE);

    const bool is_increasing = is_sequence_increasing(arr, ARRAY_SIZE);

    if (is_increasing) {
        std::cout << "Последовательность возрастающая." << std::endl;
    } else {
        std::cout << "Последовательность не возрастающая." << std::endl;
    }

    return 0;
}

bool is_sequence_increasing(const double* arr, const int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

void print_array(const char* const comment, const double* arr, const int n) {
    static const char SPACE = ' ';

    std::cout << comment;
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << SPACE;
    }
    std::cout << std::endl;
}