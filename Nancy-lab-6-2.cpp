#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int k, result;
	cout << "Enter K (0 < k < 360)" << endl;
	cin >> k;

	result = k % 7;
	cout << "k = " << result << endl;
}