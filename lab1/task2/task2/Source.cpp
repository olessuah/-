#include<iostream>
#include <cmath>
using namespace std;

double f(double x) {
	double func;
	func = (((x + 2) / sqrt(2 * x)) - x / (sqrt(2 * x) + 2) + 2 / (x - sqrt(2 * x))) * ((sqrt(x) - sqrt(2)) / (x + 2));
	return func;
}

void main(double x) {
	setlocale(LC_ALL, "Rus");
	double result;
	x = 18;
	result = f(x);
	cout << "�������� x = " << x << endl;
	cout << "\n" << "�������� ������� " << result << endl;

	cout << "\n" << "������� x " << "\n" << endl;
	cin >> x;
	result = f(x);
	cout << "\n" << "�������� ������� " << result << endl;
}