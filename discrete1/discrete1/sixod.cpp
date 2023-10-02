#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;
	double y;
	double z;
	double f1;
	double f2;
	double f3;
	double f4;
	double f5;
	double f6;

	cout << "x= "; cin >> x;
	cout << "y= "; cin >> y;
	cout << "z= "; cin >> z;



	if (y == 0 && z == 0) f1 = 0;
	else f1 = 1;
	
	if ((x == 0 && f1 == 0) || (x == 1 && f1 == 1)) f2 = 1;
	else f2 = 0;
	
	if (y == 1 && z == 1) f3 = 1;
	else f3 = 0;
	
	if (y == 1 && z == 1) f4 = 0;
	else f4 = 1;
	
	if ((x == 0 && f4 == 0) || (x == 1 && f4 == 1)) f5 = 1;
	else f5 = 0;
	
	if ((f2 == 0 && f5 == 0) || (f2 == 1 && f5 == 1)) f6 = 1;
	else f6 = 0;

	cout << endl;
	cout << "f1 = " << f1 << endl;
	cout << "f2 = " << f2 << endl;
	cout << "f3 = " << f3 << endl;
	cout << "f4 = " << f4 << endl;
	cout << "f5 = " << f5 << endl;
	cout << "f6 = " << f6 << endl;

	cin.get();
	return 0;
}


