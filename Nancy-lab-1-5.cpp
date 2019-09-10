#include <iostream>  
#include <cmath>
using namespace std;
int main()
{
	
	float a, b, result ,abs_a, abs_b;
	cout << "Enter a" << endl;
	cin >> a;
	abs_a = abs(a);
	cout << "Enter b" << endl;
	cin >> b;
	abs_b = abs(b);
	result = abs_a + abs_b;
	cout << "Summa modyleu" << " "<< result << endl;
	result = abs_a - abs_b;
	cout << "Raznost moduleu" << " " << result << endl;
	result = abs_a * abs_b;
	cout << "Proizvedenie moduleu" << " " << result << endl;
	result = abs_a / abs_b;
	cout << "Chastnoe moduleu" << " " << result << endl;
	return 0;
}