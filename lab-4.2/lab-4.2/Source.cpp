// Lab_04_2.cpp
// <Василик Юлія>
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї змінної
// Варіант 2

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()

{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{

		A = 1 / x + 4;
		if (x < 1)
			B = 0.65 * x + 8;
		else
			if (x >= 5)
				B = sqrt(1 + sqrt(x));
			else
				B = atan((x + 6.1) / 2) + exp(x);

		y = A - B;

		cout << "|" << setw(9) << setprecision(1) << x
			<< " |" << setw(9) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
