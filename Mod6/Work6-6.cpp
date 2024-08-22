// Эта программа вычисляет время накопления суммы на накопительном счете банка.

#include <iostream>

int main() {
    std::cout << "Задание 6. Вклады";
    std::cout << "----------------------------------";
    int cach;
    int percent; // процентная ставка вклада.
    int year = 0; // количество лет вклада.
    int cachEnd; // Желаемая сумма вклада.
    std::cout << "Введите размер вклада: ";
    std::cin >> cach;
    std::cout << "Введите процентную ставку: ";
    std::cin >> percent;
    std::cout << "Введите желаемую сумму: ";
    std::cin >> cachEnd;

    while (cachEnd >= cach) {
        year++;
        int percentCur = cach * percent / 100;
        cach += percentCur;
        std::cout << year << " год: " << cach<< std::endl;
        if (cach >= cachEnd) break;
    }
    std::cout << "Придётся подождать: " << year << " лет" << std::endl;
    return 0;
}