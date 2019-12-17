#include <iostream>   
#include <cmath>
using namespace std;
int Fact2(int n)
{
	int k, x, i;
	x = 1;
	k = n % 2;
	if (k != 0) {
		for (i = 1;i < n + 1;i = i + 2) {
			x = x * i;
		}
	}
	else {
		for (i = 2;i < n + 1;i = i + 2) {
			x = x * i;
		}
	}
	return x;
}
int main()
{
	int n;
	cout << "Enter N (N > 0)" << endl;
	cin >> n;
	cout << "Result is " << Fact2(n) << endl;
	return 0;
}
