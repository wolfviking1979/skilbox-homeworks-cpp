#include <iostream>

int main() {
    int menCount;
    int barbersCount;
    std::cout << "Введите число мужчин в городе: " << std::endl;
    std::cin >> menCount;

    std::cout << "Сколько барберов удалось нанять?" << std::endl;
    std::cin >> barbersCount;

    // Сколько человек может постричь один барбер в смену?
    int menPerBarber = 8;  // 8 человек в смену, смена 8 часов.

    // Сколько человек успеет постричь один барбер за месяц?
    int menPerBarberPerMonth = menPerBarber * 30;
    std::cout << "Один барбер стрижет столько клиентов за месяц: " << menPerBarberPerMonth << std::endl;

    // Сколько нужно барберов что бы постричь menCount за месяц?
    int requiredBarbersCount = menCount / menPerBarberPerMonth;
    if (menCount % menPerBarberPerMonth > 0) {
        requiredBarbersCount++;
    }

    std::cout << "Необходимое число барберов: " << requiredBarbersCount << std::endl;

    // Сколько человек успеют постричь requiredBarbersCount за месяц?
    std::cout  << requiredBarbersCount << " барбера могут постричь: " <<
    requiredBarbersCount * menPerBarberPerMonth << " клиентов за месяц." << std::endl;

    // Сравним с количеством имеющихся барберов.
    if (requiredBarbersCount > barbersCount) {
        std::cout << "Необходимо нанять еще " << requiredBarbersCount - barbersCount << " барберов." << std::endl;
    } else {
        std::cout << "Уже нанято достаточное количество барберов." << std::endl;
    }
    return 0;
}
