#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int a, i, n;
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
	cout << endl;
	cout << "New array is :  ";
	for (i = 0;i < n;i++) {
		if (i % 2 == 0) {
			cout << array[i] << " ";
		}
	}
	for (i = 0;i < n;i++) {
		if (i % 2 == 1) {
			cout << array[i] << " ";
		}
	}
	return 0;
}