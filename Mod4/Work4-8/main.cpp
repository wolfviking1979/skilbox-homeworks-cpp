#include <iostream>

int main() {
    int salary1; //Зарплата первого сотрудника
    int salary2; //Зарплата второго сотрудника
    int salary3; //Зарплата третьего сотрудника
    int minSalary; //Минимальная зарплата в отделе
    int maxSalary; //Максимальная зарплата в отделе
    int averageSalary; //Средняя зарплата в отделе.

    std::cout << "Введите зарплату первого сотрудника: " << std::endl;
    std::cin >> salary1; //Ввод зарплаты первого сотрудника
    std::cout << "Введите зарплату второго сотрудника: " << std::endl;
    std::cin >> salary2; //Ввод зарплаты второго сотрудника
    std::cout << "Введите зарплату третьего сотрудника: " << std::endl;
    std::cin >> salary3; //Ввод зарплаты третьего сотрудника
    std::cout << "-----Считаем-----" << std::endl;

    if (salary1 >= salary2 && salary1 >= salary3) {
        maxSalary = salary1;
    } else if (salary2 >= salary1 && salary2 >= salary3) {
        maxSalary = salary2;
    } else {
        maxSalary = salary3;
    }

    if (salary1 <= salary2 && salary1 <= salary3) {
        minSalary = salary1;
    } else if (salary2 <= salary1 && salary2 <= salary3) {
        minSalary = salary2;
    } else {
        minSalary = salary3;
    }
    averageSalary = (maxSalary + minSalary) / 2; //Средняя зарплата в отделе.

    std::cout << "Самая высокая зарплата в отделе: " << maxSalary << std::endl; //Выводим самую высокую зарплату
    std::cout << "Разница между самой высокой и самой низкой зарплатой в отделе: " << (maxSalary - minSalary)
              << std::endl; //Выводим разницу между самой высокой и самой низкой зарплатой в отделе.
    std::cout << "Средняя зарплата в отделе: " << averageSalary << std::endl; //Выводим среднюю зарплату в отделе.

    return 0;
}
