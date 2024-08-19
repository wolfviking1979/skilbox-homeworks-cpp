#include <iostream>

int main() {
    std::cout << "Задание 4. Банкомат — 2\n";
    int sum;
    std::cout << "Введите сумму: ";
    std::cin >> sum;
    if (sum > 150000) {
        std::cout << "Ошибка! Вы ввели сумму больше 150000 рублей."
                     "Введите сумму меньше 150000 руб." << std::endl;
        sum = 0;

    } else if (sum < 0) {
        std::cout << "Ошибка! Вы ввели сумму меньше 0 рублей."
                     "Введите сумму больше 0 руб." << std::endl;
        sum = 0;
    }
    else {
        int banknote5000 = sum / 5000;
        int banknote2000 = (sum % 5000) / 2000;
        int banknote1000 = ((sum % 5000) % 2000) / 1000;
        int banknote500 = (((sum % 5000) % 2000) % 1000) / 500;
        int banknote200 = ((((sum % 5000) % 2000) % 1000) % 500) / 200;
        int banknote100 = (((((sum % 5000) % 2000) % 1000) % 500) % 200) / 100;


        if (banknote5000 > 0) {
            std::cout << "Выдано купюр по 5000: " << banknote5000 << std::endl;
        }
        if (banknote2000 > 0) {
            std::cout << "Выдано купюр по 2000: " << banknote2000 << std::endl;
        }
        if (banknote1000) {
            std::cout << "Выдано купюр по 1000: " << banknote1000 << std::endl;
        }
        if (banknote500) {
            std::cout << "Выдано купюр по 500: " << banknote500 << std::endl;
        }
        if (banknote200) {
            std::cout << "Выдано купюр по 200: " << banknote200 << std::endl;
        }
        if (banknote100) {
            std::cout << "Выдано купюр по 100: " << banknote100 << std::endl;
        }
    }
    std::cout << "Всего выдано: " << sum << " рублей." << std::endl;
    return 0;
}
