// Эта программа выводит пример с координатными осями так, чтобы в точке их пересечения рисовался знак «+»,
// на верхнем конце вертикальной оси была стрелка вверх «^», а на правом конце горизонтальной оси — стрелка вправо «>».

#include <iostream>

int main() {
    std::cout << "Задание 5. Координатные оси" << std::endl;
    int height = 20;
    int width = 50;
    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            if (row == height / 2 && col == width / 2) {
                std::cout << "+";
            } else if (row == height / 2 && col == width - 1) {
                std::cout << ">";
            } else if (row == 0 && col == width / 2) {
                std::cout << "^";
            } else if (row == height / 2) {
                std::cout << "-";
            } else if (col == width / 2) {
                std::cout << "|";
            } else {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    return 0;
}