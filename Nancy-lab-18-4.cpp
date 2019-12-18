#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int k, n, m, i, j;
	float sred , sum;
	sum = 0;
	cout << "Enter N" << endl;
	cin >> n;
	cout << "Enter M" << endl;
	cin >> m;
	int** array = new int* [n];
	for (int i = 0; i < n; i++) {
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
	for (j = 0;j < m;j++) {
		for (i = 0;i < n;i++) {
			sum = sum + array[j][i];
		}
	}
	k = m * n;
	sred = sum / k;
	k = 0;
	cout << "Result is " << endl;
	for (j = 0;j < n;j++) {
		for (i = 0;i < m;i++) {
			if (array[i][j] > sred) {
				k++;
			}
		}
		cout << k << " ";
		k = 0;
	}
	return 0;
}