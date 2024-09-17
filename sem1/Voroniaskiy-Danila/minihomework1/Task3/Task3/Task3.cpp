#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    int n;
    int k = 0;

    int a = 0;
    int b = 1;
    int c = 0;

    std::cout << "Введите количетсво элементов: ";
    std::cin >> n;


    while (k < n)
    {
        a = b;
        b = c;
        c = a + b;

        std::cout << c;

        k++;

    }

}


// n = 5
// 1 1 2 3 5 