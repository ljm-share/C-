#include<iostream>
int main()
{
    using namespace std;
    cout << "Input your birthday:__________\b\b\b\b\b\b\b\b\b\b";   //假设输入字符串,由于前面设置了10个_,则后面的退格符也设置10个,保证一致性
    string code;        //定义code类型为string,以便存放字符串
    cin >> code;
    cout << "Your birthday is " << code;

}
