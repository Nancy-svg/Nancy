#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Enter N" << endl;
	cin >> a;
	if (a == -1) cout << "З" << endl;
	else {
		if (a == 1) cout << "B";
		else cout << "c";
	}
	return 0;
}