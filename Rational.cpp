
#include "Rational.h"
#include<iostream>
#include<math.h>
#include<string>

using namespace std;

void Rational::change(string num, int  fz, int  fm)
{
	bool flag = 0;
	char ch;
	for (int i = 0; i < num.length(); i++)
	{
		ch = num[i];
		if (ch == '.')	flag = 1;
		else
		{
			fz = fz * 10 + ch - '0';			/*fz==分子，fm==分母*/
			if (flag) fm *= 10;
		}
	}

	for (int i = 2; i <= fz; i++)				/*以下为化简*/
	{
		if (fz%i == 0 && fm%i == 0)
		{
			fz /= i;
			fm /= i;
			i = 1;
		}
	}
	cout << fz << '/' << fm << endl;
	return;
}
