//Ó¢°÷×ª»»Îª°÷
#include<iostream>
const int per_in_pound = 14;
int main()
{
    using namespace std;
    int in_pounds;
    cout << "Enter your have pounds number: ";
    cin >> in_pounds;

    int stone = in_pounds / per_in_pound;
    int pounds = in_pounds % per_in_pound;

    cout << "The stone " << stone << " and the pounds " << pounds << endl;

}
