#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter A" << endl;
	cin >> a;
	cout << "Enter B" << endl;
	cin >> b;
	cout << "Enter C" << endl;
	cin >> c;
	if (a < b && b < c)
	{
		cout << "Double inequality is true" << endl;
	}
	else {
		cout << "double inequality is wrong" << endl;
	}

	return 0;
}