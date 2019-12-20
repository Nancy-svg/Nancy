#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int n, k, i, j, m, x, p, l;

	cout << "Enter N" << endl;
	cin >> n;
	int* array = new int[n];
	k = 0;
	l = -1;
	x = 0;
	p = 0;
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
			if (array[i] != array[j + 1]) {
				k = k + 1;
				j = n;
			}
		}
	}
	cout << endl;
	cout << k << endl;
	int* c = new int[k];
	int* b = new int[k];
	for (i = 0;i < n;i++) {
		for (j = i;j < n - 1;j++) {
			if (array[i] == array[j]) {
				p = p + 1;
				c[x] = p;
			}
			else j = n;
		}
		p = 0;
		x = x + 1;
	}
	x = 0;
	for (i = 0;i < n;i++) {
		for (j = i;j < n - 1;j++) {
			if (array[i] == array[j]) {
				l++;
			}
			else j = n;
		}
		b[x] = array[l];
		x++;
	}
	cout << "Array B is " << endl;
	for (i = 0;i < k;i++) {
		cout << c[i] << " ";
	}
	cout << endl;
	cout << "Array C is " << endl;
	for (i = 0;i < k;i++) {
		cout << b[i] << " ";
	}
	return 0;
}