#include <iostream> 
#include <cmath>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int a, k, g;
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
	g = a % 2;
	if  (a / 100 = 2) cout << "четное двузначное число" << endl;
	else { if (g == 1 && a / 100) cout << "число трезначное не четное" << endl; }
	return 0;
}
