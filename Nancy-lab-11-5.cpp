#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int a, b, m, n, x, y, i, j, result;
	
	cout << "Enter A" << endl;
	cin >> a;
	cout << "Enter B" << endl;
	cin >> b;
	m = 0;
	n = 0;
	i = a;
	j = b;
	while (a != b) {
		if (a > b) {
			m = a % b;
			x = i % m;
			y = j % m;
			n = 0;
		}
		else {
			n = b % a;
			x = i % n; 
			y = j % n;
			m = 0;
		}
		if (x == 0 && y == 0) a = b;
		else {
			if (a > b)
				a = a % b;
			else b = b % a;

		}
	}
	result = m + n;
	cout << "HOD = " << result  << endl;
	return 0;
}