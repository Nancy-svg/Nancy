#include <iostream>   
#include <cmath>
using namespace std;
int main()
{
	float x1, x2, x3, y1, y2, y3, a, b, p, c, result;
	cout << "Enter (x1;y1)" << endl;
	cin >> x1 >> y1;
	cout << "Enter (x2;y2)" << endl;
	cin >> x2 >> y2;
	cout << "Enter (x3;y3)" << endl;
	cin >> x3 >> y3;
	a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	p = a + b + c;
	cout << "P = " << p << endl;
	p = p / 2;
	result = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "S = " << result << endl;
	
	return 0;
}