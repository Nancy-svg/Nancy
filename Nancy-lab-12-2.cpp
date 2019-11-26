#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int  i, x;
	int a[1];
	cout << "Sign(A) + Sign(B)" << endl;
	cout << "Enter A ";
	cin >> a[0];
	cout << "Enter B ";
	cin >> a[1];
	x = 0;
	for (i = 0;i < 2;i++) {
		if (a[i] > 0) a[i] = 1;
		else {
			if (a[i] == 0) a[i] = 0;
			else {
				if (a[i] < 0) a[i] = -1;
			}
		}
	}
	x = a[0] + a[1];
	cout << x << endl;
	return 0;
}