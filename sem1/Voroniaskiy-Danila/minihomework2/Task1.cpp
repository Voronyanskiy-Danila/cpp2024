#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    int num = 0;
    int step = 0;

    std::cout << "Напишите десятичное число: ";
    std::cin >> num;

    std::cout << "Напишите в степень в которую хотите перевести (8 или 16): ";
    std::cin >> step;

    if (step == 16) {
        std::cout << "Ваше число в 16-ой системе = ";
        std::cout << std::hex << num;
    }
    else if (step == 8) {
        std::cout << "Ваше число в 8-ой системе = ";
        std::cout << std::oct << num;
    }
    else {
        std::cout << "Нет такой степени, есть только 8 или 16";
    }
}
