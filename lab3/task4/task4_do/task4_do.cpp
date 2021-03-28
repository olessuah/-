﻿#include <iostream>;
using namespace std;

int i, k;
double eps, s, res;

int findFirstElement(double eps) {
	i = 0;
	s = 0;
	do {
		s = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
		k = i;
		i++;
	} while (abs(s) > eps);
	return k;
}

void main(double eps) {
	setlocale(LC_ALL, "RUS");
	cout << "eps:";
	cin >> eps;
	res = findFirstElement(eps);
	cout << "Первый член последовательности:" << res << endl;
}

