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

	result = abs(c - a);
	result_1 = abs(c - b);
	result = result * result_1;
	cout << "AC*BC=" << result << endl;
	return 0;
}