#include<iostream>
#include <cmath>
using namespace std;

double x, result;

void f(void) {

	result = (((x + 2) / sqrt(2 * x)) - x / (sqrt(2 * x) + 2) + 2 / (x - sqrt(2 * x))) * ((sqrt(x) - sqrt(2)) / (x + 2));
}

void main() {
	setlocale(LC_ALL, "Rus");
	x = 18;
	f();
	cout << "Значение x = " << x << endl;
	cout << "\n" << "Значение функции " << result << endl;

	cout << "\n" << "Введите x " << "\n" << endl;
	cin >> x;
	f();
	cout << "\n" << "Значение функции " << result << endl;
}