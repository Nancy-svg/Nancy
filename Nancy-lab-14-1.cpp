#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int a, i, n, k, l;
	cout << "Enter N" << endl;
	cin >> n;
	cout << "Enter k and L (1<=k<=l<=n)" << endl;
	cin >> k >> l;

	int* array = new int[n];

	for (i = 0;i < n;i++) {
		cout << "Enter array[" << i + 1 << "] = ";
		cin >> array[i];
	}

	for
