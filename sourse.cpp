#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>

#include <cstdlib>


// homeWork1_3_01

void prinOperatorUNDUndOr() {
	std::cout << "Оператор ||:" << std::endl;
	bool firstValue{ true };
	bool secondValue{ true };

	for (int i = 0; i <= 3; i++) {
		std::cout << (firstValue ? "true" : "false") << "   ";
		std::cout << (secondValue ? "true" : "false") << "   ";
		std::cout << ((firstValue || secondValue) ? "true" : "false");
		std::cout << std::endl;
		if (i == 0) {
			secondValue = false;
		};
		if (i == 1) {
			secondValue = true;
		};
		if (i == 1) {
			firstValue = false;
		};
		if (i == 2) {
			secondValue = false;
		};
	};

		std::cout << std::endl;
		firstValue = true;
		secondValue = true;

		std::cout << "Оператор &&:" << std::endl;
		for (int i = 0; i <= 3; i++) {
			std::cout << (firstValue ? "true" : "false") << "   ";
			std::cout << (secondValue ? "true" : "false") << "   ";
			std::cout << ((firstValue && secondValue) ? "true" : "false");
			std::cout << std::endl;
			if (i == 0) {
				secondValue = false;
			};
			if (i == 1) {
				secondValue = true;
			};
			if (i == 1) {
				firstValue = false;
			};
			if (i == 2) {
				secondValue = false;
			};

		};
	};

// END homeWork1_3_01


// homeWork1_3_02

void locationInDescendingOrder(int firstNumber, int secondNumber, int thirdNumber) {
	 
	int largeNumber{ 0 };
	int averageNumber{ 0 };
	int smallNumber{ 0 };
	
	largeNumber = (firstNumber > secondNumber ? (firstNumber > thirdNumber ? firstNumber : thirdNumber) : (secondNumber > thirdNumber ? secondNumber : thirdNumber));

	smallNumber = (firstNumber < secondNumber ? (firstNumber < thirdNumber ? firstNumber : thirdNumber) : (secondNumber < thirdNumber ? secondNumber : thirdNumber));

	averageNumber = firstNumber + secondNumber + thirdNumber - largeNumber - smallNumber;

	std::cout << "Результат: " << largeNumber << " " << averageNumber << " " << smallNumber << std::endl;

};

void homeWork1_3_02() {
	std::cout << "Введите первое число:" << " ";
	int firstNumber{ 0 };
	std::cin >> firstNumber;
	std::cout << std::endl;

	std::cout << "Введите второе число:" << " ";
	int secondNumber{ 0 };
	std::cin >> secondNumber;
	std::cout << std::endl;

	std::cout << "Введите третье число:" << " ";
	int thirdNumber{ 0 };
	std::cin >> thirdNumber;
	std::cout << std::endl;


	locationInDescendingOrder(firstNumber, secondNumber, thirdNumber);

};

// END homeWork1_3_02


// homeWork1_4_01

void homeWork1_4_01() {
	
	int value{ 0 };
	int sum{ 0 };

	while (true) {
		std::cout << "Введите целое число или число '0', чтобы закончить:" << std::endl;
		std::cin >> value;

		sum += value;

		if (value == 0) {
			break;
		};
	}

	std::cout << "Сумма:" << sum;

}

// END homeWork1_4_01


// homeWork1_4_02

void homeWork1_4_02() {
	std::cout << "Введите целое число" << std::endl;
	int sum{ 0 };
	int value{ 0 };
	std::cin >> value;
	
	

	while (true) {
		sum += (value % 10);
		value /= 10;

		if (value == 0) {
			break;
		}
	}

	std::cout << "Сумма цифр: " << sum;
}
// END homeWork1_4_02


// homeWork1_4_03

void homeWork1_4_03() {
	std::cout << "Введите целое число:" << std::endl;
	int value{ 0 };
	std::cin >> value;

	for (int i{ 1 }; i <= 10; i++) {
		std::cout << value << " x " << i << " = " << i * value << std::endl;
	}
};
// END homeWork1_4_03


// homeWork1_5_01

void homeWork1_5_01() {
	int myArr[10] = { 2, 3, 1 ,0, 10, 20, -8, 1, 90, 78 };

	for (int i{ 0 }; i < 10; i++) {
		std::cout << myArr[i];

		if (i == 9) {
			break;
		}
		std::cout << ", ";
	}
}

