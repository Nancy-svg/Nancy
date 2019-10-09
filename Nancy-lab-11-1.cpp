#include <iostream>   
#include <cmath>
using namespace std;
int main()
{
	int a, b, c, i, j, result;
	cout << "Enter A" << endl;
	cin >> a;
	cout << "Enter B (A < B)" << endl;
	cin >> b;

	c = b - a -1;
	a = a - 1;

	for (i = 0; i <= c; i++) {
		a++;
		for (j = 0; j < a; j++) {
			cout << a;
		}
		cout << " " << endl;
	}

	return 0;
}