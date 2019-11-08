#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int f1, f2, k, n, result;
	cout << "Enter N" << endl;
	cin >> n;
	f1 = 1;
	f2 = 1;
	k = 2;
	while (f2 != n) {
		result = f2;
		f2 = f2 + f1;
		f1 = result;
		k++;
	}
	cout << "K = " << k << endl;
	return 0;
}