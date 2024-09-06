// Эта программа, которая проверяет корректность email-адреса, введённого пользователем.

#include <iostream>

bool emailLeft(std::string); // function to check if email is left
bool emailRight(std::string); // function to check if email is right

int main() {
    std::string str;

    std::cout << "Задание 2. Проверка корректности email-адреса\n";
    std::cout << "-----------------------------------------------\n";

    std::cout << "Введите email: ";
    std::getline(std::cin, str);

    if(emailLeft(str) && emailRight(str)) {
        std::cout << "Yes\n";
    }else {
        std::cout<<"No\n";
    }
    return 0;
}

bool emailLeft(std::string str) {
    std::string suitable_symbols = "[],;<>\\"; // Не допустимые символы помимо латинских букв и цифр
    int all_presents = 0; // количество введенных вариантов
    bool valid = true;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[0] == '.' || suitable_symbols.find(str[i]) != std::string::npos) {
            valid = false;
        }

        if (i > 0 && str[i] == '.' && str[i - 1] == '.') {  // две точки подряд
            valid = false;
        } else if (i > 0 && str[i] == '@') { // наличие @
            all_presents++;
        }
    }

    // проверка на количество введенных символов @ в строке и на длину
    if( all_presents == 0 || all_presents > 1 || str.length() <= 0 || str.length() > 64) {
        valid = false;
    }
    return valid;
}

// проверка на правильность правой части email-адреса
bool emailRight(std::string str) {
    bool valid = true; // проверка на правильность
    for (int i = str.length() - 1; str[i] != '@'; i--) {
        if (str[i] == '_') {
            valid = false; // наличие символа _ в строке
        }
    }
    return valid;
}