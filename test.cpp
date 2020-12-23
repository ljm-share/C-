#include<iostream>
int main()
{
	int x;
	std::cin >> x;
	x = 2 * x++ * (3 - ++x);
	std::cout << x;
	return 0;
}