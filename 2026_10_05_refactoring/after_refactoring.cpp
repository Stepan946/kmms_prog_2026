#include <iostream>

bool is_sequence_increasing(const double* arr, const int n);
void print_array(const char* const comment, const double* arr, const int n);

int main() {
    static const int ARRAY_SIZE = 10;

    double arr[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++) {
        std::cout << "Введите " << i << " элемент: ";
        std::cin >> arr[i];
    }

    print_array("Введенный массив: ", arr, ARRAY_SIZE);

    bool is_increasing = is_sequence_increasing(arr, ARRAY_SIZE);

    if (is_increasing) {
        std::cout << "Последовательность возрастающая" << std::endl;
    } else {
        std::cout << "Последовательность не возрастающая" << std::endl;
    }

    return 0;
}

bool is_sequence_increasing(const double* arr, const int n) {
    for (int i = 0; i < n - 1; i++) {
        bool is_order_violated = (arr[i] > arr[i + 1]);

        if (is_order_violated) {
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
