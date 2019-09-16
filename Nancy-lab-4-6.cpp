#include <iostream>   
#include <cmath>
using namespace std;

int main()
{

	float a1, a2, b1, b2, c1, c2, x, y, k1, k2, k3;


	cout << "A1*x + B1*y = C1" << endl;
	cout << "A2*x + B2*y = C2" << endl;


	cout << "Enter A1" << endl;
	cin >> a1;
	cout << "Enter A2" << endl;
	cin >> a2;
	cout << "Enter B1" << endl;
	cin >> b1;
	cout << "Enter B2" << endl;
	cin >> b2;
	cout << "Enter C1" << endl;
	cin >> c1;
	cout << "Enter C2" << endl;
	cin >> c2;


	k1 = a1 * b2 - b1 * a2;
	k2 = c1 * b2 - b1 * c2;
	k3 = a1 * c2 - a2 * c1;

	x = k2 / k1;
	y = k3 / k1;

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	return 0;

}