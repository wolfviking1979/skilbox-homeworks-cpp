
#include <iostream>

int main() {
    std::cout << "Задание 2. Кофемашина" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    int water = 0;
    int milk = 0;
    int americano = 0;
    int latte = 0;
    int drink = 0;

    while (water <= 0 || milk <= 0 ) {
        std::cout << "Сколько мл воды залить в кофемашину? ";
        std::cin >> water;
        std::cout << "Сколько мл молока залить в кофемашину? ";
        std::cin >> milk;
        if (water <= 0 || milk <= 0) {
            std::cout << "Ошибка ввода! Введите положительное число.\n"; // Вводим положительное число
        }
    }

    while (water >= 300 || (water >= 30 && milk >= 270)) {
        std::cout << "Выберите напиток (1 — американо, 2 — латте): ";
        std::cin >> drink;
        if (drink <= 0 || drink > 2) {
            std::cout << "Ошибка ввода! Выберите напиток:\n";
        } else {
            if (drink == 1) {
                if (water >= 300) {
                    water -= 300;
                    std::cout << "Ваш напиток готов." << std::endl;
                    americano++;
                } else {
                    std::cout << "Не хватает воды" << std::endl;
                }
            }

            if (drink == 2) {
                if (water >= 30 && milk >= 270) {
                    water -= 30;
                    milk -= 270;
                    std::cout << "Ваш напиток готов.\n";
                    latte++;
                } else {
                    if (water < 30) {
                        std::cout << "Не хватает воды\n";
                    } else if (milk < 270){
                        std::cout << "Не хватает молока\n";
                    }
                }
            }
        }
    }
    std::cout << "***Отчёт***\n";
    std::cout << "Ингредиентов осталось:\n";
    std::cout << "Вода: " << water << " мл\n";
    std::cout << "Молоко: " << milk << " мл\n";
    std::cout << "Кружек американо приготовлено: " << americano << std::endl;
    std::cout << "Кружек латте приготовлено: " << latte << std::endl;

    return 0;
}