// Эта программа вычисляет сумму налога по прогрессивной шкале в зависимости от полученного заработка.

#include <iostream>

int main() {
    std::cout << "Прогрессивный налог" << std::endl;
    double income = 0;
    double tax1 = 0;
    double tax2 = 0;
    double tax3 = 0;
    double taxSum;

    std::cout << "Введите ваш доход: ";
    std::cin >> income;
    std::cout << "-----Считаем-----" << std::endl;

    if (income < 0) {
        std::cout << "Вы не можете иметь отрицательный доход!" << std::endl;
    } else {
        if (income < 10000) {                                 // Налог по прогрессивной шкале 13%
            tax1 = income * 0.13;
        } else if (income >= 10000 && income < 50000) {      // Налог по прогрессивной шкале 20%
            tax2 = (income - 10000) * 0.2 + 0.13 * 10000;
        } else if (income >= 50000) {                       // Налог по прогрессивной шкале 30%
            tax3 = (income - 50000) * 0.3 + 0.2 * (50000 - 10000) + 0.13 * 10000;
        }
    }

    taxSum = tax1 + tax2 + tax3;                            // Сумма налога.

    printf("Сумма налога: $%.2lf\n", (taxSum > 0) ? taxSum : 0);
    return 0;
}
