// Эта программа определяет уровень персонажа в компьютерной игре,
//и выводит сообщение с уровнем.


#include <iostream>

int main() {
    std::cout << "Калькулятор опыта" << std::endl;
    int userPoints;         // Переменная для хранения очков опыта
    std::cout << "Введите число очков опыта: ";
    std::cin >> userPoints;

    // Вычисляем уровень персонажа. В зависимости от значения переменной userPoints, выводится уровень персонажа.
    std::cout << "-----Считаем-----" << std::endl;
    if (userPoints < 0) {
        std::cout << "Введено неверное число очков опыта" << std::endl;
    } else {
        if (userPoints < 1000) {
            std::cout << "Ваш уровень: 0" << std::endl;
        } else if (userPoints <= 2500) {
            std::cout << "Ваш уровень: 1" << std::endl;
        } else if (userPoints <= 4500) {
            std::cout << "Ваш уровень: 2" << std::endl;
        } else if (userPoints <= 8000) {
            std::cout << "Ваш уровень: 3" << std::endl;
        } else if (userPoints <= 10000) {
            std::cout << "Ваш уровень: 4" << std::endl;
        } else if (userPoints <= 20000) {
            std::cout << "Ваш уровень: 5" << std::endl;
        } else {
            std::cout << "Вами достигнут максимальный уровень!" << std::endl;
        }
    }

    return 0;
}
