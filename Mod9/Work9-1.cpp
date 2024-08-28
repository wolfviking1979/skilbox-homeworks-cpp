

#include <iostream>

int main() {
    std::cout << "Время в пути\n";
    std::cout << "---------------------------------------------------\n";
    std::cout << "Введите время отправления (HH:MM): ";
    std::string departureTime;
    std::cin >> departureTime;
    std::cout << "Введите время прибытия (HH:MM): ";
    std::string arrivalTime;
    std::cin >> arrivalTime;
    // проверка на корректность ввода данных: HH:MM
    if (departureTime.length() != 5 || arrivalTime.length() != 5 || departureTime[2] != ':' ||
        arrivalTime[2] != ':' || departureTime[0] < '0' || departureTime[0] > '2' ||
        departureTime[1] < '0' || departureTime[1] > '9' || departureTime[3] < '0' ||
        departureTime[3] > '5' || departureTime[4] < '0' || departureTime[4] > '9' ||
        arrivalTime[0] < '0' || arrivalTime[0] > '2' || arrivalTime[1] < '0' ||
        arrivalTime[1] > '9' || arrivalTime[3] < '0' || arrivalTime[3] > '5' ||
        arrivalTime[4] < '0' || arrivalTime[4] > '9') {
        std::cout << "Ошибка ввода!\n";
    } else {
        // Конвертация строк в число
        int departureHours = 10 * (departureTime[0] - '0') + (departureTime[1] - '0');
        int departureMinutes = 10 * (departureTime[3] - '0') + (departureTime[4] - '0');
        int arrivalHours = 10 * (arrivalTime[0] - '0') + (arrivalTime[1] - '0');
        int arrivalMinutes = 10 * (arrivalTime[3] - '0') + (arrivalTime[4] - '0');
        // проверка на превышение времени
        if (departureHours > 23 || departureMinutes > 59 || arrivalHours > 23 || arrivalMinutes > 59) {
            std::cout << "Ошибка ввода!\n";
        } else {
            int travelHours;
            int travelMinutes = 0;
            if (departureHours > arrivalHours) {
                travelHours = 24 - departureHours + arrivalHours;
                travelMinutes = arrivalMinutes - departureMinutes;

            } else {
                travelHours = arrivalHours - departureHours;
            }
            if (arrivalMinutes < departureMinutes) {
                travelHours--;
            } else {
                travelMinutes = arrivalMinutes - departureMinutes;
            }
            std::cout << "Поездка составила " << travelHours << " ч. " << travelMinutes << " мин.\n";
        }
    }
}