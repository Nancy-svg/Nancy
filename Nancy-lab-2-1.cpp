#include <iostream>   
#include <cmath>
using namespace std;
int main()
{
	float x1, x2, y1, y2, result;
	cout << "Enter x1 and x2" << endl;
	cin >> x1 >> x2;
	cout << "Enter y1 and y2" << endl;
	cin >> y1 >> y2;
	result = sqrt((x2-x1) * (x2 - x1) + (y2-y1) * (y2 - y1)) ;
	cout << "Result is" << result << endl;
    return 0;
}