#include <iostream>   
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, d;
	cout << "Ведите четырехзначное число" << endl;
	cin >> a;

	b = a / 100;
	a = a % 100;
	c = a / 10;
	d = a % 10;
	c = d * 10 + c;

	if (b == c) cout << "Число является полиндромом";
	else cout << "Число не является полиндромом";
	return 0;
}
