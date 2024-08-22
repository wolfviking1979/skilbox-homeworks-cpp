#include <iostream>

int main() {
    std::cout << "Задание 7. Сокращение дроби* (дополнительное задание)" << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;
    int numberM = 0;
    int numberN = 0;

    std::cout << "Введите числитель: ";
    std::cin >> numberM;
    std::cout << "Введите знаменатель: ";
    std::cin >> numberN;
    int numberM2 = numberM;
    int numberN2 = numberN;
    int temp;

    if (numberM < 0) {
        numberM2 *= -1;
        numberN2 *= -1;
    } else {
        while (numberN!= 0) {
            temp = numberM % numberN;
            numberM = numberN;
            numberN = temp;
        }
    }

    numberM2 /= numberM;
    numberN2 /= numberM;

    std::cout << "Результат: " << numberM2 << " / " << numberN2 << std::endl;
    return 0;

}