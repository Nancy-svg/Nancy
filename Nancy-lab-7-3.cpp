#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int a, b;
	cout << "Ведите число" << endl;
	cin >> a;
	b = a % 2;
	if (a > 9 && a < 100 && b == 0) cout << "Число явдяется двузначныи и четным" << endl;
	else cout << "Число не является двузначным , либо чентным , либо четным и двузначным" << endl;

	return 0;
}
