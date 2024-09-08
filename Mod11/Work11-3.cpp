// Эта программа проверяет на валидность ip адреса.

#include <iostream>


int get_address_part(std::string, int); // function prototype
bool isIpValid(std::string); // function prototype

int main() {
    std::cout << "Задание 3. Валидация IP-адреса" << std::endl;
    std::cout << "---------------------------------------------\n";

    std::string ip;
    int numberOctet; // number of octet
    std::cout << "Введите IP-адрес: ";  // input ip address
    std::cin >> ip;
    std::cout << "Введите номер части октета(0-3): ";
    std::cin >> numberOctet;

    if (numberOctet < 0 || numberOctet > 3) {
        std::cout << "Неверный номер октета" << std::endl;
    } else {
        std::cout << get_address_part(ip, numberOctet) << std::endl;
    }

    return 0;
}

int get_address_part(std::string ip, int partIp) {
    int dotCount = 0; // count dots in ip
    std::string part1, part2, part3, part4;
    bool isGood = true;
    int partRes;
    char separator = '.';
    for (int i = 0; i < ip.length(); i++) {
        if (ip[i] == '.') {
            dotCount++; // count dots
        }

        if (ip[i] == '.' && ip[i + 1] == '.') {
            isGood = false;
        }

        if (dotCount == 0) {
            if (ip[i] != separator) {
                part1 += ip[i];
            }
        } else if (dotCount == 1) {
            if (ip[i] != separator) {
                part2 += ip[i];
            }
        } else if (dotCount == 2) {
            if (ip[i] != separator) {
                part3 += ip[i];
            }
        } else if (dotCount == 3) {
            if (ip[i] != separator) {
                part4 += ip[i];
            }
        }
    }
    // Проверка на количество точек в ip адресе
    if (dotCount < 3) {
        std::cout << "Неверный формат IP-адреса";
        return -1;
    }

    // Проверка на валидность ip октетов
    isIpValid(part1);
    isIpValid(part2);
    isIpValid(part3);
    isIpValid(part4);

    if (!isIpValid(part1)) {  // не валидный ip октета 1
        isGood = false;
    }
    if (!isIpValid(part2)) {  // не валидный ip октета 2
        isGood = false;
    }
    if (!isIpValid(part3)) {  // не валидный ip октета 3
        isGood = false;
    }
    if (!isIpValid(part4)) { // не валидный ip октета 4
        isGood = false;
    }

    if (isGood) {
        // Проверка выбора октета
        switch (partIp) {
            case 0: {
                partRes = std::stoi(part1);
                break;
            }
            case 1: {
                partRes = std::stoi(part2);
                break;
            }
            case 2: {
                partRes = std::stoi(part3);
                break;
            }
            case 3: {
                partRes = std::stoi(part4);
                break;
            }
        }
    }

    std::cout << (isGood ? "Valid" : "Invalid") << std::endl;
    return isGood ? partRes : -1;
}

bool isIpValid(std::string part) {
    bool isGood = true;
    char firstDigit;
    std::string s;
    int numberOctet;
    // Проверка на цифры в октете
    for (int i = 0; i < part.length(); i++) {
        s += part[i];
        if (!isdigit(part[i])) {
            isGood = false;
        }
    }
    // Проверка на первую цифру в октете. Если первая цифра равна нулю, то ошибка.
    firstDigit = s.front();
    if (s.length() > 1 && firstDigit == '0') {
        isGood = false;
    }

    if (part.empty()) {  // Проверка на пустой октет
        isGood = false;
    } else {
        numberOctet = std::stoi(part);
        // Проверка на длину ip октета
        if (numberOctet < 0 || numberOctet > 255) {
            isGood = false;
        }
    }
    return isGood;
}