// Эта программа проверяет, сумму двух чисел и сравнивает их с введенным значением.

#include <iostream>

int main() {
    std::cout << "Складываем в уме" << std::endl;
    int numberA;
    int numberB;
    int userNumberSumIn;
    int result;
    std::cout << "Введите первое число: ";
    std::cin >> numberA;
    std::cout << "Введите второе число: ";
    std::cin >> numberB;
    std::cout << "Введите их сумму: ";
    std::cin >> userNumberSumIn;        // Вводимое пользователем результат сложения

    // Вычисляем сумму двух чисел
    result = numberA + numberB;

    std::cout << "-----Проверяем-----" << std::endl; // Выводим сообщение на экран о результате сложения
    // Проверяем, правильно ли пользователь ответил
    if (result == userNumberSumIn) {
        std::cout << "Верно!" << std::endl; // Выводим сообщение на экран о правильном ответе пользователя.

    } else {
        std::cout << "Ошибка! Верный результат: " << result << std::endl;   // Выводим сообщение на экран о
        // неправильном ответе пользователя и правильном результате.
    }
    return 0;
}