#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    float cub = 0;

    std::cout << "Введите сторону квадрата: ";
    std::cin >> cub;

    std::cout << "Площадь квадрата равна: " << cub * cub;

}
