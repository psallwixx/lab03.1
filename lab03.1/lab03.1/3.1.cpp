// Lab03_1.cpp
// < Пасіщук Алла >
// Лабораторна робота №3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 20

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу

	cout << "x= "; cin >> x;

	A = tan(x) + 1;

   // спосіб 1: розгалуження в скороченій формі
	if (x <= (-5))
		B = exp(x / abs(1 - x));
	if (x > (-5) && x <= 3)
		B = 3.2 + log10(1.8*x*x);
	if (x > 3)
		B = abs(x) * sqrt(x);

	y = A - B;
	cout << endl;
	cout << "1) y = " << y << endl;

	// спосіб 2: розгалуження в повній формі
	if (x <= (-5))
		B = exp(x / abs(1 - x));
	else
		if (x > 3)
			B = abs(x) * sqrt(x);
		else 
			B = 3.2 + log10(1.8*x*x);

	y = A - B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;

}