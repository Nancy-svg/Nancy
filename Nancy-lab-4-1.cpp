#include <iostream>   
#include <cmath>
using namespace std;
int main()
{

	const double pi = 3.14;
	double a, result;
	cout << "Enter A (0 < A < 360)" << endl;
	cin >> a;
	result = 180 / pi;
	result = a / result;
	cout << "radian=" << result << endl;

	return 0;

}
