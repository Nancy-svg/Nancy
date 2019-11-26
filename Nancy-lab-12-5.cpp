#include <iostream> 
#include <cmath>

using namespace std;
int main()
{
	int x, i, n, k;
	cout << "Enter N (N > 0)" << endl;
	cin >> n;
	x = 1;
	k = n % 2;
	if (k != 0) {
		for (i = 1;i < n+1;i = i + 2) {
			x = x * i;
		}
	}
	else {
		for (i = 2;i < n + 1;i = i + 2) {
			x = x * i;
		}
	}

	cout << x;
	return 0;
}