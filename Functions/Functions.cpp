#include <iostream>
#include <ctime>
#include <cstdlib>

// �������, �� ������������ ������� �������� � ��������� ���������
void say_hello() {
	std::cout << "Hello World!\n";
	std::cout << "Bye World!\n";
}

// �������, �� ������������ ������� ��������, �� ����������� ��� ����� � ��������� �� �����.
void print_sum(int num1, int num2) {
	std::cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
}

// �-���, ������������ ����� ���� ���������� �����
int sum(int num1, int num2) {
	//int tmp = num1 + num2;
	return num1 + num2; // ������� ����� num1 � num2
}

// �-��� ������ �������
void print_arr(int array[], int length) {
	std::cout << '[';
	for (int i{}; i < length; i++)
		std::cout << array[i] << ", ";
	std::cout << "\b\b]\n\n";
}
// ����� ��������� �������
int sum_arr(int array[], const int length) {
	int sum = 0;
	for (int i{}; i < length; i++)
		sum += array[i];
	return sum;
}

// ���������
int x2(int num) { // �������� �������
	num *= 2;
	return num;
}

void arr_x2(int arr[]) {
	arr[3] *= 2;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	// ������� ���
	// ����������� �����������, ������� ��������� �� ������� ���������. ���������� �� �����.
	// ��������� �-�� - ��� ����������, ����������� ������� ��� ��������� ������� ��������.
	// ������������ �������� (��� �������) - ��������� ������ �-��, �� ����� ������������� �������� ������������� ����� �� ������� �����.

	// �������� �������	- ���������� ��������							// ��������� - �� ���������� ��������, ���-�� ���������.

	// ������� void 
	/*
	say_hello();
	std::cout << "������� ��� ����� -> ";
	std::cin >> n >> m;
	print_sum(n,m);
	*/

	// �������, ������������ ��������
	/*
	std::cout << "������� ��� ����� -> ";
	std::cin >> n >> m;
	int result = sum(n, m);
	std::cout << "����� = " << result << "\n";
	*/

	// ������� ��������
	/*
	srand(time(NULL));
	const int size{ 5 };
	int arr[size]{};
	for (int i{}; i < size; i++)
		arr[i] = rand() % 100 - 30;
	
	std::cout << "������:\n";
	print_arr(arr, size);
	std::cout << "����� ��������� ������� = " << sum_arr(arr, size) << std::endl;
	*/


	// �������� ������� - �������� ������������� � ������� � ������ �� ������
	// �������� ������� - ����� ����������� � ������� ���������, � ������� ������� ������� ����� ������������ ������� ������
	n = 10;
	//std::cout << x2(n) << "\n";
	x2(n); // n - �������� �������
	std::cout << n << "\n"; // 10

	int mass[5]{ 10, 20, 30, 40, 50 };

	x2(mass[3]);
	std::cout << mass[3] << "\n";

	arr_x2(mass);
	std::cout << mass[3] << "\n";

	return 0;
}