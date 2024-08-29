//Эта программа, которая по загаданному числу и по названному вторым игроком числу определяет,
// сколько во втором числе «быков» и сколько «коров».

#include <iostream>
#include <string>


int main() {
    std::string firstNumber;
    std::string secondNumber;
    bool ok;
    std::cout << "«Быки и коровы» (дополнительное задание)\n";
    std::cout << "-----------------------------------------\n";

    //Проверяем, является ли первое число 4-значным
    // если да, то проверяем, является ли второе число 4-значным.

    do {
        std::cout << "Введите первое число: ";
        std::cin >> firstNumber;
        std::cout << "Введите второе число: ";
        std::cin >> secondNumber;

        ok = firstNumber.length() == 4 && secondNumber.length() == 4;
        if (ok) {
            for (int i = 0; i < 4; ++i) {
                if (firstNumber[i] < '0' || firstNumber[i] > '9') ok = false;
                if (secondNumber[i] < '0' || secondNumber[i] > '9') ok = false;
            }
        }
        if (!ok) {
            std::cout << "----------------------------------\n";
            std::cout << "Ошибка ввода! Повторите попытку!\n";
            std::cout << "----------------------------------\n";
        }
    } while (!ok);

    int bulls = 0;
    int cows = 0;
    // Проверяем, есть ли в числе быки.
    for(int i = 0  ; i  < 4; i++) {
        if (secondNumber[i] == firstNumber[i]) {
            bulls++;
            firstNumber[i] = 'b'; // Делаем пометку на быка.
            secondNumber[i] = 'b';
        }
    }

    // Проверяем, есть ли в числе коровы.
    for(int i = 0  ; i  < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if (i != j && firstNumber[i] == secondNumber[j] && firstNumber[i] != 'b' && firstNumber[i] != 'c' ) {
                cows++;
                firstNumber[i] = 'c'; // Делаем пометку на корову.
                secondNumber[j] = 'c';
            }
        }
    }

    // Выводим результат.
    std::cout << "Быков: " << bulls << ", Коров: " << cows << '\n';
}