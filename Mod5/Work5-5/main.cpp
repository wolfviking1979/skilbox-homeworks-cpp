#include <iostream>

int main() {
    std::cout << "Усложнение задачи про кирпич\n";
    std::cout << "----------------------------\n";
    int sideA;
    int sideB;
    int sideC;
    int sideM;
    int sideN;
    int sideK;
    std::cout << "Введите размеры первой коробки:\n";
    std::cin >> sideA >> sideB >> sideC;
    std::cout << "Введите размеры второй коробки:\n";
    std::cin >> sideM >> sideN >> sideK;
    if ((sideA < sideM && sideB < sideN && sideC < sideK)) {
        std::cout << "Первая коробка помещается во вторую коробку\n";
    }  else {
        std::cout << "Первая коробка не помещается во втору коробку\n";
    }

    return 0;
}
