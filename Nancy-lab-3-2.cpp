#include <iostream>   
#include <cmath>
using namespace std;

int main()
{

	int a, b,c, k;
	cout << "Enter A" << endl;
	cin >> a;
	cout << "Enter B" << endl;
	cin >> b;
	cout << "Enter C" << endl;
	cin >> c;
	k = a;
	a = c;
	b = k;
	c = b;
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;
	cout << "C = " << c << endl;
	return 0;
}
