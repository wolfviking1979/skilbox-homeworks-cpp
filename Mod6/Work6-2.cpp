// Эта программа считает сколько цифр в числе.
// Выходные данные: количество цифр в числе.


#include <iostream>

int main() {
    std::cout << "Задание 2. Слишком большие числа" << std::endl;
    int number;
    std::cout << "Введите число: ";
    std::cin >> number;
    int count = 0;
    number == 0 ? count = 1 : number;
    while (number!= 0) {
        number /= 10;
        count++;
    } //Пока число не равно нулю, считаем количество цифр
    std::cout << "Цифр в числе: " << count << std::endl;
    return 0;
}
