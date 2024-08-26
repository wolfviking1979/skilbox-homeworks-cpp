// Эта программа эмитирует космический симулятор.

#include <iostream>
#include <cmath>

int main() {
    int force = 0; // Сила тяги
    int weight = 0; // Масса космического корабля.
    int time = 0; // Время полёта.
    float boost;// Показатель ускорения.
    float distance = 0; // Расстояние между космическим кораблем и первоначальным положением.
    std::cout << "Введите силу тяги: ";
    std::cin >> force;
    std::cout << "Введите массу космического корабля: ";
    std::cin >> weight;
    std::cout << "Введите время полёта: ";
    std::cin >> time;
    if (force < 0 || weight < 0 || time < 0) {
        std::cout << "Введенные данные некорректны." << std::endl;
    } else {
        boost = (float(force) / float(weight)); // Показатель ускорения.
        distance = boost * std::pow(time, 2) / 2;
    }

    std::cout << "Расстояние между космическим кораблем и первоначальным положением: " << distance << std::endl;
    return 0;
}