#include <iostream> 

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

	k1 = a + b;
	k2 = a + c;
	k3 = b + c;

	if (k1 > k2 && k1 > k3) cout << "result is " << k1;
	else {
		if (k2 > k1 && k2 > k3) cout << "result is " << k2;
		else {
			if (k3 > k1 && k3 > k2) cout << "result is " << k3;
			else cout << "There are equal elements";
		}
	}
	return 0;
}
