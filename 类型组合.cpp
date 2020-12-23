#include<iostream>
int main()
{
	using namespace std;
	//struct antarctica_years_end
	//{
	//	int year;
	//};
	//antarctica_years_end s01, s02, s03;
	//s01.year = 1998;
	//antarctica_years_end* pa = &s02;
	//pa->year = 1999;
	char temp[80];
	cin >> temp;
	cout << &temp << "\n";
	char* pn = new char[strlen(temp)];
	cout << &pn;
	//cout << pn << "\n" << &pn << "\n" << *pn << "\n";
	//cout << s01.year << "\n" << &s01.year << "\n";
	//cout << pa;
}