// END homeWork1_5_01


// homeWork1_5_02

void homeWork1_5_02() {
	int myArr[10] = { -1, 10, -30, 0, 8, 4, -6, 23, 79, 560 };
	int max{ myArr[0] };
	int min{ myArr[0] };

	for (int valueMyArr : myArr) {
		max = max < valueMyArr ? valueMyArr : max;
		min = min > valueMyArr ? valueMyArr : min;
	};

	std::cout << "Минимальный элемент: " << min << std::endl;
	std::cout << "Максимальный элемент: " << max;
}

// END homeWork1_5_02


// homeWork1_5_03
void homeWork1_5_03() {

	class coordinates {
	public:
		int x;
		int y;
		coordinates(): x(0), y(0) {};
	};

	int myArr[3][6] = { {2, 3, 4, 0, -12, 3},
						{6, 12, 120, 24, 4, 5},
						{-1289, 34, 5, 6, 8, 0} };

	int max{ myArr[0][0] };
	coordinates coordinatesMax;
	int min{ myArr[0][0] };
	coordinates coordinatesMin;

	for (int i{ 0 }; i < 3; i++) {
		for (int j{ 0 }; j < 6; j++) {
			std::cout << myArr[i][j] << "\t";
			if (max < myArr[i][j]) {
				max = myArr[i][j];
				coordinatesMax.x = i;
				coordinatesMax.y = j;
			}
			if (min > myArr[i][j]) {
				min = myArr[i][j];
				coordinatesMin.x = i;
				coordinatesMin.y = j;
			}
		}
		std::cout << std::endl;
	}

	std::cout << "Индекс минимального элемента: " << coordinatesMin.x << " " << coordinatesMin.y << std::endl;

	std::cout << "Индекс максимального элемента: " << coordinatesMax.x << " " << coordinatesMax.y << std::endl;


};
// END homeWork1_5_03


// homeWork1_5_04
void homeWork1_5_04() {
	int myArr[10] = { 4, 7, 10, -9, 0, -8, 3, 5, 0, 1 };
	const int size = sizeof(myArr) / sizeof(int);

	std::cout << "Массив до сортировки: " << std::endl;
	for (int myArrValue : myArr) {
		std::cout << myArrValue << " ";
	};
	std::cout << std::endl;

	for (int i{ size - 1 }; i > 0; i--) {
		for (int j{ size - 1 }; j > 0; j--) {
			if (myArr[j] < myArr[j - 1]) {
				int temporaryVariable = myArr[j];
				myArr[j] = myArr[j - 1];
				myArr[j - 1] = temporaryVariable;
			};
		};
	};

	std::cout << "Массив после сортировки: " << std::endl;
	for (int myArrValue : myArr) {
		std::cout << myArrValue << " ";
	};
}
// END homeWork1_5_04


// homeWork1_6_01
void homeWork1_6_01() {
	
};

int sum(int a, int b) {
	return a + b;
};

int diff(int a, int b) {
	return a - b;
}

int multiplication(int a, int b) {
	return a * b;
};

double division(int a, int b) {
	return static_cast<double>(a) / b;
};

// END homeWork1_6_01


// homeWork1_6_02

void homeWork1_6_02(int value, int power, int result) {
	for (int i{ 0 }; i < power; i++) {
		result *= value;
	}
	std::cout << value << " в степени " << power << " = " << result << std::endl;
};

// END homeWork1_6_02


// homeWork1_6_03

int fibanachiNumberCalculation(int value, int prevValue, int number) {
	
	if (prevValue == 0) {
		std::cout << "0 ";
	};
	std::cout << value << " ";

	number--;
	if (number == 0) {
		return value;
	}

	int prevValueLocal{ value };
	value += prevValue;

	return fibanachiNumberCalculation(value, prevValueLocal, number);
};

// END homeWork1_6_03


// homeWork1_10_01

void homeWork1_10_01() {
	int sizeArray{ 0 };
	std::cin >> sizeArray;

	int* myArray = new int[sizeArray];

	for (int i{ 0 }; i < sizeArray; i++) {
		std::cout << "arr[" << i << "] = ";
		std::cin >> myArray[i];
		std::cout << std::endl;
	};

	std::cout << "Введённый массив: ";
	for (int i{ 0 }; i < sizeArray; i++) {
		std::cout << myArray[i] << " ";
	};

	delete[] myArray;
}

