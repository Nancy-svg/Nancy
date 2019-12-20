#include <iostream>
#include <string>
#include <fstream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	char text[500];
	string txt1 = "C:\\Users\\User\\Desktop\\22 лабараторная\\31 лаб.txt";
	string txt2 = "C:\\Users\\User\\Desktop\\22 лабараторная\\32 лаб.txt";
	ofstream prt;
	prt.open(txt2, ofstream::app);
	ifstream abc;
	abc.open(txt1, ifstream::app);
	while (!abc.eof())
	{
		abc.getline(text, sizeof(text));
		prt << text << endl;
	}
	abc.close();
	prt.close();
	return 0;
}