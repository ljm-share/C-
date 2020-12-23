#include<iostream>
using namespace std;
const int ArSize = 67;
int main()
{
	double factorials[ArSize];
	factorials[1] = factorials[0] = 1LL;
	for (int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < ArSize; i++)
		std::cout << i << "! = " << factorials[i] << std::endl;
	//	return 0;
	//接下来测试最大溢出
	double a, b, c;
	//a = 121645100408832000;
	//b = 20;
	//c = a * b;
	//cout << c;
	return 0;

}
