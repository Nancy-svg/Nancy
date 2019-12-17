#include <iostream>   
#include <cmath>
using namespace std;
int sign(int x)
{
	int b;
	if (x > 0) b = 1;
	else {
		if (x == 0) b = 0;
		else {
			if (x < 0) b = -1;
		}
	}
	return b;
}
int main()
{
	int x1, x2, result;
	cout << "Sign(A) + Sign(B)" << endl;
	cout << "Enter A ";
	cin >> x1;
	cout << "Enter B ";
	cin >> x2;
	result = sign(x1) + sign(x2);
	cout << "Result is " << result << endl;
	return 0;
}
