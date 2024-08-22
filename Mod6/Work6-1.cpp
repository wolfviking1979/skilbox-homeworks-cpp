// Эта программа имитирует часы с кукушкой.
// В начале работы она спрашивает, который час, а затем
// нужное количество раз пишет «Ку-ку!»

#include <iostream>

int main() {
    std::cout << "Задание 1. Кукушка" << std::endl;
    int hour;
    int hourCount = 1;
    std::cout << "Введите, который час(от 1 до 12):\n";
    std::cin >> hour;
    if (hour < 0 || hour > 12) {
        std::cout << "Введенное значение некорректно" << std::endl;
    } else {
        hour == 0 ? hour = 12 : hour;
        while (hourCount <= hour) {
            std::cout << "Ку-ку!" << std::endl;
            hourCount++;
        }
    }
    return 0;
}
