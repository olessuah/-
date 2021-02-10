#include<iostream>
#include <cmath>

double f(double x) {
	double func;
	func = (((x + 2) / sqrt(2 * x)) - x / (sqrt(2 * x) + 2) + 2 / (x - sqrt(2 * x))) * ((sqrt(x) - sqrt(2)) / (x + 2));
	return func;
}