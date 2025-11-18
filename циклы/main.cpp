
#include <iostream>
#include <Windows.h>
/*
int main()
{
	setlocale(LC_ALL, "ru");

	std::cout << "\t\t\t\tОбменник валют\n";

	 double RUB_RATE = 1;
	 double USD_RATE = 81.65;
	 double EU_RATE = 94.75;
	 double CNY_RATE = 11.45;
	 double Farid_RATE = 37;
	 double JPY_RATE = 0.5384;
	 double comission = 0, precent = 0.05;


	 while (true) 
	 {
		 std::cout << "Введите кол-во рублей\n";
		 std::cin >> RUB_RATE;
         if (RUB_RATE > 1)
		 {
			 break;
		 }
		 else
		 {
			 std::cout << "убедитесь что вы написали положительное число\n";
		 }
		 std::cout << "Вы ввели:" << RUB_RATE << "рублей\n";

	 }


	int choice;


	std::cout << "\t\tвыберите валюту для конвертации\n";
	std::cout << "1. USD\n";
    std::cout << "2. EU\n";
	std::cout << "3. CNY\n";
	std::cout << "4. Farid\n";
	std::cout << "5. JPY\n";
	std::cout << "Ваш выбор (1-5)";

	std::cin >> choice;

	

		if (choice == 1) 
		{
			std::cout << RUB_RATE << "RUB = " << RUB_RATE / USD_RATE << " USD\n";
		}

		if (choice == 2) {
			std::cout << RUB_RATE << "RUB = " << RUB_RATE / EU_RATE << " EU\n";
		}

		if (choice == 3) {
			std::cout << RUB_RATE << "RUB = " << RUB_RATE / CNY_RATE << " CNY\n";
		}

		if (choice == 4) {
			std::cout << RUB_RATE << "RUB = " << RUB_RATE / Farid_RATE << " Farid\n";
		}
		if (choice == 5) {
			std::cout << RUB_RATE << "RUB = " << RUB_RATE / JPY_RATE << " JPY\n";
		}

		while (true)
		{

			std::cout << "Повторим?\n1 - Да\n2 - Нет\nВвод: ";
			std::cin >> choice;
			if (choice < 1 || choice > 2)
			{
				std::cout << "Ошибка ввода\n";
			}
			else
			{
				break;
			}
		}

			if (choice == 2)
			{
				std::cout << "Спасибо за использование программы\n\n";
				
			}
			*/ 

int main()
{
	/*
	тип_данных имя_массива [кол-во_ячеек];
	
	*/

	setlocale(LC_ALL, "ru");

	int numbers[6];

	int sum = 0;

	std::cout << "Введите 6 целых чисел:\n";

	for (int i = 0; i < 6; i++) 
	{
	 std::cout << "Число " << i + 1 << ": ";
	 std::cin >> numbers[i];
	 sum += numbers[i];

	}

	std::cout << "Введенный массив; ";
	for (int i = 0; i < 6; i++) 
	{
		std::cout << numbers[i] << " ";
	}

	std::cout << "\nСумма чисел; " << sum;

	
	return 0;
}