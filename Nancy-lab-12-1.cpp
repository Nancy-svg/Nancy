#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int a, b, i;
	for (i = 0; i < 6; i++) {
		cout << "Enter A ";
		cin >> a;
		b = pow(a, 3);
		cout << "  B = " << b << endl;
	}
	return 0;
}
