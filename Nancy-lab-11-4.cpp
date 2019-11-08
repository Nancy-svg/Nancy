#include <iostream>   
#include <cmath>
using namespace std;
int main()
{
	int p, s, k, result;
	cout << "Enter P (0 < P < 25)" << endl;
	cin >> p;
	s = 1000;
	k = 0;
	while (s < 1100) {
		k++;
		s = s + s * p / 100;
	}
	
	cout << "month is " << k << endl;
	cout << "Summa " << s << endl;
	return 0;
}
 