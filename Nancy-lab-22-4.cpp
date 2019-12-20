#include <iostream>
#include <string>
#include <fstream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string path = "C:\\Users\\User\\Desktop\\22 лабараторная\\4 лаб.txt";
	fstream abc;
	abc.open(path);
	string text;
		while (abc >> text)
		{
			cout << ' ' << text;
		}
	abc.close();
	return 0;
}
