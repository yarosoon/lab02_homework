#include <iostream>
#include <string>

int main() {
    string name;  // Создаем строку для хранения имени пользователя

    // Запрашиваем имя пользователя
    std::cout << "Введите имя пользователя: ";
    std::getline(std::cin, name);  // Читаем строку целиком, включая пробелы

    // Печатаем пожелание
    std::cout << "Hello world from " << name << "!" << std::endl;

    return 0;
}
