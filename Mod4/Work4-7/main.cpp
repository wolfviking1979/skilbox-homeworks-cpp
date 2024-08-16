// Эта программа выводит меню бизнес-ланча ресторана в зависимости от дня недели.

#include <iostream>


int main() {
    std::cout << "Меню ресторана" << std::endl;
    int dayOfWeek; // День недели
    std::cout << "Введите день недели (от 1 до 7): ";
    std::cin >> dayOfWeek;
    switch (dayOfWeek) {
        case 1: {
            std::cout << "Меню сегодня (понедельник):" << std::endl;
            std::cout << "Куриный суп" << std::endl;
            std::cout << "Салат \"Легкий\"" << std::endl;
            std::cout << "Отбивная " << std::endl;
            std::cout << "Компот" << std::endl;
            break;
        }
        case 2: {
            std::cout << "Меню сегодня (вторник):" << std::endl;
            std::cout << "Харчо" << std::endl;
            std::cout << "Салат \"Оливье\"" << std::endl;
            std::cout << "Баварские колбаски с капустой" << std::endl;
            std::cout << "Морс" << std::endl;
            break;
        }
        case 3: {
            std::cout << "Меню сегодня (среда):" << std::endl;
            std::cout << "Суп-пюре из брокколи" << std::endl;
            std::cout << "Салат \"Греческий\"" << std::endl;
            std::cout << "Отбивная с грибами" << std::endl;
            std::cout << "Компот" << std::endl;
            break;
        }
        case 4: {
            std::cout << "Меню сегодня (четверг):" << std::endl;
            std::cout << "Зеленый борщ" << std::endl;
            std::cout << "Салат \"Морской\" с креветками" << std::endl;
            std::cout << "Жареный минтай с пюре" << std::endl;
            std::cout << "Чай" << std::endl;
            break;
        }
        case 5: {
            std::cout << "Меню сегодня (пятница):" << std::endl;
            std::cout << "Салат \"Божественный\"" << std::endl;
            std::cout << "Бифстроганов" << std::endl;
            std::cout << "Компот из сухофруктов" << std::endl;
            break;
        }
        case 6: {
            std::cout << "Меню сегодня (суббота):" << std::endl;
            std::cout << "Салат \"Греческий\" с креветками" << std::endl;
            std::cout << "Жаркое" << std::endl;
            std::cout << "Морс" << std::endl;
            break;
        }
        case 7: {
            std::cout << "Меню сегодня (воскресенье):" << std::endl;
            std::cout << "Салат \"Цезарь\" с креветками" << std::endl;
            std::cout << "Утка по пикински" << std::endl;
            std::cout << "Компот" << std::endl;
            break;
        }

        default: {
            std::cout << "Ошибка! Некорректный ввод!"
                         "Введите день недели (от 1 до 7):" << std::endl;
        }
    }
    return 0;
}
