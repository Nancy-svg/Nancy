#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int min, k , n, m, i, j;
	cout << "Enter N" << endl;
	cin >> n;
	cout << "Enter M" << endl;
	cin >> m;
	int** array = new int* [n];
	for (int i = 0; i < m; i++) {
		array[i] = new int[m];
	}
	for (i = 0;i < m;i++) {
		for (j = 0;j < n;j++) {
			cout << "Array [" << i + 1 << "][" << j + 1 << "]" << endl;
			cin >> array[i][j];
		}
	}
	for (j = 0;j < m;j++) {
		for (i = 0;i < n;i++) {
			cout << array[j][i] << " ";
		}
		cout << endl;
	}
	min = 32000;
	for (i = 0;i < n;i++) {
		if (array[0][i] < min) {
			min = array[0][i];
			k = i;
		}
	}
	if (min != 32000) {
		swap(array[0][0],array[0][k]);
	}
	for (i = 1;i < m;i++) {
		min = 32000;
		for (j = 0;j < n;j++) {
			if (array[i][j]<min && array[i][j]>array[i - 1][j]) {
				min = array[i][j];
				k = j;
			}
		}
		if (min != 32000) {
			swap(array[i][0], array[i][k]);
		}
	}
	cout << "Array new" << endl;
	for (j = 0;j < m;j++) {
		for (i = 0;i < n;i++) {
			cout << array[j][i] << " ";
		}
		cout << endl;
	}
	return 0;

}