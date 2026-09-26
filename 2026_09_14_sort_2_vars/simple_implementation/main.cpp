#include <iostream>

void my_sort(int *arr, const int size);

int main() {
    int size = 0;
    std::cout << "Введите размер массива: ";
    std::cin >> size; // Считываем размер

    // Создаем массив нужного размера
    int *arr = new int[size];

    // Заполняем массив числами с клавиатуры
    std::cout << "Введите элементы массива:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    // Выводим исходный массив
    std::cout << "Первоначальный массив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Вызываем функцию сортировки
    my_sort(arr, size);

    // Выводим отсортированный массив
    std::cout << "Отсортированный массив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr; // Освобождаем память
    return 0;
}

// Функция сортировки "Пузырьком"
void my_sort(int *arr, const int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            // Если левый элемент больше правого — меняем их местами
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
