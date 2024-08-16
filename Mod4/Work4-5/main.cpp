// Эта программа проверяет, делится ли число на другое без остатка.


#include <iostream>

int main() {
    std::cout << "Кратность числа" << std::endl;
    int numberA;
    int numberB;

    std::cout << "Введите первое число: ";
    std::cin >> numberA;
    std::cout << "Введите второе число: ";
    std::cin >> numberB;

    // Проверяем делится ли число на другое без остатка.
    std::cout << "-----Проверяем-----" << std::endl;
    if (numberA % numberB == 0) {
        std::cout << "Да, " << numberA << " делится на " << numberB << " без остатка!" << std::endl;
    } else {
        std::cout << "Нет, " << numberA << " не делится на " << numberB << " без остатка!" << std::endl;
    }
    return 0;
}
