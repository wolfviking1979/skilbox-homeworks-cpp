#include <iostream>

int main() {
    std::cout << "Задание 8. Ёлочка* (дополнительное задание)\n";
    std::cout << "----------------------------------------------------\n";

    int height;

    std::cout << "Введите высоту ёлочки: ";
    std::cin >> height;

    for (int i = 0; i < height; i++) {
        for (int j = i + 1; j < height; j++)
            std::cout << " ";
        for (int j = 0; j <= 2 * i; j++)
            std::cout << "#";
        if (i < height - 1) {
            std::cout << "\n";
        }
    }
    return 0;
}