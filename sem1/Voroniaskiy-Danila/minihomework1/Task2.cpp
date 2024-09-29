#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    float a, b, h;

    std::cout << "Введите верхние основание трапеции: ";
    std::cin >> a;

    std::cout << "Введите нижние основание трапеции: ";
    std::cin >> b;

    std::cout << "Введите высоту трапеции: ";
    std::cin >> h;

    std::cout << "Площадь трапеции равна: " << ((a + b) / 2) * h;

}
