#include <iostream>
#include <string>
#include <fstream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int k = 0;
	string path = "C:\\Users\\User\\Desktop\\22 лабараторная\\5 лаб.txt";
	ifstream abc;
	abc.open(path);
	string text;
	{

		while (!abc.eof())
		{
			getline(abc, text);
			if (text.substr(0, 5) == "     ")
			{
				k++;
			}
		}
	}
	abc.close();
	cout << k;
	return 0;
}
