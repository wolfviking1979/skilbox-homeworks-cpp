// Эта программа угадывает число пользователя от 1 до 63.


#include <iostream>

int main() {
    std::cout << "Задание 8. Угадай число* (дополнительное задание)" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << "'Загадайте число от 1 до 63 :'";
    int left = 1;
    int right = 63;
    int answer;
    int count = 0; //Количество попыток.

    while (true) {
        int current = (left + right) / 2;
        std::cout << "Ваше число равно, больше или меньше чем число:?  " << current << std::endl;
        std::cout << "Введите число(1-Равно, 2-Больше, 3-Меньше): " << std::endl;
        std::cin >> answer; //Вводим ответ
        count++; //Увеличиваем счетчик попыток на 1 единицу.
        if (answer == 1) {
            std::cout << "Я угадал!\n" << "Попыток: " << count << std::endl;
            break;
        } else if (answer == 2){
            left = current + 1; //Увеличиваем левую границу на 1 единицу
        } else {
            right = current - 1; //Уменьшаем правую границу на 1 единицу
        }
    }
    return 0;
}