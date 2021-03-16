#include<iostream>
int main()
{
    using namespace std;
    const int size = 20;
    char name[size];
    char name2[size];

    cout << "Enter name:\n";
    cin.get(name,size).get()

    ;
    cout << "Enter name:\n";
    cin.get(name2,size).clear();
    cout << "Name: " << name << endl;
    cout << "Name2: " << name2 << endl;

}
