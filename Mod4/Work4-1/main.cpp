// Эта программа выводит в консоль минимальное значение из двух чисел.

#include <iostream>

int main() {
    std::cout << "Минимум из двух чисел" << std::endl;
    int numberA;
    int numberB;

    std::cout << "Введите первое число:\n";
    std::cin >> numberA;
    std::cout << "Введите второе число:\n";
    std::cin >> numberB;
    std::cout << "-----Проверяем-----\n";

    if (numberA < numberB) {
        std::cout << "Наименьшее число: " << numberA << std::endl;
    } else if (numberB < numberA) {
        std::cout << "Наименьшее число: " << numberB << std::endl;
    } else {
        std::cout << "Числа равны!" << numberB << std::endl;
    }
    return 0;
}
