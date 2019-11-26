#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int a, d, i, n;
	cout << "Enter N" << endl;
	cin >> n;
	int* array = new int[n];
	cout << "Enter A" << endl;
	cin >> a;
	cout << "Enter D" << endl;
	cin >> d;
	array[0] = a;
	cout << array[0] << " ";
	for (i = 1; i < n; i++) {
		array[i] = array[i - 1] * d;
		cout << array[i] << " ";
	}
	return 0;
}
