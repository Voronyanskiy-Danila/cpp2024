#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    std::string a;

    std::cout << "Введите число: ";
    std::cin >> a;

    std::reverse(a.begin(),a.end());
    std::cout << "Новое число: ";
    std::cout << a;

}
