// Эта программа для печати важных объявлений.
// Сверху объявления должен располагаться колонтитул.

#include <iostream>

int main() {
    std::cout << "Задание 6. Важные объявления" << std::endl;
    std::cout << "--------------------------------------" << std::endl;

    int lengthStr;      // длина строки.
    int countChars; // количество символов в строке.
    std::cout << "Введите общую длину колонтитула:" << std::endl;
    std::cin >> lengthStr; // Вводим длину строки.

    std::cout << "Введите количество количество восклицательных знаков:" << std::endl;
    std::cin >> countChars; // Вводим количество символов в строке.
    int fullStr = lengthStr - countChars;

    for (int i = 0; i < fullStr; i++) {
        if (fullStr % 2 == 1) { // Выравнивание знаков по центру.
            fullStr++;
        }
        if ( i == (fullStr / 2)) {
            for (int j = 0; j < countChars; j++) {
                std::cout << "!"; // Выводим восклицательный знак.
            }
        }
        std::cout << "~"; // выводим тире.
    }
    return 0;
}