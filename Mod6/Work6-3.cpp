// Эта программа для коллекторов. В самом начале он спрашивает имя должника и сумму долга,
//а затем начинает требовать у него погашения долга до тех пор, пока тот не будет погашен полностью.

#include <iostream>

int main() {
    std::cout << "Задание 3. Коллекторы" << std::endl;
    std::string name;
    int sum = 0;
    int debt = 0;
    std::cout << "Введите имя должника: ";
    std::cin >> name;
    std::cout << "Введите сумму долга: ";
    std::cin >> debt;

    while (debt != 0) {
        if (debt < 0) {
            std::cout << "Отрицательный долг недопустим, введите положительную сумму:" << std::endl;
            std::cin >> debt; //проверка на положительную сумму
        }

        std::cout << "Введите сумму, которая будет погашена: ";
        std::cin >> sum;

        if (sum < 0) {
            std::cout << "Отрицательная сумма недопустима, введите положительную сумму:" << std::endl;
            std::cin >> sum; //проверка на положительную сумму
        }

        debt -= sum;

        if (debt > 0) {
            std::cout << "Вы погасили долг частично.. Остаток долга: " << debt << std::endl;
        } else {
            std::cout << "Отлично! " << name << " вы погасили долг полностью." << std::endl;
        }
    }
    return 0;
}