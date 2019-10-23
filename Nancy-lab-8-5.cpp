#include <iostream> 
#include <cmath>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int a, k;
	cout << "Enter a" << endl;
	cin >> a;
	if (a == 0) cout << "нулевое число" << endl;
	else {
		if (a < 0) cout << "отризацетльное число число" << endl;
		else {
			k = a % 2;
			if (k == 1) cout << "положительное не четно число" << endl;
		}
	}
	return 0;
}