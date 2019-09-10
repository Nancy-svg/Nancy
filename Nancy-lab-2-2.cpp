#include <iostream>   
#include <cmath>
using namespace std;
int main()
{
	int a, b, c, result, result_1;
	cout << "Enter A" << endl;
	cin >> a;
	cout << "Enter B" << endl;
	cin >> b;
	cout << "Enter C" << endl;
	cin >> c;
	result = abs(b - a);
	cout << "AB=" << result << endl;
	result_1 = abs(c - b);
	cout << "BC=" << result_1 << endl;
	result = result + result_1;
	cout << "AB+BC=" << result << endl;

	return 0;
}