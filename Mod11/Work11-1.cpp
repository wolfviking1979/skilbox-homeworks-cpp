// Эта программа, в которую передаётся текст и сдвиг и которая возвращает зашифрованный текст.
// Считаем, что входные строки состоят лишь из английских букв.

#include <iostream>

int main() {
    int i = 0;
    std::string str, temp;
    int key;
    std::cout << "Задание 1. Шифр Цезаря\n";
    std::cout << "----------------------------------\n";

    std::cout << "Введите текст: ";
    std::getline(std::cin, str);
    std::cout << "Введите ключ: ";
    std::cin >> key;

    for (i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            temp += (str[i] - 'a' + key) % 26 + 'a';
        } else if ((str[i] >= 'A' && str[i] <= 'Z')) {
            temp += (str[i] - 'A' + key) % 26 + 'A';
        } else {
            temp += str[i];
        }

    }
    std::cout << "Зашифрованное сообщение: " << temp << "\n";
}