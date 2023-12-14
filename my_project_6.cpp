#include <iostream>
#include <iomanip> 
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x, y, a, b, c;
	cout << "Введіть значення a: ";
	cin >> a;
	cout << "Введіть значення b: ";
	cin >> b;
	cout << "Введіть значення c: ";
	cin >> c;
	x = a;
	do {
		y = pow(x, 1 / 3.0) + pow(x, 3) - 3;
		cout << "x=" << x << "\t" << "y=" << y << endl;
		x += c;
	} while (x <= b);
}



