#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int a, i, n, d, l;
	cout << "Enter N" << endl;
	cin >> n;
	int* array = new int[n];
	l = 1;
	for (i = 0;i < n;i++) {
		cout << "Enter arrai[" << i + 1 << "] = " ;
		cin >> array[i];
	}
	d = array[1] - array[0];
	for (i = 1;i < n;i++) {
		a = array[i] - array[i - 1];
		if (a != d) {
			i = n;
			cout << "result is 0" << endl;
		}
		l++;
	}
	a = n ;
	if (l == a) cout << "result if = " << d << endl;
	return 0;
}

