#include <iostream>

using namespace std;

void check_num(int& num);

int main()
{
	setlocale(LC_ALL, "RU");

	int num;

	std::cout << "Введите число: ";
	std::cin >> num;

	check_num(num);

	std::cout << "Число = 1\n";
	std::cout << "Ч.Т.Д.";
	// 2 разделить на 2 == 1
}

void check_num(int& num)
{
	while (num > 1)
	{
		if (num % 2 == 0)
		{
			std::cout << "Число = " << num << endl;
			num /= 2;

		}
		else if (num % 2 != 0)
		{
			std::cout << "Число = " << num << endl;
			num = (num * 3 + 1) / 2;

		}

	}
}