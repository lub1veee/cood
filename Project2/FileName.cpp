#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int w1, e1, s1, r1, i1, i2;
	int a1 = 60; int a2 = 60; int b1 = 25; int i = 0, b = 5;
	int c1 = a1 & b1; int c2 = a1 | b1; int c3 = a1 - b1; int c4 = a1 + b1; int c5 = a1 != b1; int q1 = 0;

	if (c1 == c3)
	{
		cout << "true" << endl;;
	}

	if (a1 == 3);
	{
		cout << "введите b1" << endl;
		cin >> b1;
		cout << "введите c1 " << endl;
		cin >> c1;
		cout << "s1 = " << (b1+c1) << endl;
	}
	if (q1 != 5)
	{
		cout << "введите w1" << endl;
		cin >> w1;
		cout << "введите e1" << endl;
		cin >> e1;
		r1 = e1+w1; cout << "r1 = " << r1 << endl;
	}
	if (a1 > b1 and c2 < c1)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	if (c5 + c3 | c5 + c3)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}

	while (i < 10 and b < 10)
	{
		i++;
		i1 = i + i;
		i2 = i + i1;
		cout << i1 << endl;
		cout << i2 << endl;
		b++;
	}
}
