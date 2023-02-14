#include <iostream>
#include <ctime>
#include <cstdlib>

// Функция, не возвращающая никаких значений и выводящая сообщения
void say_hello() {
	std::cout << "Hello World!\n";
	std::cout << "Bye World!\n";
}

// Функция, не возвращающая никаких значений, но принимающая два числа и выводящая их сумму.
void print_sum(int num1, int num2) {
	std::cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
}

// Ф-ция, возвращающая сумму двух переданных чисел
int sum(int num1, int num2) {
	//int tmp = num1 + num2;
	return num1 + num2; // вернуть сумму num1 и num2
}

// Ф-ция вывода массива
void print_arr(int array[], int length) {
	std::cout << '[';
	for (int i{}; i < length; i++)
		std::cout << array[i] << ", ";
	std::cout << "\b\b]\n\n";
}
// Сумма элементов массива
int sum_arr(int array[], const int length) {
	int sum = 0;
	for (int i{}; i < length; i++)
		sum += array[i];
	return sum;
}

// Умножение
int x2(int num) { // параметр функции
	num *= 2;
	return num;
}

void arr_x2(int arr[]) {
	arr[3] *= 2;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	// Функция это
	// Специальная конструкция, которая выносится за пределы программы. Вызывается по имени.
	// Параметры ф-ии - это переменные, необходимые функции для получения внешних значений.
	// Возвращаемое значение (тип функции) - результат работы ф-ии, на место возвращаемого значения подставляется любой из базовых типов.

	// Истинная функция	- возвращает значение							// Процедура - не возварщает значение, что-то выполняет.

	// Функции void 
	/*
	say_hello();
	std::cout << "Введите два числа -> ";
	std::cin >> n >> m;
	print_sum(n,m);
	*/

	// Функции, возвращающие значение
	/*
	std::cout << "Введите два числа -> ";
	std::cin >> n >> m;
	int result = sum(n, m);
	std::cout << "Сумма = " << result << "\n";
	*/

	// Функция массивов
	/*
	srand(time(NULL));
	const int size{ 5 };
	int arr[size]{};
	for (int i{}; i < size; i++)
		arr[i] = rand() % 100 - 30;
	
	std::cout << "Массив:\n";
	print_arr(arr, size);
	std::cout << "Сумма элементов массива = " << sum_arr(arr, size) << std::endl;
	*/


	// Аргумент функции - значение передаваемове в функцию в момент ее вызова
	// Параметр функции - копия переданного в функцию аргумента, с помощью которой функция может обрабатывать внешние данные
	n = 10;
	//std::cout << x2(n) << "\n";
	x2(n); // n - аргумент функции
	std::cout << n << "\n"; // 10

	int mass[5]{ 10, 20, 30, 40, 50 };

	x2(mass[3]);
	std::cout << mass[3] << "\n";

	arr_x2(mass);
	std::cout << mass[3] << "\n";

	return 0;
}