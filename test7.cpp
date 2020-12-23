#include<iostream>
using namespace std;
int main()
{
	//while(1>0)
	//{
		double arr[5] = { 21.1,32.8,23.4,45.2,37.4 };
		double* pt = arr;
		cout << *pt << endl;
		*pt++;
		cout << pt << endl;
		cout << *pt << endl;
		++pt;
		cout << *pt << endl;
		cout << pt << endl;
	//}
		return 0;
}