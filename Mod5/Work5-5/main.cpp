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

    if ( sideA <= sideM && sideB <= sideN && sideC <= sideK) {
        std::cout << "Первая коробка помещается во вторую" << std::endl;
    } else if (sideA <= sideM && sideB <= sideK && sideC <= sideN) {
        std::cout << "Первая коробка помещается во вторую" << std::endl;
    } else if (sideA <= sideN && sideB <= sideM && sideC <= sideK) {
        std::cout << "Первая коробка помещается во вторую" << std::endl;
    } else {
        std::cout << "Первая коробка не помещается во вторую" << std::endl;
    }
    return 0;
}
