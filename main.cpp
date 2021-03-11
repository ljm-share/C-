#include<iostream>
#include<string>
#include"Rational.h"

using namespace std;

void main()
{
	string num;
	cout << "please enter a double number" << endl;
	cin >> num;

	while (!cin)
	{
		cin.clear();
		cout << "error" << endl;
		cout << "please enter a double number" << endl;
		cin >> num;
	}
	Rational fenshu;
	int fz = 0, fm = 1;
	fenshu.change(num, fz, fm);
}
