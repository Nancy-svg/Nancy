#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	float a, n, i, result;
	cout << "Enter N" << endl;
	cin >> n;
	a = 1.1;
	result = 1;
	for (i = 1; i <= n; i++) {
		result = result * a;
		a += 0.1;
	}
	cout << "Result is " << result << endl;
	return 0;
}