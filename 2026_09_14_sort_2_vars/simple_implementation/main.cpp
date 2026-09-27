#include <iostream>

void my_sort(int *arr, const int size);
void print_array(const int *arr, const int size, const char *message);

int main() {
    int size = 0;
    std::cout << "Введите размер массива: ";
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Ошибка: размер массива должен быть больше 0!" << std::endl;
        return 1;
    }

    int *arr = new int[size];

    std::cout << "Введите " << size << " элементов массива:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "arr[" << i << "] = ";
        std::cin >> arr[i];
    }

    print_array(arr, size, "\nПервоначальный массив: ");

    my_sort(arr, size);

    print_array(arr, size, "Отсортированный массив: ");

    delete[] arr;
    return 0;
}

void print_array(const int *arr, const int size, const char *message) {
    std::cout << message;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void my_sort(int *arr, const int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
