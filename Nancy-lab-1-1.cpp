#include <iostream>
using namespace std;
int main()
{
	int a, b, result;

	cout << "Enter Widht" << endl;
	cin >> a;
	cout << "Enter leght" << endl;
	cin >> b;

	result = a * b;
	cout << "S" << "=" << result << endl;
	result = 2 * (a + b);
	cout << "P" << "=" << result << endl;
	return 0;
}