// END homeWork1_10_01


// homeWork1_10_02

double* create_array(int sizeArray) {
	return new double[sizeArray] {};
};

void homeWork1_10_02() {
	std::cout << "Введите размер массива: ";
	int sizeArray{ 0 };
	std::cin >> sizeArray;

	double* myArray = create_array(sizeArray);

	std::cout << "Массив: ";
	for (int i{ 0 }; i < sizeArray; i++) {
		std::cout << myArray[i] << " ";
	}

	delete[] myArray;
}
// END homeWork1_10_02


// homeWork1_10_03

int** create_two_dim_array(int rows, int colums) {
	int** arr{ new int* [rows] };
	for (int i{ 0 }; i < rows; i++) {
		arr[i] = new int[colums];
	};

	return arr;
};

void fill_two_dim_array(int** arr, int rows, int colums) {

	for (int i{ 0 }; i < rows; i++) {
		for (int j{ 0 }; j < colums; j++) {
			arr[i][j] = (i + 1) * (j + 1);
		};
	};
};

void print_two_dim_array(int** arr, int rows, int colums) {
	for (int i{ 0 }; i < rows; i++) {
		for (int j{ 0 }; j < colums; j++) {
			std::cout << arr[i][j] << "\t";
		};
		std::cout << std::endl;
	};
};

void delete_two_dim_array(int** arr, int rows, int colums) {
	for (int i{ 0 }; i < rows; i++) {
		delete[] arr[i];
	};

	delete[] arr;
};

void homeWork1_10_03() {
	std::cout << "Введите количество строк: ";
	int rows{ 0 };
	std::cin >> rows;

	std::cout << "Введите количество столбцов: ";
	int colums{ 0 };
	std::cin >> colums;

	std::cout << "Таблица умножения: " << std::endl;

	int** myArray{ create_two_dim_array(rows, colums) };
	fill_two_dim_array(myArray, rows, colums);
	print_two_dim_array(myArray, rows, colums);
	delete_two_dim_array(myArray, rows, colums);
}

// END homeWork1_10_03


// homeWork1_7_01

void homeWork1_7_01() {
	short dataShort{};
	int dataInt{};
	long dataLong{};
	long long dataLongLong{};
	float dataFloat{};
	double dataDouble{};
	long double dataLongDouble;
	bool dataBool{};

	std::cout << "short: " << &dataShort << " " << sizeof(dataShort) << std::endl;
	std::cout << "int: " << &dataInt << " " << sizeof(dataInt) << std::endl;
	std::cout << "long: " << &dataLong << " " << sizeof(dataLong) << std::endl;
	std::cout << "long long: " << &dataLongLong << " " << sizeof(dataLongLong) << std::endl;
	std::cout << "float: " << &dataFloat << " " << sizeof(dataFloat) << std::endl;
	std::cout << "double: " << &dataDouble << " " << sizeof(dataDouble) << std::endl;
	std::cout << "long double: " << &dataLongDouble << " " << sizeof(dataLongDouble) << std::endl;
	std::cout << "bool: " << &dataBool << " " << sizeof(dataBool) << std::endl;

}

// END homeWork1_7_01


// homeWork1_7_02
	
void swap(int& a, int& b) {
	int c = a;
	a = b;
	b = c;
}

void homeWork1_7_02() {
	int a = 5, b = 8;

	std::cout << "a = " << a << ", b = " << b << std::endl;

	swap(a, b);

	std::cout << "a = " << a << ", b = " << b << std::endl;
}
// END homeWork1_7_02


// homeWork1_8_01

void counting_function() {
	static int counter{ 0 };
	counter++;
	std::cout << "Number of function calls counting_function(): " << counter << std::endl;
}

void homeWork1_8_01() {
	for (int i = 0; i < 15; i++)
	{
		counting_function();
	}
}

// END homeWork1_8_01


// homeWork1_8_02
namespace firstNamespace {
	int calc(int x, int y) {
		return x + y;
	}
};

namespace secondNamespace {
	int calc(int x, int y) {
		return x - y;
	}
}

