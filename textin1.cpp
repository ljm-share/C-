#include<iostream>
using namespace std;
int main()
{
	char ch;
	int count = 0;
	cout << "Enter character; enter # to quit:\n";
	cin >> ch;
	while (ch != '#')
	{
		cout << ch;
		//++count;
		cin >> ch;
	}
	cout << endl << count << " characters read\n";
	return 0;
}