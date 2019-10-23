 #include <iostream> 

using namespace std;

int main()
{
	int a, b, k;

	cout << "Enter A" << endl;
	cin >> a;
	cout << "Enter B" << endl;
	cin >> b;

	if (a != b){
		if (a > b) b = a;
		else a = b;
	}
	else {
		a = 0;
		b = 0;
	}
	cout << "A = " << a << "   B = " << b << endl;
	return 0;
}

