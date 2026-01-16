
#include <Windows.h>
#include <type_traits>
#include <string>
#include "author.hpp"


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


//void Pushback(int * arr, int size) // size = 5 долгий способ добавлении ячейки памяти в динамический массив. 1 способ
//{
//	int* temp = new int[size];
//
//	for (int i = 0; i < size; i++)
//	{
//		temp[i] = arr[i];
//	}
//	delete[] arr;
//	size++;
//	arr = new int[size];
//
//	for (int i = 0; i < size - 1; i++)
//	{
//		arr[i] = temp[i];
//	}
//
//	delete[] temp;
//
//}
//
//void Pushback2(int*& arr, int size, int data) //более короткая версия. 2 cпособ
//{
//	size++;
//	int* temp = new int[size];
//	for ( int i = 0; i < size - 1; i++)
//	{
//		temp[i] = arr[i];
//	}
//	std::swap(temp, arr);
//
//	arr[size - 1] = data;
//
//
//	delete[]temp;
//}

/*регистрация*/
/*bool PassDigit(const std::string& currentPass)
{
	for (int i = 0; i < currentPass.size(); i++)
	{
		if (std::isdigit(currentPass[i]))
		{
			return true;
		}
	}
	return false;
}*/

/*bool PassChar(const std::string& currentPass)
{
	for (int i = 0; i < currentPass.size(); i++)
	{
		for (char c = 65; c <= 90; c++)
		{
			if (currentPass[i] == c)
			{
				return true;
			}
		}
		for (char c = 97; c <= 122; c++)
		{
			if (currentPass[i] == c)
			{
				return true;
			}
		}
	}
	return false;
}*/




