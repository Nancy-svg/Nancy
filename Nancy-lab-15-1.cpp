#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int n, k, i;

	cout << "Enter N" << endl;
	cin >> n;
	int* a = new int[n];
	int* b = new int[n];
	
	for (i = 0;i < n;i++) {
		cout << "Enter a[" << i + 1 << "] " ;
		cin >> a[i];
	}
	for (i = 0;i < n;i++) {
		cout << "Enter b[" << i + 1 << "] " ;
		cin >> b[i];
	}
	cout << "Array A ";
	for (i = 0;i < n;i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "Array B ";
	for (i = 0;i < n;i++) {
		cout << b[i] << " ";
	}
	cout << endl;

	for (i = 0;i < n;i++) {
		k = a[i];
		a[i] = b[i];
		b[i] = k;

	}

	cout << "Array A ";
	for (i = 0;i < n;i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "Array B ";
	for (i = 0;i < n;i++) {
		cout << b[i] << " ";
	}
	return 0;
}



