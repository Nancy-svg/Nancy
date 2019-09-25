#include <iostream>   
#include <cmath>
using namespace std;
int main()
{
	float a, b, c;
	cout << "Enter a" << endl;
	cin >> a;
	b = a * a;
	c = b * a;
	a = b * c;
	a = a * a * a;
	cout << "Result is : " << a << endl;

	return 0;
}