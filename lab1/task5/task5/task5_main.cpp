#include<iostream>
#include <cmath>
using namespace std;

double f(double x);

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

	cin >> x;
}