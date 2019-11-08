#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	float a, n, i, result;
	cout << "Enter A" << endl;
	cin >> a;
	cout << "Enter N (n > 0)" << endl;
	cin >> n;
	result = 0;
	for (i = 0; i <= n;i++) {
		result = result + pow(a, i) * pow(-1, i);
	}
	cout << "Result is " << result << endl;
	return 0;
}