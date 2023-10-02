#include <stdio.h>
#include <cstdlib>
#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <conio.h>
using namespace std;

int main(){

	int a[2] = { 1, 2 }, b[5] = { 1, 2, 3, 4, 8 };
	cout << "AxB={";
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++)
			cout << '(' << a[i] << ',' << b[j] << ");";
	}
	cout << '}' << endl << "A^2={"; for
		(int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
			cout << '(' << a[i] << ',' << a[j] << ");";
	}
	cout << '}' << endl;
	_getch();
	return 0;
}
