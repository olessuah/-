﻿#include <iostream>;
using namespace std;

int i;
double eps, a, s, res;

double sum2(double eps) {
	i = 0;
	s = 0;
	a = 0;
	do {
		a = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
		s += a;
		i++;
	} while (abs(a) > eps);
	return s;
}

void main(double eps) {
	setlocale(LC_ALL, "RUS");
	cout << "eps:";
	cin >> eps;
	res = sum2(eps);
	cout << "Сумма:" << s << endl;
}

