#include <iostream>   
#include <cmath>
using namespace std;

int main()
{

	float x, y, k;
	cout << "y=4*(x-3)^6-7*(x-3)^3-2" << endl;
	cout << "Enter x" << endl;
	cin >> x;
	k = x - 3;
	y = 4 * pow(k, 6) - 7 * pow(k,3) - 2;

	cout << "y = " << y << endl;

	return 0;
}