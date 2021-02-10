#include<iostream>
#include <cmath>
using namespace std;

void main(double x) {
	setlocale(LC_ALL, "Rus");
	double result;
	x = 18;
	result = (((x + 2) / sqrt(2 * x)) - x / (sqrt(2 * x) + 2) + 2 / (x - sqrt(2 * x))) * ((sqrt(x) - sqrt(2)) / (x + 2));
	cout << "Значение x = " << x << endl;
	cout << "\n" << "Значение функции " << result << endl;

	cout << "\n" << "Введите x " << "\n" << endl;
	cin >> x;
	result = (((x + 2) / sqrt(2 * x)) - x / (sqrt(2 * x) + 2) + 2 / (x - sqrt(2 * x))) * ((sqrt(x) - sqrt(2)) / (x + 2));
	cout << "\n" << "Значение функции " << result << endl;
}