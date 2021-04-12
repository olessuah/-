#include "header.h"
#include <complex>

void main()

{

	setlocale(LC_ALL, "Rus");

	int real, imaginary;

	cout << "Введите \"Комплексное число\" в виде:\n-действительной\n-мнимой\nчастей комплексного числа:\nreal = ";

	cin >> real;

	cout << "imagine = ";

	cin >> imaginary;

	Complex z(real, imaginary);

	Complex z1(real, imaginary);

	real = 3;

	imaginary = 0;

	Complex z2(real, imaginary);

	cout << "z = " << z;

	cout << "\ny(z) = z/2 + ch(1+z)\ny(z) = " << y(z) << endl;

	_getch();

}

int factorial(int x)

{

	if (x == 0) return 1;

	return x * factorial(x - 1);

}
