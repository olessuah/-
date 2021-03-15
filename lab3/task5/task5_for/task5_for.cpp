#include <iostream>;
using namespace std;

double eps, s, res;
int k;

int findFirstNegativeElement(double eps) {
	s = 0;
	for (int i = 0; ; i++) {
		s = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
		if (s > 0) continue;
		k = i;
		if (abs(s) < eps) break;
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

