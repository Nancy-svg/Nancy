#include <iostream>   
#include <cmath>
using namespace std;

int main()
{

	int a, b, k;
	cout << "Enter A" << endl;
	cin >> a;
	cout << "Enter B" << endl;
	cin >> b;

	k = a;
	a = b;
	b = k;
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;

	return 0;
}