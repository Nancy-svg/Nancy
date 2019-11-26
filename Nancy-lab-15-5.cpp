#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int i, x, n, j;
	cout << "Enter N" << endl;
	cin >> n;
	int* array = new int[n];
	for (i = 0;i < n;i++) {
		cout << "Enter array[" << i + 1 << "] ";
		cin >> array[i];
	}

	cout << "Array is :  ";
	for (i = 0;i < n;i++) {
		cout << array[i] << " ";
	}
	x = array[0];
	for (i = 1;i < n - 1;i++) {
		if (array[0] > array[i] && array[0] < array[i + 1]) {
			for (j = 0;j < i; j++) {
				array[j] = array[j + 1];
			}
			array[i] = x;
		}
	}
	cout << "New array is :  ";
	for (i = 0;i < n;i++) {
		cout << array[i] << " ";
	}

	return 0;
}