namespace thirdNamespace {
	int calc(int x, int y) {
		return x * y;
	}
}

namespace fourthNamespace {
	int calc(int x, int y) {
		return x / y;
	}
}


void homeWork1_8_02() {
	int x = 6, y = 9;
	std::cout << "x = " << x << ", y = " << y << std::endl;

	std::cout << "Addition: " << firstNamespace::calc(x, y) << std::endl;
	std::cout << "Subtraction: " << secondNamespace::calc(x, y) << std::endl;
	std::cout << "Multiplication: " << thirdNamespace::calc(x, y) << std::endl;
	std::cout << "Division: " << fourthNamespace::calc(x, y) << std::endl;
}

// END homeWork1_8_02


// homeWork1_11_01

void homeWork1_11_01() {
	std::cout << "Введите имя: ";
	std::string firstName{};
	std::getline(std::cin >> std::ws, firstName);

	std::cout << "Введите фамилию: ";
	std::string secondName{};
	std::getline(std::cin >> std::ws, secondName);

	std::cout << " Здравствуйте, " << firstName << " " << secondName << " !";
}

// END homeWork1_11_01


// homeWork1_11_02

void homeWork1_11_02() {
	std::string hiddenWord{ "малина" };

	while (true) {
		std::cout << "Угадайте слово: ";
		std::string word{};
		std::getline(std::cin >> std::ws, word);

		if (hiddenWord == word) {
			std::cout << "Правильно! Вы победили! Загаданное слово — " << hiddenWord;
			break;
		};

		std::cout << "Неправильно" << std::endl;
	}
}

// END homeWork1_11_02


// homeWork1_12_01
	
void homeWork1_12_01() {
	std::string word{};

	std::ifstream inFile{ "in.txt" };

	if (inFile.is_open()) {
		while (inFile >> word) {
			std::cout << word << std::endl;
		};
	};
	inFile.close();
}

// END homeWork1_12_01


// homeWork1_12_02

void homeWork1_12_02() {
	int length{ 0 };
	std::ifstream inFile{ "in.txt" };

	inFile >> length;
	length++;

	int* arrayValue{ new int[length] };


	for (int i{ 0 }; i < length; i++) {
		inFile >> arrayValue[i];
	};
	inFile.close();

	for (int i{ length - 2 }; i >= 0; i--) {
		std::cout << arrayValue[i] << " ";
	}
	
	delete[] arrayValue;

}

// END homeWork1_12_02

// homeWork1_12_03

void homeWork1_12_03() {
	int length{};
	std::cout << "Введите размер массива: ";
	std::cin >> length;

	int* myArray{ new int[length] {0} };
	for (int i{ 0 }; i < length; i++) {
		std::cout << "arr[" << i << "] = ";
		std::cin >> myArray[i];
	};

	std::ofstream outFile{ "out.txt" };
	if (outFile.is_open()) {
		outFile << length << std::endl;
		for (int i{ length - 1 }; i >= 0; i--) {
			outFile << myArray[i];
			if (i == 0) {
				break;
			};
			outFile << " ";
		}
	}
	outFile.close();
	delete[] myArray;
}

// END homeWork1_12_03


// homeWork1_12_04

void homeWork1_12_04() {
	int row{ 0 };
	int column{ 0 };
	std::ifstream inFile{ "in.txt" };
	if (inFile.is_open()) {
		for (int i{ 0 }; i < 2; i++) {
			if (i == 0) {
				inFile >> row;
			};
			if (i == 1) {
				inFile >> column;
			};
		};
	};

	int** myArray{ new int* [row] };

	for (int i{ 0 }; i < row; i++) {
		myArray[i] = new int[column];
	};

	for (int i{ 0 }; i < row; i++) {
		for (int j{ 0 }; j < column; j++) {
			inFile >> myArray[i][j];
		};
	};

	inFile.close();

	for (int i{ 0 }; i < row; i++) {
		for (int j{ column - 1 }; j >= 0; j--) {
			std::cout << myArray[i][j] << " ";
		};
		std::cout << std::endl;
	};


	for (int i{ 0 }; i < row; i++) {
			delete[] myArray[i];
	};
	delete[] myArray;

}

// END homeWork1_12_04


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RU");




return 0;
}


