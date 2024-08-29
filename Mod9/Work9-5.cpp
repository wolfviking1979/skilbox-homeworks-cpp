//Эта программа, которая переводит данное пользователем число в римскую запись.

#include <iostream>

int main() {
    int num;
    std::string result;

    std::cout << "Из обычных чисел — в римские (дополнительное задание)\n";
    std::cout << "----------------------------------------------------\n";
    std::cout << "Введите число от 1 до 4000: ";
    std::cin >> num;

    // Проверка введенного числа.
    while (num <= 0 || num >= 4000) {
        std::cout << "----------------------------------------------------\n";
        std::cout << "Ошибка! Введите число от 1 до 4000.\nПовторите ввод!!!\n";
        std::cout << "----------------------------------------------------\n";
        std::cin >> num;
    }

    while (num) {
        if (num >= 1000) {
            num -= 1000;
            result += 'M';
        }
        else if (num >= 900) {
            num -= 900;
            result += "CM";
        }
        else if (num >= 500) {
            num -= 500;
            result += 'D';
        }
        else if (num >= 400) {
            num -= 400;
            result += "CD";
        }
        else if (num >= 100) {
            num -= 100;
            result += 'C';
        }
        else if (num >= 90) {
            num -= 90;
            result += "XC";
        }
        else if (num >= 50) {
            num -= 50;
            result += 'L';
        }
        else if (num >= 40) {
            num -= 40;
            result += "XL";
        }
        else if (num >= 10) {
            num -= 10;
            result += 'X';
        }
        else if (num == 9) {
            num -= 9;
            result += "IX";
        }
        else if (num >= 5) {
            num -= 5;
            result += 'V';
        }
        else if (num == 4){
            num -= 4;
            result += "IV";
        }
        else {
            for (int i = 0; i < num; i++) {
                result += 'I';
            }
            num = 0;
        }
    }

    std::cout << "Римская запись: " << result << std::endl;
}