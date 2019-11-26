#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int n, m, k, i, min, max;

	cout << "Enter N" << endl;
	cin >> n;
	min = 32000;
	max = -32000;
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
		if (array[i] < min) {
			min = array[i];
			m = i;
		}
		if (array[i] > max) {
			max = array[i];
			k = i;
		}
	}
	if (m > k) {
		for (i = k + 1;i < m; i++) {
			array[i] = 0;
		}
	}
	else {
		for (i = m + 1;i < k;i++) {
			array[i] = 0;
		}
	}
	cout << "Array new is :  ";
	for (i = 0;i < n;i++) {
		cout << array[i] << " ";
	}
	return 0;
}