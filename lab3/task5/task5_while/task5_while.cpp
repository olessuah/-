#include <iostream>;
using namespace std;

int i, k;
double eps, s, res;

int findFirstNegativeElement(double eps) {
	i = 0;
	s = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
	while (abs(s) > eps) {
		i++;
		s = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
		if (s > 0) continue;
		k = i;
	}
	return k;
}

void main(double eps) {
	setlocale(LC_ALL, "RUS");
	cout << "eps:";
	cin >> eps;
	res = findFirstNegativeElement(eps);
	cout << "Первый отрицательный член последовательности:" << res << endl;
}

