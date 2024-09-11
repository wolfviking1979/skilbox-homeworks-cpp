// Эта программа демонстрирует метод сортировки пузырьком, массива чисел с плавающей точкой.
// Выводит на экран элементы массива в порядке убывания.

#include <iostream>

int main() {
    std::cout << "Задание 2. Сортировка\n";
    std::cout << "------------------------------------------------------\n";

    const int sizeArr = 5; //размер массива 4 элемента
    float numbers[sizeArr + 1];

    std::cout << "Введите " << sizeArr << " десятичных чисел\n";
    //заполнение массива
    for (int i = 0; i < sizeArr; i++) {
        std::cout << "Введите число " << i + 1 << ": ";
        std::cin >> numbers[i];
    }
    //вывод массива в консоль до сортировки по убыванию
    for (int i = 0; i < sizeArr; i++) {
        std::cout << numbers[i] << " ";
    }

    // Быстрая сортировка по убыванию
    for (int i = 0; i < sizeArr; i++) {
        for (int j = i + 1; j < sizeArr; j++) {
            if (numbers[i] < numbers[j]) {
                float temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    std::cout << "\n--------------------------------------------------" << std::endl;
    //вывод массива в консоль после сортировки по убыванию
    for (int i = 0; i < sizeArr; ++i) {
        std::cout << numbers[i] << " ";
    }
    return 0;
}
