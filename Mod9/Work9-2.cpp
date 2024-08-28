// Эта программа проверяет корректность вводимого числа.


#include <iostream>

int main() {
    int point = 0;
    int digit = 0;
    int minus = 0;
    bool correct = true;
    std::cout << "Длинное вещественное число" << std::endl;
    std::cout << "----------------------------------------------------\n";
    std::string number;
    std::cout << "Введите число: " << std::endl;
    std::cin >> number;

    // Цикл по строке на корректность введенного числа
    for (int i = 0; i < number.length(); i++) {
        if (number[i] >= '0' && number[i] <= '9') { // проверка на кол-во цифр
            digit++;
        } else {
            if (number[i] == '.') { // проверка на точку
                point++;
            } else {
                if (number[i] == '-') { // проверка на минус
                    minus++;
                } else {
                    correct = false;
                }
            }
        }
    }

    if (digit == 0 || point > 1 || minus > 1) {
        correct = false;
    }

    if (correct) {
        std::cout << "Число корректно\n";
    } else {
        std::cout << "Число не корректно\n";
    }
    return 0;
}
