#include <iostream> 
#include <cmath>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int y, x;
	cout << "Enter (x,y)" << endl;
	cin >> x >> y;

	if (x > 0) {
		if (y > 0) cout << "Первая четверть" << endl;
		else cout << "четвертая четверть" << endl;
	}
	else{
		if (y > 0) cout << "вторя четверть" << endl;
		else cout << "третья четверть" << endl;
	}
	return 0;
}