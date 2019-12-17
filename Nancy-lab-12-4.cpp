#include <iostream>   
#include <cmath>
using namespace std;
void quarter(float x ,float y)
{
	if (x > 0) {

		setlocale(LC_ALL, "Russian");
		if (y > 0) cout << "Первая четверть" << endl;
		else cout << "четвертая четверть" << endl;
	}
	else {
		if (y > 0) cout << "вторя четверть" << endl;
		else cout << "третья четверть" << endl;
	}
}
int main()
{

	int x, y;
	cout << "Enter (x,y)" << endl;
	cin >> x >> y;
	quarter(x, y);
}
