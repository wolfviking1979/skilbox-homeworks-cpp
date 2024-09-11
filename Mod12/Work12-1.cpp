// Эта программа считывает с консоли фамилии жильцов и вносит их в массив.
// После чего программа выводит на экран фамилии жильцов, которые были введены в массив.

#include <iostream>

int main() {
    std::cout << "Задание 1. Многоквартирный дом\n";
    std::string flat[10];
    int numberFlat;

    std::cout << "Введите фамилии жильцов квартир с первой по десятую\n";
    for (int i = 0; i < 10; i++) {
        std::cout << "Фамилия жильца №" << i + 1 << ": ";
        std::cin >> flat[i];
    }

    for (int i = 0; i < 3; i++) {
        std::cout << "Введите номер квартиры: ";
        std::cin >> numberFlat;
        if (numberFlat < 1 || numberFlat > 10) {
            std::cout << "Введен некорректный номер квартиры\n";
        } else {
            std::cout << "Фамилия жильца квартиры №" << numberFlat << ": " << flat[numberFlat - 1] << std::endl;
        }
    }
}