int main()
{
	/*
	тип_данных имя_массива [кол-во_ячеек];
	
	*/

	//setlocale(LC_ALL, "ru");
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	PrintHelloWorld();

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

    /*int size = 5, data = 0;// увелечение на одну ячеейку у динамического массива
 int* qwe = new int[size] {1, 4, 2, 5, 6};

 std::cin >> data;


 Pushback2(qwe, size, data);
 for (int i = 0; i < size; i++) 
 {
	 std::cout << qwe[i] << " ";
 }


	 delete[] qwe;*/

    /*const int row = 3, col = 4;


 int **arr = new int*[row];
 for (int i = 0; i < row; i++)
 {
	 std::cin >> col;
	 arr[i] = new int[col];
 }
 arr[0][3] = 9;

 for(int i = 0; i < row; i++) 
 {
	 for(int i = 0; j < col; j++)
	 {
		 arr[i][j] = rand() % 10;
	 }
 }



 delete[]arr;
 int *a = nullptr;
 arr = nullptr;*/

    /*int side = 2, row = 3, col = 4;

 int*** arr = new int** [side];
 
 for (int i = 0; i < side; i++) 
 {
	 arr[i] = new int*[row];
	 for(int j = 0; j < row; j++)
	 {
		 arr[i][j] = new int[col];
		 col++;
	 }
	 row++;
 }
 arr[1][0][3];

 for(int i = side - 1; i >= 0; i--)
 {
	 for(int j = 0; j < row; j++)
	 {
		 delete[]arr[i][j];
	 }
	 row--;
	 delete[]arr[i];
 }
 delete[]arr;*/

    /*int s1 = 2, s2 = 3, s3 = 4, s4 = 5, s5 = 6, s6 = 7, s7 = 8, s8 = 9, s9 = 10, s10 = 11;
 
  s1-Страна 
  s2-Область
  s3-Город
  s4-Улица
  s5-Дом
  s6-Этаж
  s7-Аудитория
  s8-столб
  s9-Ряд
  s10-Место
 

 int********** kek = new int********* [s1];

 for(int a1 = 0; a1 < s1; a1++)
 {
	 kek[a1] = new int******** [s2];
	 for (int a2 = 0; a2 < s2; a2++) 
	 {
		 kek[a1][a2] = new int******* [s3];
		 for (int a3 = 0; a3 < s3; a3++) 
		 {
			kek[a1][a2][a3] = new int****** [s4];
			for (int a4 = 0; a4 < s4; a4++)
			{
				kek[a1][a2][a3][a4] = new int***** [s5];
				for (int a5 = 0; a5 < s5; a5++)
				{
					kek[a1][a2][a3][a4][a5] = new int**** [s6];
					for (int a6 = 0; a6 < s6; a6++)
					{
						kek[a1][a2][a3][a4][a5][a6] = new int*** [s7];
						for (int a7 = 0; a7 < s7; a7++)
						{
							kek[a1][a2][a3][a4][a5][a6][a7] = new int** [s8];
							for (int a8 = 0; a8 < s8; a8++)
							{
								kek[a1][a2][a3][a4][a5][a6][a7][a8] = new int* [s9];
								for (int a9 = 0; a9 < s9; a9++)
								{
									kek[a1][a2][a3][a4][a5][a6][a7][a8][a9] = new int[s10];
									for (int a10 = 0; a10 < s10; a10++)
									{
										kek[a1][a2][a3][a4][a5][a6][a7][a8][a9][a10] = rand() % 9 + 1;
										std::cout << kek[a1][a2][a3][a4][a5][a6][a7][a8][a9][a10] << " ";
									}
									std::cout << "\t\t" << a9 << "a9\n" << a8 << "a8\n" << a7 << "a7\n" << a6 << "a6\n" << a5 << "a5\n"
										<< a4 << "a4\n" << a3 << "a3\n" << a2 << "a2\n" << a1 << "a1\n";
								}
								//std::cout << "\t\t" << a8 << "a8\n";
							}
							//std::cout << "\t\t" << a7 << "a7\n";
						}
						//std::cout << "\t\t" << a6 << "a6\n";
					}
					//std::cout << "\t\t" << a5 << "a5\n";
				}
				//std::cout << "\t\t" << a4 << "a4\n";
			}
			//std::cout << "\t\t" << a3 << "a3\n";
		 }
		 //std::cout << "\t\t" << a2 << "a2\n";
	 }
	 //std::cout << "\t\t" << a1 << "a1\n";
 }*/

 /*авторизация через стриг*/
    /*std::string login, password, loginInput, passwordInput;
 int loginMin = 3, loginMax = 15, passMin = 8, passMax = 30;

 while(true)
 {
	 std::cout << "Введите новый логин: ";
	 std::getline(std::cin, login, '\n');

	 std::cout << "Введите новый пароль: ";
	 std::getline(std::cin, password, '\n');
	 if(login.size() < loginMin || login.size() > loginMax)
	 {
		 std::cout << "Недопустимая длина логина. должно быть от " << loginMin << " до " << loginMax << '\n\n';
	     Sleep(1500);
		 system("cls");
	 }
	 else if (password.size() < passMin || password.size() > passMax)
	 {
		 std::cout << "Недопустимая длина пароля. должно быть от " << passMin << " до " << passMax << '\n\n';
		 Sleep(1500);
		 system("cls");
	 }
	 else
	 {
		 if (PassDigit(password) && PassChar(password))
		 {
			 std::cout << "Регистрация прошла успешно";
			 break;
		 }
		 else
		 {
			 std::cout << "Ошибка введите пароль снова с одной цифрой одной буквой в наличии";
		 }

	 }

	 Sleep(1500);
	 system("cls");
 }

 while (true)
 {
	 std::cout << "Ввелите ваш логин: ";
	 std::getline(std::cin, loginInput, '\n');

	 std::cout << "Ввелите ваш пароль: ";
	 std::getline(std::cin, passwordInput, '\n');

		 if (login == loginInput && password == passwordInput)
		 {
			 std::cout << "Авторизация прошла успешно! Добро пожаловать! \n\n";
			 Sleep(1500);
			 system("cls");
			 break;
		 }
	 std::cout << "Ошибка логина или пароля \n";
	 Sleep(1500);
	 system("cls");

 }*/

 


 return 0;
}