#include<iostream>
#include <cmath>
using namespace std;

void f(void);

void main(double x, double result) {
	setlocale(LC_ALL, "Rus");
	x = 18;
	f();
	cout << "�������� x = " << x << endl;
	cout << "\n" << "�������� ������� " << result << endl;

	cout << "\n" << "������� x " << "\n" << endl;
	cin >> x;
	f();
	cout << "\n" << "�������� ������� " << result << endl;

	cin >> x;
}