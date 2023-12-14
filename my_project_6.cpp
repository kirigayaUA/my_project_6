#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	int x, y, a, b, c;
	cout << "input a: ";
	cin >> a;
	cout << "input b: ";
	cin >> b;
	cout << "input c: ";
	cin >> c;
	x = a;
	do {
		y = pow(x, 1 / 3.0) + pow(x, 3) - 3;
		cout << "x=" << x << "\t" << "y=" << y << endl;
		x += c;
	} while (x <b);
}



