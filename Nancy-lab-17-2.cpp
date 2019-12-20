#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int n, k, i, j, x, p, l;

	cout << "Enter N" << endl;
	cin >> n;
	cout << "Enter L" << endl;
	cin >> l;
	int* array = new int[n];
	l = l - 1;
	k = 0;
	p = 0;
	x = 0;
	for (i = 0;i < n;i++) {
		cout << "Enter array[" << i + 1 << "] ";
		cin >> array[i];
	}
	cout << "Array is :  ";
	for (i = 0;i < n;i++) {
		cout << array[i] << " ";
	}
	for (i = 0;i < n;i++) {
		for (j = i;j < n - 1;j++) {
			if (array[i] == array[j]) {
				p = p + 1;
			}
			else j = n;
		}
		if (p > l) {
			array[i] = 0;
			for (j = i + 1;j < n - l;j++) {
				array[j] = array[j + p -1];
			}
			n = n - l;
		}
		p = 0;
		x = x + 1;
	}
	cout << endl;
	cout << "New array is :  ";
	for (i = 0;i < n;i++) {
		cout << array[i] << " ";
	}
	return 0;
}