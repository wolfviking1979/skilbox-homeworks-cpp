
#include <iostream>

int main() {
    std::cout << "Задание 5. Числа Фибоначчи" << std::endl;
    std::cout << "--------------------------------------" << std::endl;
    const unsigned int MAX_VALUE = 2147483647;    // Граница числа Фибоначчи
    unsigned int first;                           // Первое число последовательности
    unsigned int second;                          // Второе число последовательности
    unsigned int sum;                             // Сумма двух предыдущих чисел последовательности.

    std::cout << "Число в последовательности: " << std::endl;
    std::cin >> first;                              // Вводимое число последовательности.
    std::cout << "Число в последовательности: " << std::endl;
    std::cin >> second;                             // Вводимое число последовательности.

    while (second < MAX_VALUE / 2) {
        std::cout  << second << std::endl;
        sum = first + second;
        first = second;
        second = sum;
    }
    return 0;
}