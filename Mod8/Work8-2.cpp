// Эта программа имитирует нанесения повреждения по игровому персонажу.
// Повреждения наносятся в зависимости от защищенности персонажа.

#include <iostream>

int main() {
    std::cout << "Задание 2. Immolate Improved!\n";
    float health;       // Здоровье орка
    float resistance;   // Сила орка
    float damage;       // Мощность удара

    std::cout << "Введите количество здоровья орка:(от 0 до 1): ";
    std::cin >> health;

    // проверка ввода данных
    if (health <= 0 || health > 1) {
        std::cout << "Ошибка ввода данных!";
    } else {
        while (health > 0) {
            std::cout << "Введите мощность удара(от 0 до 1): ";
            std::cin >> damage;
            std::cout << "Введите сопротивляемость магии орка:(от 0 до 1): ";
            std::cin >> resistance;
            if (damage < 0 || damage > 1 || resistance < 0 || resistance > 1) {
                std::cout << "Ошибка ввода данных!";
            } else {
                health -= damage * (1 - resistance);
                // проверка ввода данных
                if (health <= 0) {
                    std::cout << "Орк погиб!\n";
                } else {
                    std::cout << "Урон " << damage  << ", сопротивляемость " << resistance <<
                    ", по орку будет нанесено " << damage * (1 - resistance) << std::endl;
                    std::cout << "Здоровье орка: " << health << std::endl;
                }
            }
        }
    }
}