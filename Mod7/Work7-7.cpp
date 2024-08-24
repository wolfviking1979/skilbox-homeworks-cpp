#include <iostream>

int main() {
    std::cout << "Задание 7. Биолаборатория* (дополнительное задание)\n";
    std::cout << "----------------------------------------------------\n";
    int bacteria, antibiotic;
    int hour = 0;
    std::cout << "Введите количество бактерий: ";
    std::cin >> bacteria;
    std::cout << "Введите количество антибиотика: ";
    std::cin >> antibiotic;
    std::cout << "----------------------------------------------------\n";
    if (bacteria <= 0 || antibiotic <= 0) {
        std::cout << "Введены некорректные данные.\n";
    } else {
        for (int i = 10; i > 0; i--) {
            bacteria *= 2;
            bacteria -= antibiotic * i;
            hour++;
            if (bacteria <= 0) {
                std::cout << "После " << hour << " часа бактерий осталось 0\n";
                break;
            } else {
                std::cout << "После " << hour << " часа бактерий осталось " << bacteria << "\n";
            }
        }
    }
}