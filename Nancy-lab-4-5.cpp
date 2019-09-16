#include <iostream>   
#include <cmath>
using namespace std;

int main()
{

	float a, x, b;
	cout << "A*x + B = 0" << endl;
	
	cout << "Enter A" << endl;
	cin >> a;
	cout << "Enter B" << endl;
	cin >> b;
	
	x = (-b) / a;

	cout << "x = " << x << endl;

	return 0;

}