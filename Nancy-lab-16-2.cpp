#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int n, k, i, j, m, t;

	cout << "Enter N" << endl;
	cin >> n;
	k = 0;
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
		for (j = 0;j < n;j++) {
			if (array[i] == array[j] && i != j) {
				for (m = j; m < n -1;m++) {
					array[m] = array[m + 1];
				}
				n--;
				for (m = i; m < n - 1;m++) {
					array[m] = array[m + 1];
				}
				n--;
				i--;
			}
			
		}
	}
	cout << "Array new is :  ";
	for (i = 0;i < n;i++) {
		cout << array[i] << " ";
	}
	return 0;
}


			
