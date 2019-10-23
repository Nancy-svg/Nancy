#include <iostream> 
#include <cmath>
using namespace std;

int main()
{
	int a, b, c, k1, k2, k3;

	cout << "Enter A" << endl;
	cin >> a;
	cout << "Enter B" << endl;
	cin >> b;
	cout << "Enter C" << endl;
	cin >> c;

	k1 = abs(a - b);
	k2 = abs(a - c);

	if (k1 > k2) cout << "b" << "   distance is " << k1 << endl;
	else cout << "c" << "   distance is " << k2 << endl;
	return 0;
}
	
