// Эта программа для аэропорта, проверяет, правильным ли эшелоном летит самолёт.

#include <iostream>

int main() {
    std::cout << "Задание 1. Полёт нормальный!" << std::endl;
    int speed;
    std::cout << "Введите скорость самолёта: ";
    std::cin >> speed;                          //ввод скорости
    if (speed < 750 || speed > 850) {
        std::cout << "Скорость не в диапазоне от 750 до 850 км/ч" << std::endl; //вывод сообщения об ошибке

    } else {
        int height;
        std::cout << "Введите высоту полёта: ";
        std::cin >> height;                     //ввод высоты
        if (height < 9000 || height > 9500) {
            std::cout << "Высота не в диапазоне от 9000 до 9500 метров" << std::endl; //вывод сообщения об ошибке
        } else {
            std::cout << "Полёт нормальный!" << std::endl;
        }
    }
    return 0;
}