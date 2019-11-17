#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int n, k, o, i, m, max, min;
	max = -32000;
	min = 32000;
	cout << "Enter N" << endl;
	cin >> n;
	m = n + 2;
	int* array = new int[m];
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
			k = i;
		}
		if (array[i] > max) {
			max = array[i];
		    o = i;
		}
	}
	for (i = n;i > k;i--) {
		array[i] = array[i - 1];
	}
	n++;
	array[k] = 0;
	for (i = n;i > o + 1;i--) {
		array[i] = array[i - 1];
	}
	array[o+2] = 0;
	cout << endl;
	cout << "Array new is :  ";
	for (i = 0;i < m;i++) {
		cout << array[i] << " ";
	}
	return 0;
}