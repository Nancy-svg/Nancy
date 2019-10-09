#include <iostream>   
#include <cmath>
using namespace std;
int main()
{
	int a, b, c, i, j, result;
	cout << "Enter A" << endl;
	cin >> a;
	cout << "Enter B (A > B)" << endl;
	cin >> b;
	c = 0;
	while (c < a - b) {
		c = c + b;
	}
	result = a - c;
	cout << "Result is " << result << endl;
	return 0;
}