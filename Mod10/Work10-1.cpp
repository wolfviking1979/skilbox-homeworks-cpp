// Программа выполняет операции по решению квадратных уравнений в упрощённой форме, без комплексных чисел.
// Форма принимаемого квадратного уравнения: ax^2+bx+c=0
// Требуется вычислить корни уравнения или корень, если он один.

#include <iostream>
#include <cmath>
int main() {
    float a, b, c;
    std::cout << "Для решения уравнения ax^2+bx+c=0 введите коэффициенты(a, b, c):\n";
    std::cin >> a >> b >> c;
    float discriminant = pow(b, 2) - (4 * a * c);
    if (discriminant > 0) {
        float x1 = (-b + std::sqrt(discriminant)) / (2 * a);
        float x2 = (-b - std::sqrt(discriminant)) / (2 * a);
        std::cout << "Discriminant: " << discriminant << std::endl;
        std::cout << "Root 1, 2: " << x1 << ", " << x2 << std::endl;
    } else if (discriminant == 0) {
        float x = -b / (2 * a);
        std::cout << "Discriminant: " << discriminant << std::endl;
        std::cout << "Root: " << x << std::endl;
    } else {
        std::cout << "Discriminant: " << discriminant << std::endl;
        std::cout << "No root!" << std::endl;
    }
    return 0;
}