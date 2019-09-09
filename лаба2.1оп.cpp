// лаба2.1оп.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	float a, b, c;
	cout << "Введите числа";
	cin >>a >> b >> c;
	float min = a;
	float max = a;
	if (b < min) {
		min = b;
	}
	if (c<min) {
		min = c;
	}
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	cout << "Max=" << max;
	cout << "Min=" << min;
	return 0;
}


