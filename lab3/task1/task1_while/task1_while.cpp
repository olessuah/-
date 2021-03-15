#include <iostream>;
using namespace std;

int n, i;
double s, res;

double sum(int n) {
	while (i < n) {
		s += pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
		i++;
	}
	return s;
}

void main(void) {
	setlocale(LC_ALL, "RUS");
	cout << "n:";
	cin >> n;
	res = sum(n);
	cout << "Сумма:" << s << endl;
}
