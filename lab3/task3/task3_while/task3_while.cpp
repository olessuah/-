#include <iostream>;
using namespace std;

int i, n, k;
double s, res;

void print(int n, int k) {
	setlocale(LC_ALL, "RUS");
	i = 0;
	while (i < n) {
		s = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
		i++;
		if (i % k == 0)	continue;
		printf("Иттерация: %d ", i);
		printf(" Результат: %f\n", s);
	}
}

void main(int n, int k) {
	cout << "n:";
	cin >> n;
	cout << "k:";
	cin >> k;
	print(n, k);
}

