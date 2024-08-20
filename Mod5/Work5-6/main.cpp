// Эта программа считывает день, месяц и год рождения клиента
// и вычисляет разрешено ли ему продавать алкоголь. Выводит результат.

#include <iostream>

int main() {
    std::cout << "Задание 6. Грустное совершеннолетие\n";
    std::cout << "---------------------------------------\n";
    int birthDay, birthMonth, birthYear;
    int dayNow, monthNow, yearNow;

    std::cout << "Введите дату рождения посетителя (день, месяц, год):\n";
    std::cin >> birthDay >> birthMonth >> birthYear;
    std::cout << "Введите текущую дату (день, месяц, год):\n";
    std::cin >> dayNow >> monthNow >> yearNow;

    if (yearNow - birthYear >= 18 && dayNow > birthDay) {
        std::cout << "Можно продать алкоголь.\n";
    } else {
        std::cout << "Нельзя продать алкоголь.\n";
    }
    return 0;
}
