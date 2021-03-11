#include<iostream>
int main()
{
    using namespace std;
    int things[] = {1,3,5,8};
    int num_elements = sizeof things / sizeof (int);
    cout << num_elements;
}
