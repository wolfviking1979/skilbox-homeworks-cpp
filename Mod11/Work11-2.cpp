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
    std::string suitable_symbols = "[],;<>\\"; // допустимые символы помимо латинских букв и цифр
    int all_presents = 0; // количество введенных вариантов
    bool valid = true;
    std::string tempStr;
    for (int i = 0; str[i] != '\0'; i++) {
        tempStr += str[i];
        if (str[i] == '@' && str[i + 1]== '@') {
            valid = false; // два @ в строке
        } else if (str[i] == '@') {
            all_presents++;
            break;
        } else if (str[i] == '.' && str[i + 1] == '@') {
            valid = false;
        } else if (str[0] == '.' || suitable_symbols.find(str[i]) != std::string::npos) {
            valid = false;
        } else if (i > 0 && str[i] == '.' && str[i + 1] == '.') {  // две точки подряд
            valid = false;
        }

    }
    if( all_presents > 1 || tempStr.length() < 2 || tempStr.length() > 64) { // наличие двух @ в строчке или без @ в строке
        valid = false;
    }
    return valid;
}

bool emailRight(std::string str) {
    bool valid = true; // проверка на правильность
    std::string tempStr;
    for (int i = str.length() - 1; str[i] != '@'; i--) {
        tempStr += str[i]; // добавление в строку символов
        if (str[i] == '_') {
            valid = false; // наличие символа _ в строке
        } else if (i > 0 && str[i] == '.' && str[i + 1] == '.') {  // две точки подряд
            valid = false;
        }
    }
    if (tempStr.empty()) {
        valid = false; // длина строки на пусто
    }
    return valid;
}