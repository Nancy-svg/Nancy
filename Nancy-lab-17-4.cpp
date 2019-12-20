#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int n, k, o, i, m, max;
	cout << "Enter N" << endl;
	cin >> n;
	max = -1;
	int* x = new int[n];
	int* y = new int[n];
	for (i = 0;i < n;i++) {
		cout << "Enter a[" << i + 1 << "] x and y  " ;
		cin >> x[i] >> y[i];
	}
	for (i = 0;i < n;i++) {
		cout << "A[" << x[i] << ";" << y[i] << "]" << endl;
	}
	for (i = 0;i < n;i++) {
		if ( x[i] < 0 && y[i]>0) {
			k = sqrt(pow(x[i], 2) + pow(y[i], 2));
				if (k > max) {
					max = k;
					m = i;
				}
		}
	}
	cout << "Result is " << endl;
	if (k != -1) {
		cout << "A[" << x[m] << ";" << y[m] << "]" << endl;
	}

	return 0;
}