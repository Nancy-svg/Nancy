#include <iostream>   
#include <cmath>
using namespace std;
int main()
{
	int n, k, result;
	cout << "Enter N (N > 0)" << endl;
	cin >> n;
	k = 0;
	result = 0;
	while (k <= n) {
		result++;
		k = k + result;
	}
	
	cout << "k = " << result << endl;
	cout << "Summa 1 + 2 + 3 + ... + k = " << k << endl;

	return 0;
}