// лаба2.2оп.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c;
	cout << "Введите 3 числа";
	cin >> a >> b >> c;
	if (a > 2 && a < 5) {
		cout << " попадает в диапазон от 2 до 5" << a << endl;} else
		if (a == 2 || a == 5) {
		cout << " лежит на границе" << a << endl;}
		else if
			(a < 2 || a > 5) {
			cout << " находится вне диапазона" << a << endl;}
	if (b > 2 && b < 5) {
	cout << " попадает в диапазон от 2 до 5" << b << endl; } else
	if (b == 2 || b == 5) {
		cout << " лежит на границе" << b << endl; } else
		if (b < 2 || b > 5) {
			cout << " находится вне диапазона" << b << endl;}
	if (c > 2 && c < 5) {
		cout << " попадает в диапазон от 2 до 5" << c << endl; } else
		if (c == 2 || c == 5) {
			cout << " лежит на границе" << c << endl; } else
			if (c < 2 || c>5) {
				cout << " находится вне диапазона" << c << endl;}
	return 0;
}
    