#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int min, max, k1, k2, k3, n, m, i, j;
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
	for (i = 0;i < m;i++) {
		min = 32000;
		max = -32000;
		for (j = 0;j < n;j++) {
			if (array[i][j] > max) {
				max = array[i][j];
				k1 = j;
			}
			if (array[i][j] < min) {
				min = array[i][j];
				k2 = j;
			}
		}
		k3 = array[i][k1];
		array[i][k1] = array[i][k2];
		array[i][k2] = k3;
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