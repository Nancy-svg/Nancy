#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int x, n, k, i, g;
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
	cout << " " << endl;
	x = 0;
	g = 0;
	for (i = 0;i < n;i++) {
		k = i % 2;
		if (k == 0) {cout << 
			array[x] << " ";
		x = x + 1;}
		else {cout << 
			array[n - 1 - g] << " ";
		g = g + 1;}
	}
	return 0;
}
