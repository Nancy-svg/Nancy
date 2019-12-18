#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int min,p, k, n, m, i, j;
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
	min = 32000;
	p = 1;
	for (i = 0;i < m; i++) {
		for (j = 0;j < n;j++) {
			p = p * array[j][i];
		}
		if (p < min) {
			min = p;
			k = i + 1;
		}
		p = 1;
	}
	cout << "Stolbec : " << k << endl;
	cout << "Min proizved : " << min << endl;
	return 0;
}