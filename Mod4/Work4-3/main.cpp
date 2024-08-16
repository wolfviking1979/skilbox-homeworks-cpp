// Эта программа проверяет, является ли заданное число чётным.

#include <iostream>

int main() {
    std::cout << "Проверка на чётное число" << std::endl;
    int numberIn;
    std::cout << "Введите число: ";
    std::cin >> numberIn;

    std::cout << "-----Проверяем-----" << std::endl;
    if (numberIn % 2 == 0) {
        std::cout << "Число " << numberIn << " — чётное" << std::endl;
    } else {
        std::cout << "Число " << numberIn << " — не чётное" << std::endl;
    }
    return 0;
}
