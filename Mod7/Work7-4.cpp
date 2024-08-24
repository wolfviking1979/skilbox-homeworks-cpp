// Эта программа рисует с помощью символьной графики прямоугольную рамку.
// Программа запрашивает размер рамки.
// Вводимые значения должны быть целыми.

#include <iostream>


int main() {

    int width;
    int height;
    std::cout << "Введите ширину и высоту рамки:\n";
    std::cin >> width >> height;
    std::cout << "--------------------------------\n";

    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            if (j == 0 || j == width - 1) {
                std::cout << "|";
            } else if (i > 0 || i < width) {
                std::cout << "-";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}