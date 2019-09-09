// лаба2.3оп.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int n;
	cout << "Введите возраст";
	cin >> n;
	if ((n % 10 >= 5) || (n % 10 == 0)) {
		cout << n << "лет";
	}
	else {
		if (n % 10 == 1) {
			cout << n << "год";}
		else {
			if ((n % 10 > 1) && (n % 10 < 5)) {
				cout << n << "года";
			}
		}
	}
	return 0;
}