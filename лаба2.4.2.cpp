// лаба2.4.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>;

using namespace std;

int main()
{
	setlocale(0, "");
	float a, b, c, d, x, x1, x2;
	cout << "Введите числа";
	cin >> a >> b >> c;
	d = b * b - 4 * a * c;
	x = -c / b;
	x1 = (-b + sqrt(d)) / (2 * a);
	x2 = (-b - sqrt(d)) / (2 * a);
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				cout << "Множество решений";
			}
			else {
				cout << "Решений нет";
			}
		}
		else {
			cout << "x=" << x;
		}
	}
	else {
		if (d >= 0) {
			cout << "x1=" << x1 << endl;
			cout << "x2=" << x2;
		}
		else {
			cout << "Комплексные корни";
		}
	}
	return 0;
}
