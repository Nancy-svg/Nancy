#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int n, k, i, m, j;

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

	for (i = 0;i < n;i++) {
		k = 1;
		for (j = i + 1;j < n;j++) {
			if (array[i] != array[j])
				j = n;
			else {
				k = k + 1;
			}
		}
		if (k != 1) {
			for (j = i ;j < n;j++)
				array[j] = array[j + k];
		}
		if (k != 1) {
			n = n - k;
		}
	}
	cout << endl;
	cout << "Array new is :  ";
	for (i = 0;i < n;i++) {
		cout << array[i] << " ";
	}
	return 0;


}