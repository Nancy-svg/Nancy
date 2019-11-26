#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int n, i, j, m;
	float k;

	cout << "Enter N" << endl;
	cin >> n;

	int* a = new int[n];
	int* b = new int[n];
	for (i = 0;i < n;i++) {
		cout << "Enter a[" << i + 1 << "] ";
		cin >> a[i];
	}
	cout << "Array A ";
	for (i = 0;i < n;i++) {
		cout << a[i] << " ";
	}
	for (i = 0;i < n;i++) {
		k = 0;
		m = 0;
		for (j = 0;j < i + 1;j++) {
			k = k + a[j];
			m++;
		}
		k = k / m;
		b[i] = k;
	}
	cout << endl;
	cout << "Array B ";
	for (i = 0;i < n;i++) {
		cout << b[i] << " ";
	}
	cout << endl;
	return 0;
}