#include <iostream>
#include <cassert>

float travelTime(float, float);  // Прототип функции

int main() {
    std::cout << "Задание 3. Использование assert\n";
    std::cout << "-------------------------------\n";

    float distance, speed, time;
    std::cout << "Введите расстояние до точки назначения (км): ";
    std::cin >> distance;
    std::cout << "Введите среднюю скорость движения (км/ч): ";
    std::cin >> speed;

    time = travelTime(distance, speed);
    printf("Время поездки: %.2f час.\n", time); // Вывод результата функции
    return 0;
}

float travelTime(float distance, float speed) {
    assert(speed > 0);
    assert(distance > 0);
    return distance / speed;
}