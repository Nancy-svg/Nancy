#include <iostream>   
#include <cmath>
using namespace std;
int main()
{
	float x1, x2, y1, y2, k, n, result;
	cout << "Enter (x1;y1)" << endl;
	cin >> x1 >> y1;
	cout << "Enter (x2;y2)" << endl;
	cin >> x2 >> y2;
	k = abs(x2 - x1);
	n = abs(y2 - y1);
	result = k * n; 
	cout << "S = " << result << endl;
	result = (k + n) * 2;
	cout << "P = " << result << endl;
	return 0;
} 