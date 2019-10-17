#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	float a, n, i, result;
	cout << "Enter N (n > 0)" << endl;
	cin >> n;
	result = 0;
	for (i = 1; i <= n; i++) {
		result = result + (2 * i - 1);
}
	cout << "N*N = " << result << endl;
	return 0;
}