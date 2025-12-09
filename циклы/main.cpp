
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

/*void fillArr(int arr[], int size)
{
	for (int i = 0; i < size; i++) 
	{
		arr[i] = rand() % 100;
	}
}

void fillArr(double arr[], int size)
{
	for (int i = 0; i < size; i++) 
    {
		arr[i] = static_cast<double>(rand()) / RAND_MAX * 100;
	}
}

void fillArr(bool arr[], int size)
{
 for (int i = 0; i < size; i++) 
 {
	 arr[i] = rand() % 2;
 }
}

void fillArr(char arr[], int size)
{
	for (int i = 0; i < size; i++) 
	{
		arr[i] = 'a' + rand() % 26;
	}
}



void printArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}


void printArr(double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}


void printArr(bool arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}


void printArr(char arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}*/

/*int sum(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	if (b < 0)
	{
		return sum(a - 1, b + 1);
	}

	else 
	{
		return sum(a + 1, b - 1);
	}
	

}*/

/*template <typename Arr>
double arifm(Arr arr[], int size)
{
	if (std::is_same<Arr, char>::value_entA == true)
	{
		std::cout << "Нельзя посчитать не на числовом массиве! Поэтому: ";
		return 0.0;
	}
	else if (std::is_same<Arr, bool>::value == true)
	{
		std::cout << "Нельзя посчитать не на числовом массиве! Поэтому: ";
		return 0.0;
	}
	else
	{
		double result = 0.0;
		for (int i = 0; i < size; i++)
		{
			result += arr[i];
		}
		return result / size;
	}


	return 0;

}*/

void Moo(int *c) 
{
	*c += 2;

}

void Moo2(int* &c)
{
	c += 2;

}


int main()
{
	/*
	тип_данных имя_массива [кол-во_ячеек];
	
	*/

	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	/*int numbers[6];

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

	std::cout << "\nСумма чисел; " << sum;*/

	/*const int size = 10;
	int arr[size]{};
	int sum = 0;
	int sum2 = 0;
	int sum3 = 0;

	std::cout << "Введите 6 целых чисел:\n";

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 21 - 10;
		sum += arr[i];

	}


	std::cout << "Введенный массив; ";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " " ;
	}

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			std::cout << "\nЧетные числа: " << arr[i] ;
		}
		
	}

	std::cout << "\n\n";

	for (int i = 0; i < size; i++) 
	{
		if (arr[i] % 2 != 0) 
		{
			std::cout << "\nНечетные числа: " << arr[i];
		}


	}

	std::cout << "\n\n";

	for (int i = 0; i < size; i++) 
	{
		if (arr[i] > 0) 
		{
			sum2 = sum2 + arr[i];
		}

	}

	for (int i = 0; i < size; i++) 
	{
		if (arr[i] < 0) 
		{
		 sum3 += arr[i];
		}

		
	}


	std::cout << "Сумма всех положительных: " << sum2;
	std::cout << "\n\n";
	std::cout << "Сумма отрицательных; " << sum3;*/

	/*const int row = 3, col = 4;

	int arr2[row][col]{};

	int sum_row[row], sum_col[col];


	for (int i = 0; i < row; i++) 
	{
		for (int k = 0; k < col; k++) 
		{
			arr2[i][k] = rand() % 10;
		}
	}
	
	for (int i = 0; i < row; i++)
	{
		for (int k = 0; k < col; k++) 
		{
			std::cout << "A[" << i << "][" << k << "] = ";
			std::cin >> arr2[i][k];
		}
	}


	for (int i = 0; i < row; i++) 
	{
		for (int k = 0; k < col; k++) 
		{
			std::cout << arr2[i][k] << "\t";
		}
		std::cout << " ";
	}

	for (int i = 0; i < row; i++) 
	{
		sum_row[i] = 0;
		for (int k = 0; k < col; k++) 
		{
			sum_row[i] += arr2[i][k];
		}
		std::cout << "\nсумма строки " << i + 1 << " = " << sum_row[i] << "\n";
	}*/

    /*const int size = 6;


 int intArr[size];
 double doubleArr[size];
 bool boolArr[size];
 char charArr[size];

 fillArr(intArr, size);
 fillArr(doubleArr, size);
 fillArr(boolArr, size);
 fillArr(charArr, size);

 std::cout << "Массив int: ";

 printArr(intArr, size);

 std::cout << "Массив double: ";

 printArr(doubleArr, size);

 std::cout << "Массив bool: ";

 printArr(boolArr, size);

 std::cout << "Массив char: ";

 printArr(charArr, size);*/

    /*int num1 = -500;
 int num2 = -3;

 std::cout << "Сумма чисел " << num1 << " и " << num2 << " равна " << sum(num1, num2);*/


 int a = 5;

 Moo2(a);

 std::cout << a << "\n\n";




 return 0;
}