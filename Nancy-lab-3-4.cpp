#include <iostream>   
#include <cmath>
using namespace std;

int main()
{

	int x, y, result;
		cout << "y=3*x^6-6x^2-7" << endl;
		cout << "Enter x" << endl;
		cin >> x;
		y = 3 * pow(x, 6) - 6 * x * x - 7;
		cout << "y = " << y << endl;
	
	return 0;
}