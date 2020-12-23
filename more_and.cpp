#include<iostream>
const char* qualify[4] =
{
	"10",
	"20",
	"30",
	"40_"
};

const char* aritist[4] =
{
	"10",
	"20",
	"30",
	"40_"
};

int main()
{
	using namespace std;
	int age;
	cout << "Enter your age in years: ";
	cin >> age;
	int index;

	if (age > 0 && age < 10)
		index = 0;
	else if (age >= 10 && age <= 20)
		index = 1;
	else if (age >= 20 && age <= 30)
		index = 2;
	else
		index = 3;
	
	cout << "You qualify for the " << aritist[index];
	return 0;
}

