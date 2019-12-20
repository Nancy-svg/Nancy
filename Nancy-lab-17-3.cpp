#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int n, k, k1, i, j, m, x, p, l;

	cout << "Enter N" << endl;
	cin >> n;
	cout << "Enter K" << endl;
	cin >> k1;
	k1--;
	int* array = new int[n];
	int* a = new int[n];
	int* b = new int[n];
	k = 0;
	x = 1;
	p = 0;
	for (i = 0;i < n;i++) {
		cout << "Enter array[" << i + 1 << "] ";
		cin >> array[i];
	}
	cout << "Array is :  ";
	for (i = 0;i < n;i++) {
		cout << array[i] << " ";
	}
	cout << "New array ";
	for (i = 0; i < n - 1; i++)
	{
		if (array[i] != array[i + 1]){
			a[p] = array[i];
			b[p] = x;
			x = 1;
			p++;
		}
		else
			x++;
	}
    a[p] = array[n - 1];
	b[p] = x;
	x = 0;
	for (i = 0; i < p; i++)
	{
		if (i == k1)
		{
			for (j = 0; j < b[p]; j++)
			{
				array[x] = a[p];
				cout << array[x] << " ";
				x++;
			}
		}
		else
		{
			for (j = 0; j < b[i]; j++)
			{
				array[x] = a[i];
				cout << array[x] << " ";
				x++;
			}
		}
	}

	for (i = 0; i < b[k1]; i++)
	{
		array[x] = a[k1];
		cout << array[x] << " ";
		x++;
	}
	return 0;
}