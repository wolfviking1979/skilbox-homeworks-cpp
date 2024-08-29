

#include <iostream>
#include <string>

int main() {
    std::string departure;
    std::string arrival;

    int departureHours;
    int departureMinutes;

    int arrivalHours;
    int arrivalMinutes;

    while (true) {
        std::cout << "Введите время отправления(hh:mm):\n";
        std::cin >> departure;
        std::cout << "Введите время прибытия(hh:mm):\n";
        std::cin >> arrival;

        if (departure.length() != 5 || arrival.length() != 5) {
            std::cout << "Ошибка ввода! Неверная длина!\n";
            continue;
        }

        if (arrival[0] < '0' || arrival[0] > '2' || arrival[1] < '0' || arrival[1] > '9'
            || departure[0] < '0' || departure[0] > '2' || departure[1] < '0' || departure[1] > '9') {
            std::cout << "Ошибка ввода! Неверный формат часов!\n";
            continue;
        }

        if (arrival[3] < '0' || arrival[3] > '5' || arrival[4] < '0' || arrival[4] > '9'
            || departure[3] < '0' || departure[3] > '5' || departure[4] < '0' || departure[4] > '9') {
            std::cout << "Ошибка ввода! Неверный формат минут!\n";
            continue;
        }

        if (arrival[2] != ':' || departure[2] != ':') {
            std::cout << "Ошибка ввода! Неверный делитель!\n";
            continue;
        }

        // Конвертация времени из строчного типа в целочисленный тип
        departureHours = (departure[0] - '0') * 10 + (departure[1] - '0');
        departureMinutes = (departure[3] - '0') * 10 + (departure[4] - '0');

        arrivalHours = (arrival[0] - '0') * 10 + (arrival[1] - '0');
        arrivalMinutes = (arrival[3] - '0') * 10 + (arrival[4] - '0');

        if (departureHours >= 24 || departureMinutes > 59
            || arrivalHours >= 24 || arrivalMinutes > 59) {
            std::cout << "Ошибка ввода! Неверный формат времени\n";
            continue;
        }
        break;
    }

    // Вычисление времени в пути
    int departureTime = departureHours * 60 + departureMinutes;
    int arrivalTime = arrivalHours * 60 + arrivalMinutes;

    int travelTime;
    if (departureTime >= arrivalTime)
        travelTime = 24 * 60 - departureTime + arrivalTime;
    else
        travelTime = arrivalTime - departureTime;

    std::cout << "Время в пути: " << travelTime / 60 << " часов, " << travelTime % 60 << " минут"<< std::endl;
}