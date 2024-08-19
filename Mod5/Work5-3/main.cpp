//Эта программа-календарь для мая. Она должна проверять введённый номер дня и сообщать, выходной этот день или рабочий.

#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Задание 3. Майские — усложнение\n";
    int day;
    int dayStartMonth;
    std::cout << "Введите день недели с которого начинается месяц: ";
    std::cin >> dayStartMonth;
    std::cout << "Введите день месяца: ";
    std::cin >> day;

    if (day < dayStartMonth || day > 31) {
        std::cout << "Введено некорректное число";
    } else {
        if ((day >= 1 && day <= 5) || (day >= 8 && day <= 10)) {
            std::cout << "Выходной день" << std::endl;
        } else if (((day - dayStartMonth + 1) % 7 == 0 ||
                    ((day - dayStartMonth + 1) % 7 == 6)) && day > 10) {
            std::cout << "Выходной день" << std::endl;
        } else {
            std::cout << "Рабочий день" << std::endl;
        }
    }
    return 0;
}
