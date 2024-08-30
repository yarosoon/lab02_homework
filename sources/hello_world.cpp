#include <iostream>
#include <string>

int main() {
    string name;  

    
    std::cout << "Введите имя пользователя: ";
    getline(std::cin, name);  

    
    std::cout << "Hello world from " << name << "!" << std::endl;

    return 0;
}
