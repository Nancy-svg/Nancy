#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int n, k, i, m;

	cout << "Enter N" << endl;
	cin >> n;
	m = 0;
	int* array = new int[n];
	for (i = 0;i < n;i++) {
		cout << "Enter array[" << i + 1 << "] ";
		cin >> array[i];
	}

	cout << "Array is :  ";
	for (i = 0;i < n;i++) {
		cout << array[i] << " ";
	}
	for (i = 0;i < n;i++) {
		k = array[i] % 2;
		if (k == 1) {
			m = array[i];
		}
	}
	for (i = 0;i < n;i++) {
		k = array[i] % 2;
		if (k == 1) {
			array[i] = array[i] + m;
		}
	}
	cout << "Array new is :  ";
	for (i = 0;i < n;i++) {
		cout << array[i] << " ";
	}

	return 0;
}
