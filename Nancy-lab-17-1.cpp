#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int n, k, i, j, m;

	cout << "Enter N" << endl;
	cin >> n;
	int* array = new int[n];
	k = 0;
	for (i = 0;i < n;i++) {
		cout << "Enter array[" << i + 1 << "] ";
		cin >> array[i];
	}
	cout << "Array is :  ";
	for (i = 0;i < n;i++) {
		cout << array[i] << " ";
	}
	for (i = 0;i < n;i++) {
		for (j = 0;j < n - 1;j++) {
			if (array[i] != array[i + 1]) {
				k = k + 1;
				j = n;
			}
		}
	}
	cout << endl;
	cout << k << endl;
	return 0;
}