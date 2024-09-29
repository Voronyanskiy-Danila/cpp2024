#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    int num;
    int rev_num = 0;

    std::cout << "Введите число: ";
    std::cin >> num;

    while (num)
    {
        rev_num = rev_num * 10 + (num % 10);
        num /= 10;
    }

    std::cout << "Развёрнутое число: ";
    std::cout << rev_num << std::endl;
}
