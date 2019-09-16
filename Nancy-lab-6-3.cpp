#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int k, n, result;
	cout << "Enter K (0 < k < 360)" << endl;
	cin >> k;
	cout << "Enter N (-1 < k < 8)";
		cin >> n;
	result = k % 7;
	result += n;
	result = (result % 7) - 1;
	cout << "k = " << result << endl;
}